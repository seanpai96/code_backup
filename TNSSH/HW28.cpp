//本題使用巢狀for迴圈的概念，請仿照課程的範例，將星狀塔倒過來印。

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(;n;n--){
        for(int i=0;i<n;i++)
            cout<<"*";
        cout<<endl;
    }
    return 0;
}
