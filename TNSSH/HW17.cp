//本題知識點：「cout」、「cin」、「int」宣告及雙向選擇的使用。
//請注意：輸出結果的文字皆為大寫。

#include <iostream>

using namespace std;

int main()
{
    int hour,minute;
    cin>>hour>>minute;
    if((hour==14&&minute>=40)||(hour == 15)||(hour==16&&minute<=50)) cout<<"YES";
    else cout<<"NO";
    return 0;
}
