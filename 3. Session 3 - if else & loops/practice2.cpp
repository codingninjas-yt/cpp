/*
برنامه ای بنویسید که تا زمانی که عدد 0 یا منفی وارد نشده است ، اعدادی
را از ورودی بگیرد و در نهایت با وارد شدن عددی صفر یا منفی برنامه پایان یابد و
در انتها مجموع اعداد وارد شده را حساب کند
*/
#include <iostream>
using namespace std;
int main()
{
    float number;
    float sum = 0;
    do
    {
        cin >> number;
        sum += number;
    } while (number > 0);
    cout << "majmo : " << sum - number;
    return 0;
}