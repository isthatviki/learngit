/*
按下1显示原始图像
按下2显示灰度图像
按下3显示二值化图像
按下4显示高斯模糊图像
*/ 

#include <opencv2/opencv.hpp>
#include <iostream>

int main() 
{
    cv::Mat image = cv::imread("file/omg.jpg");

    // 检查图像是否成功加载
    if (image.empty())
    {
        std::cout << "无法加载图像" << std::endl;
        return -1;
    }

    // 原始图像
    cv::imshow("原始图像", image);

    // 灰度图像
    cv::Mat grayImage;
    cv::cvtColor(image, grayImage, cv::COLOR_BGR2GRAY);
    cv::imshow("灰度图像", grayImage);

    // 二值化图像
    cv::Mat binaryImage;
    cv::threshold(grayImage, binaryImage, 128, 255, cv::THRESH_BINARY);
    cv::imshow("二值化图像", binaryImage);

    // 高斯模糊图像
    cv::Mat blurredImage;
    cv::GaussianBlur(grayImage, blurredImage, cv::Size(5, 5), 0); 
    cv::imshow("高斯模糊图像", blurredImage);

    int key = cv::waitKey(0);
    while (key != 27) 
    {
        if (key == '1') 
        {
            cv::imshow("原始图像", image);
        } 
        else if (key == '2') 
        {
            cv::imshow("灰度图像", grayImage);
        } 
        else if (key == '3') 
        {
            cv::imshow("二值化图像", binaryImage);
        } 
        else if (key == '4') 
        {
            cv::imshow("高斯模糊图像", blurredImage);
        }
        key = cv::waitKey(0);
    }

    return 0;
}