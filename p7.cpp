//˼����������Ʋ²�����������޶��ߴλ���²⣬�ߴ�δ�³�����Ϸʧ�ܡ�
//�˳�����2023.11.1��ɣ���ȡ��11.5ǰ���˼�����ݡ�
//�����������������
#include<iostream>
using namespace std;
//timeϵͳʱ��ͷ�ļ�������һ���ģ�vs2022�汾��ֱ����time���ļ�������汾δ֪����
#include<ctime>
int main()
{
    //�����������������ã����õ�ǰϵͳʱ���������������ֹÿ���������һ����
    srand((unsigned int)time(NULL));
    //rand()%100 ��ʾ�������һ��0+1��99+1��һ����(��ע������粻�ӵ�5�д��룬��ʱ���ɵ������Ϊα�����)
    int num= rand() % 100+1;
    int a = 0;
    int count = 0;
    while (count<8)
    {
        count++;
        cout << "���������²������" << endl;
        cin >> a;
        if (count >= 8)
        {
            cout << "���ź�����Ϸʧ�ܣ�" << endl;
            break;
        }
        if (a > num)
        {
            cout << "����������������������롣"<<endl;
        }
        else if (a < num)
        {
            cout << "�����������С�����������롣" << endl;
        }
        else
        {
            cout << "��ϲ���¶��ˣ�" << endl;
            break;//�˳���ǰѭ����ע��break����λ��
        }
     }
    system("pause");
    return 0;
}

