//
//  546A.cpp
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
    ll k,n,w, pay, total=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++)
        total += i*k;
    pay = n - total;
    if(pay>0){
        pay = 0;
    }else{
        pay = abs(pay);
    }
    cout<<pay<<'\n';
}
