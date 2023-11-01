//思考：如何限制猜测次数？例如限定七次机会猜测，七次未猜出则游戏失败。
//此程序于2023.11.1完成，争取在11.5前完成思考内容。
//完成啦！哈哈哈哈！
#include<iostream>
using namespace std;
//time系统时间头文件包含（一样的，vs2022版本可直接用time该文件，其余版本未知。）
#include<ctime>
int main()
{
    //添加随机种子数，作用：利用当前系统时间生成随机数，防止每次随机数都一样。
    srand((unsigned int)time(NULL));
    //rand()%100 表示随机生成一个0+1到99+1的一个数(须注意的是如不加第5行代码，此时生成的随机数为伪随机数)
    int num= rand() % 100+1;
    int a = 0;
    int count = 0;
    while (count<8)
    {
        count++;
        cout << "请输入您猜测的数：" << endl;
        cin >> a;
        if (count >= 8)
        {
            cout << "很遗憾，游戏失败！" << endl;
            break;
        }
        if (a > num)
        {
            cout << "您输入的数过大，请重新输入。"<<endl;
        }
        else if (a < num)
        {
            cout << "您输入的数过小，请重新输入。" << endl;
        }
        else
        {
            cout << "恭喜您猜对了！" << endl;
            break;//退出当前循环，注意break放置位置
        }
     }
    system("pause");
    return 0;
}

