#include <iostream>
using namespace std;
int main()
{
    // 03_01_输入一个整数，比较两个数的大小，输出比较结果
    int a, b;
    cout << "请输入两个数字：" << endl;
    cin >> a >> b ;
    if ( a >= b )
    {
        if ( a == b )
        {
            cout << a << "=" << b << endl;
        }
        else
        {
            cout << a << ">" << b << endl;
        }
    }
    else
    {
        cout << a << "<" << b << endl;
    }
   return 0;
}
