#include <iostream>
#include <vector>
#include <algorithm>

// 去除容器中的重复元素并按升序排序
void uniqueSort(std::vector<int>& nums)
{
    std::sort(nums.begin(), nums.end());  // 对容器中的元素进行升序排序
    auto it = std::unique(nums.begin(), nums.end());  // 去除容器中的重复元素
    nums.erase(it, nums.end());  // 删除重复元素后的冗余部分
}

int main()
{
    // 创建一个int类型的vector容器
    std::vector<int> nums;
    int num;

    std::cout << "请输入一系列整数（以-1结束输入）：" << std::endl;
    while (true) 
    {
        std::cin >> num;
        if (num == -1) 
        {
            break;
        }
        // 将输入的整数添加到vector容器中
        nums.push_back(num);
    }

    // 调用函数去除重复元素并排序
    uniqueSort(nums);

    std::cout << "处理后的容器元素为：";
    // 遍历所有元素
    for (const auto& element : nums) 
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}