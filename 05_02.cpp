#include <iostream>
using namespace std ;

// 定义名为Triangle的类
class Triangle 
{
private:
    double side1 ; 
    double side2 ; 
    double side3 ; 

public:
    // 构造函数，用于初始化三边长度
    Triangle( double s1 , double s2 , double s3 ) 
    {
        side1 = s1 ;
        side2 = s2 ;
        side3 = s3 ;
    }

    // 判断三角形类型并打印结果
    void Type() 
    {
        if ( side1 == side2 && side2 == side3 ) 
        {
            cout << "这是一个等边三角形" << endl ;
        }
        else if ( side1 == side2 || side1 == side3 || side2 == side3 ) 
        {
            cout << "这是一个等腰三角形" << endl ;
        } 
        else
        {
            cout << "这是一个不等边三角形" << endl ;
        }
    }
} ;

int main() 
{
    double side1, side2, side3 ;
    cout << "请输入三角形的三条边长：" << endl ;
    cin >> side1 >> side2 >> side3 ;

    // 判断是否可以构成三角形
    while ( side1 + side2 <= side3 || side2 + side3 <= side1 || side1 + side3 <= side2 )
    {
        cout << "这三条边构不成三角形，请重新输入" << endl ;
        cin >> side1 >> side2 >> side3 ;
    }

    // 创建Triangle对象并用输入的边长值初始化
    Triangle triangle(side1, side2, side3) ;
    
    // 调用成员函数判断三角形类型并打印结果
    triangle.Type() ;
    return 0 ;
}