//本題知識點：「cout」、「cin」、「int」宣告及算數運算子的使用。
//請注意：輸入的變數有兩個，輸出的結果只有一個。

#include <iostream>

using namespace std;

int main()
{
    int min,sec;
    cin>>min>>sec;
    sec += min*60;
    cout<<sec;
    return 0;
}
