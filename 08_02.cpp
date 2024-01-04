#include <iostream>
#include <deque>
#include <string>

int main() 
{
    // 创建int类型的双端队列
    std::deque<int> myQueue;
    std::string command;

    while (true) 
    {  
        std::cin >> command;  

        // push指令
        if (command == "push") 
        {  
            int num;
            std::cin >> num;
            // 将读取到的整数添加到队列的末尾
            myQueue.push_back(num);
        } 
        
        // pop指令
        else if (command == "pop") 
        {  
            if (!myQueue.empty()) 
            { 
                // 删除队列的第一个元素
                myQueue.pop_front();  
            }
        } 
        
        // print指令
        else if (command == "print") 
        {  
            std::cout << "队列中的元素为：";
            // 遍历队列中的所有元素
            for (const auto& element : myQueue) 
            {  
                std::cout << element << " ";
            }
            std::cout << std::endl;
        } 
    }

    return 0;
}