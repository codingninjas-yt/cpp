/*
برنامه ای بنویسید که از کاربر نمره ی 5 درس را گرفته و معدل آن را حساب کند
و اگر معدل آن بالای 17 بود در خروجی چاپ کند که فرد مورد نظر معدل الف شده
و اگر بین 12 تا 17 در خروجی چاپ کند قبول شده و اگر زیر 12 بود چاپ کند مشروط شده
*/
#include <iostream>
using namespace std;
int main()
{
    int grade;
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> grade;
        sum += grade;
    }
    int average = sum / 5;
    if (average >= 17)
    {
        cout << "moadele alef";
    }
    else if (average >= 12 && average < 17)
    {
        cout << "ghabol shodi";
    }
    else if (average < 12)
    {
        cout << "mashrot shodi";
    }
    return 0;
}