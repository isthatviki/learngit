#include <iostream>
using namespace std;

int main() 
{
    double a, b, c;
    cout << "请输入一元二次方程的系数 a、b、c：" << endl;
    cin >> a >> b >> c;

    // 判断 a 是否为0
    if (a == 0) 
    {
        cout << "a 不能为0，该方程不是一元二次方程。" << endl;
    } 
    else 
    {
        // 计算判别式
        double delta = b * b - 4 * a * c;

        // 判断判别式的值
        if (delta < 0) 
        {
            cout << "该方程无实根。" << endl;
        } 
        else if (delta == 0) 
        {
            // 计算相同实根
            double x = -b / (2 * a);
            cout << "该方程有两相同实根：" << x << endl;
        } 
        else 
        {
            // 计算两个不同实根
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);
            cout << "该方程有两个不同实根：" << x1 << " 和 " << x2 << endl;
        }
    }

    return 0;
}
