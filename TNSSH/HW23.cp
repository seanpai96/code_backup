//本題知識點：「cout」、「cin」、「float」宣告及多向選擇if...else if...else的使用。
//請嘗試使用「浮點數float」宣告變數

#include <iostream>

using namespace std;

int main()
{
    float a,b,bmi;
    cin>>a>>b;
    bmi = a/(b*b);
    if(bmi<18.5) cout<<"UNDERWEIGHT";
    else if (bmi<=24.9) cout<<"NORMAL";
    else if (bmi<=29.9) cout<<"OVERWEIGHT";
    else if (bmi<=34.9) cout<<"OBESE";
    else cout<<"EXTREMELY OBESE";
    return 0;
}
