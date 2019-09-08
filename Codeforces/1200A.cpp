//
//  1200A.cpp
//  CPPs
//
//  Created by Sean on 2019/8/11.
//  Copyright © 2019 Sean.Inc. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
#define _ ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
typedef long long ll;


int main(){ _
    bool room[10];
    int n;
    string s;
    cin>>n>>s;
    for (int i=0; i<=9; i++) {
        room[i] = false;
    }
    for(int i=0;i<s.size();i++){
        char c = s[i];
        if(c == 'L'){
            for(int j=0;j<=9;j++){
                if(room[j]){
                    continue;
                }else{
                    room[j] = true;
                    break;
                }
            }
        }else if (c == 'R'){
            for(int j=9;j>=0;j--){
                if(room[j]){
                    continue;
                }else{
                    room[j] = true;
                    break;
                }
            }
        }else{
            room[(c-'0')] = false;
        }
    }
    for(int i=0;i<=9;i++){
        if(room[i]){
            cout<<1;
        }else{
            cout<<0;
        }
    }
}
