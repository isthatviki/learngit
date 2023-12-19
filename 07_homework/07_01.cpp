// 按下a键，显示下一项处理结果，按esc键随时退出

#include <iostream>
#include <opencv2/opencv.hpp>

int main()
{
    cv::VideoCapture cap;
    cv::Mat frame;

    int key = 0;
    int mode = 1; // 初始模式为1，表示显示图像

    while (key != 27) // 27对应于Esc键
    {
        
        // 加载图片
        if (mode == 1)
        {
            std::string image_path = "file/omg.jpg";
            cv::Mat pic = cv::imread(image_path, 1);
            if (pic.empty())
            {
                std::cout << "打开文件错误: " << image_path << std::endl;
                return 0;
            }
            cv::imshow("Image", pic);
            key = cv::waitKey(0); // 等待任意键按下
            if (key == 27)
                return 0; // 退出程序
            else if (key == 'a')
                mode = 2; // 切换到加载视频的模式
        }
        
        // 加载视频
        else if (mode == 2)
        {
            std::string video_path = "file/firework.mp4";
            cap.open(video_path);
            if (!cap.isOpened())
            {
                std::cout << "打开文件错误: " << video_path << std::endl;
                return 0;
            }
            while (cap.read(frame))
            {
                cv::imshow("Video", frame);
                key = cv::waitKey(1);
                if (key == 27)
                {
                    cap.release();
                    return 0; // 退出程序
                }
                else if (key == 'a')
                {
                    cap.release();
                    mode = 3; // 切换到加载摄像头的模式
                    break;
                }
            }
        }
        
        // 加载摄像头
        else if (mode == 3)
        {
            cap.open(0);
            if (!cap.isOpened())
            {
                std::cout << "打开摄像头错误" << std::endl;
                return 0;
            }
            while (cap.read(frame))
            {
                cv::imshow("Camera", frame);
                key = cv::waitKey(1);
                if (key == 27)
                {
                    cap.release();
                    return 0; // 退出程序
                }
            }
        }

        // 等待一段时间，确保窗口有足够时间显示
        cv::waitKey(1000);
    }

    cv::destroyAllWindows();
    return 0;
}