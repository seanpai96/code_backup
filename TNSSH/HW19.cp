//本題知識點：「cout」、「cin」、「int」宣告及多向選擇的使用。

#include <iostream>

using namespace std;

int main()
{
    int i;
    cin>>i;
    if(i<20){
        cout<<60;
    }else if(i<50){
        cout<<80;
    }else if(i<100){
        cout<<90;
    }else{
        cout<<100;
    }
    return 0;
}\
