//
//  1A.cpp
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
    ll n,m,a;
    while(cin>>n>>m>>a){
        cout<<((m+a-1)/a) * ((n+a-1)/a)<<'\n';
    }
}
