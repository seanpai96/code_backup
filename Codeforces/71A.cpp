//
//  71A.cpp
//  CPPs
//
//  Created by Sean on 2019/8/14.
//  Copyright © 2019 Sean.Inc. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
#define _ ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
typedef long long ll;


int main(){ _
    ll n;
    string s;
    cin>>n;
    while(n--){
        cin>>s;
        if(s.size() > 10)
            cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
        else
            cout<<s<<endl;
    }
}
