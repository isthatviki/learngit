// 1.输入3个年份，并分别输出是否是闰年。
#include <iostream>
using namespace std;

int main()
{
    int year1, year2, year3;
    
    cout << "请输入3个年份：" << endl;
    cin >> year1 >> year2 >> year3;
    
    cout << year1 << "是" << (year1 % 4 == 0 && year1 % 100 != 0 || year1 % 400 == 0 ? "闰年" : "非闰年") << endl;
    cout << year2 << "是" << (year2 % 4 == 0 && year2 % 100 != 0 || year2 % 400 == 0 ? "闰年" : "非闰年") << endl;
    cout << year3 << "是" << (year3 % 4 == 0 && year3 % 100 != 0 || year3 % 400 == 0 ? "闰年" : "非闰年") << endl;

// 2.输入1个年份，输出是否是闰年，并输出该年份下一个闰年是多少年后，是哪一年。

    int year;
    
    cout << "请输入一个年份：" << endl;
    cin >> year;
    
    bool isLeapYear = (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);

    int nextLY ;
    int nextisLY ;
    
    if (isLeapYear)
    {
        nextLY = year + 4;
        bool nextisLY = ( nextLY % 4 == 0 && nextLY % 100 != 0 || nextLY % 400 == 0);
       
       if (nextisLY)
        {
            cout << year << "是闰年，下一个闰年闰年是4年后，是" << nextLY << "年" << endl;
        }
        else
        {
            cout << year << "是闰年，下一个闰年闰年是8年后，是" << nextLY + 4 << "年" << endl;
        }

    }
    
    else
    {
        nextLY = year + 4 - (year % 4) ;
        bool nextisLY = ( nextLY % 4 == 0 && nextLY % 100 != 0 || nextLY % 400 == 0);
        if (nextisLY)
        {
            cout << "下一个闰年是" << 4 - (year % 4) << "年后，是" << nextLY << "年" << endl;
        }
       else
       {
            cout << "下一个闰年是" << 8 - (year % 4) << "年后，是" << nextLY + 4 << "年" << endl;
       } 
    }
    

// 3.随机输入3个年份，按照从小年份到大年份，依次排序输出，并根据顺序输出是否是闰年。

    int year5, year6, year7;
    
    cout << "请输入3个年份：" << endl;
    cin >> year5 >> year6 >> year7;
    
    int minYear = year5 < year6 ? (year5 < year7 ? year5 : year7) : (year6 < year7 ? year6 : year7);
    int maxYear = year5 > year6 ? (year5 > year7 ? year5 : year7) : (year6 > year7 ? year6 : year7);
    int midYear = (year5 + year6 + year7) - (minYear + maxYear);
    
    bool isMinLeapYear = (minYear % 4 == 0 && minYear % 100 != 0 || minYear % 400 == 0);
    bool isMidLeapYear = (midYear % 4 == 0 && midYear % 100 != 0 || midYear % 400 == 0);
    bool isMaxLeapYear = (maxYear % 4 == 0 && maxYear % 100 != 0 || maxYear % 400 == 0);
    
    std::cout << minYear << "是" << (isMinLeapYear ? "闰年" : "非闰年") << std::endl;
    std::cout << midYear << "是" << (isMidLeapYear ? "闰年" : "非闰年") << std::endl;
    std::cout << maxYear << "是" << (isMaxLeapYear ? "闰年" : "非闰年") << std::endl;
    
    return 0;
}