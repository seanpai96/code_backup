//本題使用while解題觀念。
#include <iostream>

using namespace std;

int main()
{
    int n,m,count=0;
    cin>>n>>m;
    while(n<m){
        n *= 3;
        count++;
    }
    cout<<count;
    return 0;
}
