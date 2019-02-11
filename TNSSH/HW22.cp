//本題知識點：「cout」、「cin」、「int」宣告及巢狀if...else選擇的使用。

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a,b,c; //代表某商品在三間不同商店之價格
    cin>>a>>b>>c;
    if(a<b){
        if(a<c){
            cout<<a;
        }else{
            cout<<c;
        }
    }else{
        if(b<c){
            cout<<b;
        }else{
            cout<<c;
        }
    }
    return 0;
}
