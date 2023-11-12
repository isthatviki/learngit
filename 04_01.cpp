# include <iostream>
using namespace std ;

// 定义函数
void hanoi ( int n , char a , char b , char c )
{
    if ( n == 1 )
    {
        cout << n << ":" << a << "->" << c << endl ;
    }
    
    else if ( n == 2 )
    {
        cout << n - 1 << ":" << a << "->" << b << endl ;
        cout << n << ":" << a << "->" << c << endl ;
        cout << n - 1 << ":" << b << "->" << c << endl ;
    }
    
    else
    {
        hanoi ( n - 1 , a , c , b ) ;
        cout << n  << ":" << a << "->" << c << endl ;
        hanoi ( n - 1 , b , a , c ) ;
    }
}

// 调用函数
int main()
{
    int n ;
    char a , b , c ;
    cout << "请输入一个整数的圆盘数量和三个字符串字母作为三个杆的编号" << endl ;
    cin >> n >> a >> b >> c ;
    hanoi ( n , a , b , c ) ;
    return 0 ;
}