//
//  1201B.cpp
//  CPPs
//
//  Created by Sean on 2019/8/13.
//  Copyright © 2019 Sean.Inc. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
#define _ ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
typedef long long ll;

bool cmp(ll a, ll b){
    return a>b;
}

int main(){ _
    ll n,a, sum=0;
    vector<ll> v;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end(), cmp);
    for(int i=1;i<n;i++)
        sum += v[i];
    if(sum < v[0] || (sum + v[0])%2){
        cout<<"NO";
    }else{
        cout<<"YES";
    }
}
