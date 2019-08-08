//
//  d086.cpp
//  CPPs
//
//  Created by Sean on 2019/8/8.
//  Copyright © 2019 Sean.Inc. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
#define _ ios::sync_with_stdio(0);cin.tie(0);



int main(){ _
    string s;
    int i, sum=0;
    while(cin>>s, s != "0"){
        sum =0;
        for(i=0;i<s.length();i++){
            if(!isalpha(s[i])){
                cout<<"Fail\n";
                break;
            }else if (!isupper(s[i])){
                s[i] = toupper(s[i]);
            }
        }
        if(i==s.length()){
            for(int j=0; j<s.length(); j++){
                sum += s[j] - 'A' + 1;
            }
            cout<<sum<<'\n';
        }
    }
}
