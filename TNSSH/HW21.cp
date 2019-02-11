//本題知識點：「cout」、「cin」、「int」宣告及多向選擇的使用。

#include <iostream>

using namespace std;

int main()
{
    int y;
    cin>>y;
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
