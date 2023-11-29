#include <iostream>
using namespace std ;

// 创建名为Point的类
class Point
{
private:
    int x ;
    int y ;

public:
    // 构造函数，使用传入的x和y坐标初始化成员变量
    Point(int xCoord, int yCoord)
    {
        x = xCoord ;
        y = yCoord ;
    }

    // 显示点的坐标
    void displayPoint()
    {
        cout << "点的坐标：(" << x << ", " << y << ")" << endl ;
    }

    // 更改私有成员点的坐标
    void changePoint(int newX, int newY)
    {
        x = newX ;
        y = newY ;
    }
};

// 定义类Rectangle，以公有的方式继承Point类
class Rectangle : public Point
{
private:
    int length ;
    int width ;

public:
    // 构造函数，使用传入的点坐标、长度和宽度初始化成员变量
    Rectangle( int xCoord , int yCoord , int rectLength , int rectWidth ) : Point( xCoord , yCoord )
    {
        length = rectLength ;
        width = rectWidth ;
    }

    // 成员函数，计算矩形的面积
    int S()
    {
        return length * width ;
    }

    // 成员函数，计算矩形的周长
    int C()
    {
        return 2 * (length + width) ;
    }
} ;

int main()
{
    int x , y ;
    cout << "请输入点的x坐标：" ;
    cin >> x ;
    cout << "请输入点的y坐标：" ;
    cin >> y ;

    // 创建Point对象并显示坐标
    Point point(x, y) ;
    point.displayPoint() ;

    // 更改Point对象的坐标并显示
    int newX , newY ;
    cout << "请输入更改后的x坐标：" ;
    cin >> newX;
    cout << "请输入更改后的y坐标：" ;
    cin >> newY ;
    point.changePoint(newX, newY) ;
    point.displayPoint() ;

    // 创建Rectangle对象并计算面积和周长
    int length , width ;
    length = newX ;
    width = newY ;
    Rectangle rectangle( x , y , length , width ) ;
    int S = rectangle.S() ;
    int C = rectangle.C() ;

    // 显示矩形的面积和周长
    cout << "矩形的面积：" << S << endl ;
    cout << "矩形的周长：" << C << endl ;

    return 0 ;
}