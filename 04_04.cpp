#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string changeCase(const string& str) 
{
    string result = str; //新建字符串result，并将其初始化为输入字符串str

    for (int i = 0; i < result.length(); i++) //遍历result字符串中的每个字符
    {
        if (islower(result[i])) //检查大小写，结果为小写字母
        {
            result[i] = toupper(result[i]); //将小写转换为大写
        } 
        else if (isupper(result[i])) 
        {
            result[i] = tolower(result[i]); //结果为大写字母，将大写转换为小写
        }
    }

    return result; //返回转换后的字符串
}

int main() 
{
    string input; //声明字符串变量input
    cout << "请输入字符串: ";
    getline(cin, input); //获取字符串

    string changed = changeCase(input); //调用函数
    cout << "大小写互换后的字符串: " << changed << endl;

    return 0;
}
