//本題知識點：「cout」、「cin」、「int」宣告及算數運算子的使用。
//請注意：輸入的變數只有一個，代表小綠的年紀。
//請注意：輸出的變數只有一個，代表阿紫的年紀。

#include <iostream>

using namespace std;

int main()
{
    int G,g,b,p; //宣告G：大綠、g：小綠、b：阿藍、p：阿紫
    cin>>g;
    G = g+3;
    b = 2*g-5;
    p = 10*(b/10)+(G%10);
    cout<<p;
    return 0;
}
