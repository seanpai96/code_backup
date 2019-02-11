//本題知識點：「cout」、「cin」、「int」宣告及多向選擇的使用。
//請注意，輸入兩筆資料時，可以用空白鍵或Enter鍵做區隔。

#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a>=60&&b>=60){
        cout<<2;
    }else if(a+b>=120){
        cout<<2;
    }else if (a<60&&b<60){
        cout<<0;
    }else cout<<1;
    return 0;
}
