/*
مریم در شرکتی به صورت پروژه ای کار میکند و حقوقش را به صورت ماهیانه
با توجه به پروژه هایی که انجام داده است میگیرد. این شرکت برای تشویق
کارمندانش ، به کارمندهایی که بیش از 4 پروژه در ماه انجام
داده اند 15 درصد بیشتر حقوق میدهد. برنامه بنویسید که عددی را از
ورودی بگیرد که نشان دهنده ی تعداد پروژه های انجام شده در ماه توسط مریم باشد
و هزینه ی انجام هر کدام از پروژه ها را از ورودی جداگانه بگیرد و در نهایت
حقوق مریم را در آن ماه جاری حساب کند
*/
#include <iostream>
using namespace std;
int main()
{
    float salary = 0;
    int count;
    int project;
    cout << "enter the count of projects :";
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        cout << "enter project's salary: ";
        cin >> project;
        salary += project;
    }
    if (count > 4)
    {
        // afzayeshe hoghogh be mizane 15%
        salary *= 1.15;
    }
    cout << "salary: " << salary << "$";
    return 0;
}