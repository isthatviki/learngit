//03_04_使用 while 循环结构，用 * 号在屏幕上输出金字塔图形。
#include <iostream>
using namespace std;
int main()
 {
    int n; // 金字塔的行数
    cout << "请输入金字塔的行数" << endl;
    cin >> n;
    int i = 1; // 当前行数
    int j, k; // j表示当前行需要输出的空格数，k表示当前行需要输出的星号数
    
    while (i <= n)
     {
        j = n - i; // 当前行需要输出的空格数
        k = 2 * i - 1; // 当前行需要输出的星号数

        // 输出当前行的空格
        for (int m = 1; m <= j; m++)
        {
            cout << " ";
        }

        // 输出当前行的星号
        for (int m = 1; m <= k; m++)
        {
            cout << "*";
        }

        cout << endl;
        i++; // 处理下一行
    }

    return 0;
}