//本題知識點：「cout」、「cin」、「int」宣告及重複迴圈for的使用。

#include <iostream>

using namespace std;

int main()
{
    int u,l,sum=0;
    cin>>l>>u;
    for(int i=l;i<=u;i++){
        if(i%2==0) sum+= i;
    }
    cout<<sum;
    return 0;
}
