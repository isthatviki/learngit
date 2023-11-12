#include <iostream>
#include <vector>
using namespace std ;

// 创建寻找猴王的函数
int King( int n, int m ) 
{
    // 创建指向vector<int>的指针mks
    vector<int>* mks = new vector<int>(n) ; // 动态分配大小为n的vector
    // 遍历每一只猴子，将其编号填入vector
    for ( int i = 0; i < n; i++ ) 
    {
        (*mks)[i] = i + 1 ;
    }

    int cMk = 0 ; //cMk为当前猴子的索引
    while (mks->size() > 1) 
    {
        cMk = ( cMk + m - 1 ) % mks->size() ; //计算下一个踢出的猴子
        mks->erase( mks->begin() + cMk ) ;
    }

    int king = (*mks)[0] ;
    delete mks ;
    return king ;
}

int main() 
{
    int n, m ;
    while ( cin >> n >> m ) 
    {
        if ( n == 0 && m == 0 ) 
        {
            break ;
        }
        int king = King( n, m ) ;
        cout << king << endl ;
    }
    return 0 ;
}
