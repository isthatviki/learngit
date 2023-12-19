/*
按下1显示原始图像
按下2显示边缘检测图像
按下3显示碰撞操作图像
按下4显示侵蚀操作图像
按下5显示缩放50%图像
*/ 

#include <opencv2/opencv.hpp>
#include <iostream>

int main()
{
    // 加载图像
    cv::Mat image = cv::imread("file/omg.jpg", cv::IMREAD_COLOR);

    // 检查图像是否成功加载
    if (image.empty())
    {
        std::cout << "无法加载图像" << std::endl;
        return -1;
    }

    // 显示原始图像
    cv::imshow("原始图像", image);
    cv::waitKey(0);

    // 边缘检测
    cv::Mat edges;
    cv::Canny(image, edges, 100, 200);
    cv::imshow("边缘检测", edges);

    // 膨胀操作
    cv::Mat dilated;
    cv::dilate(edges, dilated, cv::Mat());
    cv::imshow("膨胀操作", dilated);

    // 侵蚀操作
    cv::Mat eroded;
    cv::erode(dilated, eroded, cv::Mat());
    cv::imshow("侵蚀操作", eroded);

    // 缩放图像为50%
    cv::Mat resized;
    cv::resize(image, resized, cv::Size(), 0.5, 0.5);
    cv::resizeWindow("缩放图像", image.cols / 2, image.rows / 2); // 调整窗口大小为原画布的50%
    cv::imshow("缩放图像", resized);

    int key = cv::waitKey(0);
    while (key != 27) 
    {
        if (key == '1') 
        {
            cv::imshow("原始图像", image);
        } 
        else if (key == '2') 
        {
            cv::imshow("边缘检测", edges);
        } 
        else if (key == '3') 
        {
            cv::imshow("膨胀操作", dilated);
        } 
        else if (key == '4') 
        {
            cv::imshow("侵蚀操作", eroded);
        } 
        else if (key == '5')
        {
            cv::imshow("缩放图像", resized);
        }
        key = cv::waitKey(0);
    }

    return 0;
}