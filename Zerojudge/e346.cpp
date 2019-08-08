//
//  e346.cpp
//  CPPs
//
//  Created by Sean on 2019/8/8.
//  Copyright © 2019 Sean.Inc. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
#define _ ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;


int main(){ _
    ll a[200001] = {0}, m, n, sum;
    cin>>n;
    for(int i=1;i<=n;i++) {
        ll tmp;
        cin>>tmp;
        if(i) a[i] = a[i-1]+tmp;
        else a[i] = tmp;
    }
    cin>>m;
    while(m--){
        sum = 0;
        ll l,r;
        cin>>l>>r;
        //for(ll i = l-1;i<r;i++) sum += a[i];
        cout<<a[r]-a[l-1]<<'\n';
    }
}
