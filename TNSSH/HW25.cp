//本題知識點：「cout」、「cin」、「int」宣告及重複迴圈for的使用。
//請留意輸出的數字之間要有一個空格喔！

#include <iostream>

using namespace std;

int main()
{
    int i;
    cin>>i;
    for(int k=i;k>=0;k--)
        cout<<k<<' ';
    return 0;
}
