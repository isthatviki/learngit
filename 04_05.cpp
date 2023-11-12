#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Stu //建立Stu的结构体用于存储信息
{
    string name ;
    int avg_score ;
    int eval_score ;
    char is_leader ;
    char is_west ;
    int paper_count ;
} ;

int main() 
{
    int N ;
    cout << "请输入学生的总数：" << endl ;
    cin >> N ; 
    vector<Stu> stu(N) ;  // 创建大小为N的学生数据向量stu
    cout << "数据包括姓名，期末平均成绩，班级评议成绩，是否是学生干部，是否是西部省份学生，以及发表的论文数；Y表示是，N表示否" << endl ;

    //遍历每一个学生数据，存储在Stu中
    int i = 0 ; //i为遍历次数
    while ( i < N) 
    {
        i++ ;
        cout << "请输入第" << i << "位学生的数据" << endl ;
        cin >> stu[i].name >> stu[i].avg_score >> stu[i].eval_score>> stu[i].is_leader >> stu[i].is_west >> stu[i].paper_count ;
    }

    string max_bonus_name ;  // 获得最多奖金的学生姓名
    int max_bonus = 0 ;  // 当前最多奖学金的金额
    int total_bonus = 0 ;  // 所有学生获得的奖学金总数

    // 遍历每位学生的数据，计算奖学金总数
    for (int i = 0 ; i < N ; i++) 
    {
        int bonus = 0 ;  // 当前学生的奖金总数

        // 判断是否符合院士奖学金条件
        if (stu[i].avg_score > 80 && stu[i].paper_count >= 1)
        {
            bonus += 8000 ;
        }
        // 判断是否符合五四奖学金条件
        if (stu[i].avg_score > 85 && stu[i].eval_score > 80) 
        {
            bonus += 4000 ;
        }
        // 判断是否符合成绩优秀奖条件
        if (stu[i].avg_score > 90) 
        {
            bonus += 2000 ;
        }
        // 判断是否符合西部奖学金条件
        if (stu[i].avg_score > 85 && stu[i].is_west == 'Y') 
        {
            bonus += 1000 ;
        }
        // 判断是否符合班级贡献奖条件
        if (stu[i].eval_score > 80 && stu[i].is_leader == 'Y') 
        {
            bonus += 850 ;
        }

        // 更新最多奖金总数和对应的学生姓名
        if (bonus > max_bonus) 
        {
            max_bonus = bonus ;
            max_bonus_name = stu[i].name ;
        }

        // 更新所有学生获得的奖学金总数
        total_bonus += bonus ;
    }

    // 输出结果
    cout << max_bonus_name << endl ;
    cout << max_bonus << endl ;
    cout << total_bonus << endl ;

    return 0;
}