//本題知識點：「cout」、「cin」、「int」宣告及雙向選擇的使用。
//請注意：輸出的文字皆為大寫

#include <iostream>

using namespace std;

int main()
{
    int i;
    cin>>i;
    if(i<60) cout<<"NO";
    else cout<<"YES";
    return 0;
}
