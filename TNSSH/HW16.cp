//本題知識點：「cout」、「cin」、「int」宣告及雙向選擇的使用。
//請注意：輸出結果的文字皆為大寫。

#include <iostream>

using namespace std;

int main()
{
    int a,b,c; //代表三角形三邊長
    cin>>a>>b>>c;
    if(a+b<c||b+c<a||a+c<b) cout<<"NO";
    else cout<<"YES";
    return 0;
}
