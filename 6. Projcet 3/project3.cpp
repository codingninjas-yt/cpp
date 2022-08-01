/*
سیستمی را درست کنید که از کاربر، نام کاربری و رمز عبور بخواهد و تا کاربر
نام کاربری و رمزعبور درست را وارد نکرد این روند ادامه داشته باشد
نام کاربری : 22156
رمزعبور : 12345
*/
#include <iostream>
using namespace std;
int main()
{
    bool dorost = true;
    int username, password;
    while (dorost)
    {
        cin >> username >> password;
        if (username == 22156 && password == 12345)
        {
            dorost = false;
            cout << "shoma varede hesabe karbari shodid\n";
        }
        else
        {
            cout << "username ya password ghalat bod, dobare emtehan konid.\n";
        }
    }
    return 0;
}