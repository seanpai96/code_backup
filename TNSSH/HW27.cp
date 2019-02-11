//本題知識點：「cout」、「cin」、「int」宣告及重複迴圈for的使用。
#include <iostream>

using namespace std;

int main()
{
    int n,r,upsum=1,downsum=1;
    cin>>n>>r;
    for(int i=n;i>0;i--) upsum *= i;
    for(int i=n-r;i>0;i--) downsum *= i;
    cout<<upsum/downsum;
    return 0;
}
