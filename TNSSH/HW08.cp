//本題知識點：「cout」、「cin」、「int」宣告及算數運算子的使用。
//請注意：輸入的變數只有一個，但輸出的結果不只一個喔！
//請注意：輸出的時候，分、秒中間請空一格，例：「" "」。

#include <iostream>

using namespace std;

int main()
{
    int i,min;
    cin>>i;
    min = i/60;
    i -= 60*min;
    cout<<min<<' '<<i;
    return 0;
}
