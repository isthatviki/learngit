# include <iostream>
using namespace std ;

int main()
{
    double a = 0 , b = 0 , i = 0 ;
    cout << "请输入对数运算中a、b的值：" << endl ;
    cin >> a >> b ;
    
    // 判断对数运算是否合法
    while ( a <= 0 || a == 1 || b <= 0 )
    {
        cout << "您输入的值有误，请重新输入a、b的值为：" << endl ;
        cin >> a >> b ;
    }
    
    while ( b >= a )
    {
        i++ ;
        b/=a ;
    } 
    
    cout << "对数运算结果为：" << i << endl ;    
}