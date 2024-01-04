#include <iostream>
#include <list>
#include <limits>

int main() 
{
    // 创建int类型链表
    std::list<int> myList;
    int num;

    std::cout << "请输入一系列整数（以-1结束，回车输入下一个整数）：" << std::endl;
    
    while (true) 
    {
        // 读取整数，存入变量num
        std::cin >> num;
        if (num == -1) 
        {
            break;
        }
        // 将读取到的整数添加到链表的末尾
        myList.push_back(num);
    }

    if (!myList.empty()) 
    {
        // 删除链表的第一个元素
        myList.pop_front();  

        // 删除链表的最后一个元素
        myList.pop_back();   
    }

    std::cout << "剩余的链表元素为：";
    // 遍历链表中的所有元素
    for (const auto& element : myList) 
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}