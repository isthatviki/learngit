#include <iostream>
#include <cmath>
using namespace std ;

// 创建名为Point的类
class Point 
{
private:
    int x ;
    int y ;

public:
    // 构造函数，使用传入的x和y坐标初始化成员变量
    Point ( int xCoord , int yCoord )
    {
        x = xCoord ;
        y = yCoord ;
    }

    // 成员函数，显示点的坐标
    void displayP()
    {
        cout << "点的坐标：(" << x << ", " << y << ")" << endl ;
    }

    // 成员函数，更改点的坐标
    void changeP ( int newX , int newY )
    {
        x = newX ;
        y = newY ;
    }
};

// 创建名为Shape的类
class Shape
{
public:
    // 虚函数，计算面积
    virtual double S() = 0 ;

    // 虚函数，计算周长
    virtual double C() = 0 ;
};

// 从Shape类中派生Circle类
class Circle : public Shape
{
private:
    double radius ; // 半径

public:
    // 构造函数，使用传入的半径初始化成员变量
    Circle ( double circleRadius )
    {
        radius = circleRadius ;
    }

    // 重写虚函数，计算圆的面积
    double S() override
    {
        return M_PI * pow( radius , 2 ) ;
    }

    // 重写虚函数，计算圆的周长
    double C() override
    {
        return 2 * M_PI * radius ;
    }
};

// 从Shape类中派生Rectangle类
class Rectangle : public Shape
{
private:
    double length ; // 长度
    double width ; // 宽度

public:
    // 构造函数，使用传入的长度和宽度初始化成员变量
    Rectangle ( double rectLength , double rectWidth )
    {
        length = rectLength ;
        width = rectWidth ;
    }

    // 重写虚函数，计算矩形的面积
    double S() override
    {
        return length * width ;
    }

    // 重写虚函数，计算矩形的周长
    double C() override
    {
        return 2 * ( length + width ) ;
    }
};

// 从Shape类中派生Triangle类
class Triangle : public Shape
{
private:
    double a ; // 第一条边长
    double b ; // 第二条边长
    double c ; // 第三条边长

public:
    // 构造函数，使用传入的边长初始化成员变量
    Triangle ( double triSide1 , double triSide2 , double triSide3 )
    {
        a = triSide1 ;
        b = triSide2 ;
        c = triSide3 ;
    }

    // 重写虚函数，计算三角形的面积
    double S() override
    {
        int p = (a+b+c)/2 ; // 半周长
        return sqrt( p*(p-a)*(p-b)*(p-c) ) ;
    }

    // 重写虚函数，计算三角形的周长
    double C() override
    {
        return a + b + c ;
    }
} ;

int main()
{
    // 创建Circle对象并计算面积和周长
    double radius ;
    cout << "请输入圆的半径：" ;
    cin >> radius ;
    Circle circle(radius) ;
    double circleS = circle.S() ;
    double circleC = circle.C() ;
    cout << "圆的面积：" << circleS << endl ;
    cout << "圆的周长：" << circleC << endl ;

    // 创建Rectangle对象并计算面积和周长
    double length , width ;
    cout << "请输入矩形的长度：" ;
    cin >> length ;
    cout << "请输入矩形的宽度：" ;
    cin >> width ;
    Rectangle rectangle(length, width) ;
    double rectangleS = rectangle.S() ;
    double rectangleC = rectangle.C() ;
    cout << "矩形的面积：" << rectangleS << endl ;
    cout << "矩形的周长：" << rectangleC << endl ;

    // 创建Triangle对象并计算面积和周长
    double a , b , c ;
    cout << "请输入三角形的第一条边长：" ;
    cin >> a ;
    cout << "请输入三角形的第二条边长：" ;
    cin >> b ;
    cout << "请输入三角形的第三条边长：" ;
    cin >> c ;
    Triangle triangle( a , b , c ) ;
    double triangleS = triangle.S() ;
    double triangleC = triangle.C() ;
    cout << "三角形的面积：" << triangleS << endl ;
    cout << "三角形的周长：" << triangleC << endl ;

    return 0;
}