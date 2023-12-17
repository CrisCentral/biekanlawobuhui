#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
struct date
{
    int year;
    int month;
    int day;
};
struct student
{
    string name;
    long num;
    date birthdate;
    int score;
};
void Input(student arr[], int n);
void Output(student arr[], int n);
void Sort(student arr[], int n);
void Outputsort(student arr[], int n);
int  find(student arr[], int n,string key);
int main()
{
    const int n = 3;
    student arr[n];
    Input(arr, n);
    Output(arr, n);
    Sort(arr, n);
    Outputsort(arr, n);
    cout << "输入想要查找的学生名字：" << endl;
    string key;
    cin >> key;
    int a = find(arr, n, key);
    if (a >= 0)
    {
        cout << key << "的信息是：" << endl;
        cout << setw(10) << "name" << setw(10) << "num" << setw(16)
             << "birthdate" << setw(10) << "score" << endl;
        cout << setw(10) << arr[a].name << setw(10) << arr[a].num << setw(10) << arr[a].birthdate.year
             << "." << arr[a].birthdate.month << "." << arr[a].birthdate.day
             << setw(8) << arr[a].score << endl;
    }
    else
    {
        cout << "查无此人！" << endl;
    }
    system("pause");
    return 0;
}
void Input(student arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "输入学生" << i + 1 << "的信息" << endl;
        cout << "student" << i + 1 << "name:";
        cin >> arr[i].name;
        cout << "student" << i + 1 << "num:";
        cin >> arr[i].num;
        cout << "student" << i + 1 << "birthdate(year month day):";
        cin >> arr[i].birthdate.year >> arr[i].birthdate.month >> arr[i].birthdate.day;
        cout << "student" << i + 1 << "score:";
        cin >> arr[i].score;
    }
}
void Output(student arr[], int n)
{
    cout << setw(10) << "student information：" << endl;
    cout << setw(10) << "name" << setw(10) << "num" << setw(16)
        << "birthdate" << setw(10) << "score" << endl;
    for (int i = 0; i < n; i++)
    {
        cout<< setw(10) << arr[i].name << setw(10) << arr[i].num << setw(10) << arr[i].birthdate.year
            << "." << arr[i].birthdate.month << "." << arr[i].birthdate.day
            << setw(8) << arr[i].score << endl;
    }
}
void Sort(student arr[], int n)
{ 
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if(arr[j].score>arr[j+1].score)
            { 
                student place = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = place;
            }
        }
    }
}
void Outputsort(student arr[],int n)
{
    cout << setw(10) << "student sort：" << endl;
    cout << setw(10) << "name" << setw(10) << "num" << setw(16)
        << "birthdate" << setw(10) << "score" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << setw(10) << arr[i].name << setw(10) << arr[i].num << setw(10) << arr[i].birthdate.year
            << "." << arr[i].birthdate.month << "." << arr[i].birthdate.day
            << setw(8) << arr[i].score << endl;
    }
}
int find(student arr[], int n, string key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i].name == key)
            return i;
    }
    return (-1);
}