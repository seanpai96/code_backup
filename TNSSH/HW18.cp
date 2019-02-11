//本題知識點：「cout」、「cin」、「int」宣告及多向選擇的使用。
//請注意，輸入兩筆資料時，可以用空白鍵或Enter鍵做區隔。

#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a>b) cout<<a<<'>'<<b;
    else if (a==b) cout<<a<<'='<<b;
    else cout<<a<<'<'<<b;
    return 0;
}
