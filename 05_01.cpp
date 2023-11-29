# include <iostream>
# include <cmath>
using namespace std ;

// 定义Circle的类
class Circle 
{
private:
    double radius ; // 半径

public:
    // 构造函数，用于初始化半径
    Circle(double r) 
    {
        radius = r ;
    }

    // 计算圆的面积
    double S() 
    {
        return M_PI * radius * radius ;
    }

    // 计算圆的周长
    double C() 
    {
        return 2 * M_PI * radius ;
    }
};

int main() 
{
    double radius;
    cout << "请输入圆的半径: " ;
    cin >> radius ;

    // 创建Circle对象并用输入的半径初始化
    Circle circle(radius) ;

    cout << "圆的面积是: " << circle.S() << endl ;
    cout << "圆的周长是: " << circle.C() << endl ;

    return 0 ;
}