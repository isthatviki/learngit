// 按下任意键退出程序

#include <iostream>
#include <opencv2/opencv.hpp>

cv::Mat image;
int brightness = 50; // 初始亮度值
int contrast = 50; // 初始对比度值

//更新图像亮度和对比度调整至，并将调整后的图像显示出来
void updateImage()
{
    cv::Mat adjustedImage;
    int brightnessValue = brightness - 50;
    double contrastValue = contrast / 50.0;

    image.convertTo(adjustedImage, -1, contrastValue, brightnessValue);
    cv::imshow("Adjusted Image", adjustedImage);
}

// 更新图片亮度函数
void onBrightnessChange(int value, void* userdata)
{
    updateImage();
}

// 更新图片对比度函数
void onContrastChange(int value, void* userdata)
{
    updateImage();
}

int main()
{
    // 加载图像
    std::string imagePath = "file/omg.jpg";
    image = cv::imread(imagePath);

    if (image.empty())
    {
        std::cout << "Failed to open image: " << imagePath << std::endl;
        return -1;
    }

    // 创建窗口
    cv::namedWindow("Adjusted Image");

    // 创建亮度滑动条
    cv::createTrackbar("Brightness", "Adjusted Image", &brightness, 100, onBrightnessChange);

    // 创建对比度滑动条
    cv::createTrackbar("Contrast", "Adjusted Image", &contrast, 100, onContrastChange);

    // 显示图像
    updateImage();

    // 退出程序
    cv::waitKey(0);
    cv::destroyAllWindows();

    return 0;
}