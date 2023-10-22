#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    // 初始化随机数生成器
    srand(static_cast<unsigned int>(time(nullptr)));

    int playerChoice;
    int computerChoice;
    int playerScore = 0;
    int computerScore = 0;
    string playAgain;

    cout << "欢迎来到石头剪刀布游戏！" << endl;
    cout << "0 - 石头, 1 - 剪刀, 2 - 布" << endl;

    while (true) 
    {
        // 生成电脑的随机选择
        computerChoice = rand() % 3;

        cout << "请输入你的选择 (0/1/2): ";
        cin >> playerChoice;

        if (playerChoice < 0 || playerChoice > 2) 
        {
            cout << "输入数字错误，请重新输入正确数字（0/1/2）:" << endl;
            continue;
        }

        cout << "你选择了 ";
        switch (playerChoice) 
        {
            case 0:
                cout << "石头";
                break;
            case 1:
                cout << "剪刀";
                break;
            case 2:
                cout << "布";
                break;
        }

        cout << "，电脑选择了 ";
        switch (computerChoice) 
        {
            case 0:
                cout << "石头";
                break;
            case 1:
                cout << "剪刀";
                break;
            case 2:
                cout << "布";
                break;
        }

        // 判断胜负
        int result = playerChoice - computerChoice ;
        if (result == 0) 
        {
            cout << "，平局!" << endl;
        } 
        
        else if (result == -1 || result == 2) 
        {
            cout << "，你赢了!" << endl;
            playerScore++;
        } 
       
        else 
        {
            cout << "，电脑赢了!" << endl;
            computerScore++;
        }

        // 输出得分
        cout << "当前得分：玩家 " << playerScore << " - 电脑 " << computerScore << endl;

        // 询问用户是否继续游戏
        cout << "是否继续玩游戏？(Yes/No): ";
        cin >> playAgain;
        if (playAgain != "Yes") 
        {
            cout << "游戏结束，谢谢参与！" << endl;
            break;
        }
    }
    return 0;
}