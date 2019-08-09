//
//  131A.cpp
//  CPPs
//
//  Created by Sean on 2019/8/9.
//  Copyright © 2019 Sean.Inc. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
#define _ ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;


int main(){ _
    string s;
    bool allUpper = true;
    while(cin>>s){
        for(int i=1; i<s.length(); i++){
            if(isupper(s[i])){
                allUpper = true;
            }else{
                allUpper = false;
                break;
            }
        }
        if(allUpper){
            putchar(toupper(s[0]));
            for(int i=1;i<s.length();i++)
                putchar(tolower(s[i]));
            cout<<'\n';
        }else{
            cout<<s<<'\n';
        }
    }
}
