// 03_03_输入一个正整数，计算其除以 7 的余数，根据余数 0-6 分别转换成“星期日/一/二/三/四/五/六” ，打印输出。
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "请输入一个正整数：" << endl;
    cin >> a ;
    switch ( a % 7 ) //计算正整数除以7的余数
    {
        case 0 :
            cout << "星期日" << endl;
            break ; //判断后破除switch循环
        case 1 :
            cout << "星期一" << endl;
            break ;
        case 2 :
            cout << "星期二" << endl;
            break ;
        case 3 :
            cout << "星期三" << endl;
            break ;
        case 4 :
            cout << "星期四" << endl;
            break ;
        case 5 :
            cout << "星期五" << endl;
            break ;
        case 6 :
            cout << "星期六" << endl;
            break ;
    }
    return 0;
}