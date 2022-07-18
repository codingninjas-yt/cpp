/*
برنامه ای بنویسید که از کاربر 2 عدد را گرفته و جمع ،تفریق ، ضرب و تقسیم
آن را در خروجی نشان بدهد
*/
#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    cout << "jam: " << x + y << " || "
         << "tafrigh: " << x - y << " || "
         << "zarb: " << x * y << " || "
         << "taghsim: " << x / y << " || "
         << "baghimande: " << x % y;
    return 0;
}