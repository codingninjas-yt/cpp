/*
 برنامه ای را بنویسید که از کاربر دو عدد را بگیرد و سپس
 از کاربر یک عملگر حسابی بگیرد و حاصل عبارت را با توجه به
 عملگر وارد شده بدست بیاورد
*/
#include <iostream>
using namespace std;
int main()
{
    int number1, number2;
    char opt;
    cin >> number1 >> number2 >> opt;
    if (opt == '+')
    {
        cout << number1 + number2;
    }
    else if (opt == '-')
    {
        cout << number1 - number2;
    }
    else if (opt == '*')
    {
        cout << number1 * number2;
    }
    else if (opt == '/')
    {
        cout << number1 / number2;
    }
    return 0;
}