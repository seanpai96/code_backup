//本題知識點：輸出指令「cout」、輸入指令「cin」以及整數變數「int」宣告，請注意此題輸入的變數不只一個

#include <iostream>

using namespace std;

int main()
{
    int i,j,k;
    cin>>i>>j>>k;
    cout<<i*j*2+i*k*2+j*k*2;
    return 0;
}
