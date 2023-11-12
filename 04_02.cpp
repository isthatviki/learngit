# include <iostream>
using namespace std ;

int fib , fib1 = 0 , fib2 = 0 , j = 1 ; // fib1、fib2为一次循环中叠加的数，fib是总和即需要输出的数值，j是经历过的行数
int fibonacci ( int a ) // a为位数
{
    if ( a == 1 || a == 2 )
    {
        return 1 ;
    }
    return fibonacci( a - 1 ) + fibonacci( a - 2 ) ;
}

int main ()
{
    int n = 0 , a = 0 ; // n为行数
    while ( n <= 0 )
    {
        cout << "请输入你想知道几个斐波那契数" << endl ;
        cin >> n ;
        if ( n <= 0 )
        {
            cout << "您的输入错误，请重新输入大于0的整数" << endl ;
        }
    }
    
    while ( j <= n )
    {
        j++ ;
        cout << "请输入你想知道的斐波那契数列中数字的位数：" << endl ;
        cin >> a ;
        if ( a <= 0 )
        {
            cout << "输入错误，请重新输入大于0的整数" << endl ;
        }
        else
        {
            cout << "该位数上的数值为" << fibonacci ( a ) << endl ;
        }
    }
}
