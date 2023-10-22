// 03_05_输出 200 - 300 之间的所有质数。
# include <iostream>
using namespace std ;
int main()
{
    int number;
    cout << "200-300之间的质数为：" ;
    for ( number = 200 ; number <= 300 ; number++ ) //判断200-300间的每一个数
    {
        bool isPrime = true ; //添加数字是否为质数的判断
        for ( int i = 2 ; i <= sqrt(number) ; i++ ) //让for循环在该轮次的数字遍历 2 ~ sqrt(n) 因子
        {
            if ( number % i == 0) 
            {
                isPrime = false ; //找到能被该数字整除的因子，标记isPrime为false
                break ; //跳出内层循环
            }
        }
        if ( isPrime )
        {
            cout << number << "，" ;
        }
    }
    return 0;  
}