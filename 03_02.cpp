// 03_02_输入一个整数，反向输出该整数，最后输出它的位数。
#include <iostream>
using namespace std;
int main()
{
    int a, inversion_a;
    int digit = 0;
    cout << "请输入一个整数：" << endl ;
    cin >> a ;
    cout << "该整数的倒序为：";
    do
    {
        digit ++ ; //循环次数+1，用来计算数字位数
        inversion_a = a % 10 ; //除以10的余数即位该数字的最后一位
        cout << inversion_a ; //每循环一次依次输出，且中间无空
        a /= 10; //a每次除以10的结果用来在下一次循环中继续进行下一位的运算，相当于每次抹除最后一位数让倒数第二位数变成新的最后一位
    } while ( a != 0); //当数字每一位都计算后破除循环
    cout << "；" << "该整数有" << digit << "位" << endl;
    return 0;
}