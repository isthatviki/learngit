#include <iostream>
#include <forward_list>

// 除去单向链表中小于给定阈值的元素
template<typename T>
void filterList(std::forward_list<T>& list, const T& threshold)
{
    list.remove_if([&threshold](const T& element) { return element < threshold; });
}

int main()
{
    // 创建一个int类型的单向链表
    std::forward_list<int> list;
    int num;

    std::cout << "请输入一系列整数（以-1结束输入）：" << std::endl;

    while (true)
    {
        std::cin >> num;
        if (num == -1)
        {
            break;
        }
        // 将输入的整数添加到单向链表的头部
        list.push_front(num);
    }

    // 阈值
    int threshold;
    std::cout << "请输入阈值：";
    std::cin >> threshold;

    // 除去小于阈值的元素
    filterList(list, threshold);

    // 输出
    std::cout << "处理后的列表为：";
    // 遍历所有元素
    for (const auto& element : list)
    {
        std::cout << element << " ";  // 输出处理后的列表元素
    }
    std::cout << std::endl;

    return 0;
}