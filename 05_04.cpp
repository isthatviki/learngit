#include <iostream>
using namespace std ;

// 创建名为Student的类
class Student 
{
private:
    string stuName ; 
    string className ; 
    int stuID ; 
    int stuScore ; 
    static int count ; // 静态变量，用于统计对象总数

public:
    // 构造成员函数，使用传入的参数初始化成员变量
    Student ( string name, string classN, int ID, int score ) 
    {
        stuName = name ;
        className = classN ;
        stuID = ID ;
        stuScore = score ;
        count++ ; // 每创建一个对象，count加1
    }
    
    // 显示学生信息和成绩
    void displayStu()
    {
        cout << "姓名: " << stuName << endl ;
        cout << "班级: " << className << endl ;
        cout << "学号: " << stuID << endl ;
        cout << "分数：" << stuScore << endl ;

    }

    //根据分数输出成绩
    void displayGrade()
    {
        if (stuScore >= 90) 
        {
            cout << "成绩：A" << endl ;
        }
        else if (stuScore >= 80)
        {
            cout << "成绩：B" << endl ;
        }
        else if (stuScore >= 60)
        {
            cout << "成绩：C" << endl ;
        }
        else
        {
            cout << "成绩：D" << endl ;
        }
    }

    // 静态成员函数，返回对象总数
    static int getCount()
    {
        return count ;
    }
};

// 初始化静态变量count为0
int Student::count = 0 ;

int main() 
{
    string stuName , className ;
    int stuID , score ;
    char finish ;

    while(true)
    {
        cout << "姓名：" << endl ;
        cin >> stuName ;
        cout << "班级：" << endl ;
        cin >> className ;
        cout << "学号：" << endl ;
        cin >> stuID ;
        cout << "分数：" << endl ;
        cin >> score ;
    
        // 创建Student对象并使用构造函数初始化
        Student student ( stuName , className , stuID , score ) ;

        // 显示学生信息和成绩
        student.displayStu() ;
        student.displayGrade() ;

        // 询问判断是否结束
        cout << "是否完成输入？(Y/N)" << endl ;
        cin >> finish ;

        if ( finish == 'Y' )
        {
            // 统计对象总数并输出
            int total = Student::getCount() ;
            cout << "学生总数：" << total << endl ;
            break ;
        }
    }
    return 0 ;
}