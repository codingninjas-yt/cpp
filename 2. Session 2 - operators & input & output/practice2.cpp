/*
برنامه ای بنویسید که از کاربر 3 نمره ی درس های ریاضی فیزیک و زیست را از کاربر
بگیرد و معدل آن را حساب کند
*/
#include <iostream>
using namespace std;
int main()
{
    float riyazi, fizik, zist;
    cin >> riyazi >> fizik >> zist;
    // raveshe aval
    cout << (fizik + riyazi + zist) / 3;
    cout << endl;
    // raveshe dovom
    float miyangin;
    miyangin = (fizik + riyazi + zist) / 3;
    cout << miyangin;
    return 0;
}