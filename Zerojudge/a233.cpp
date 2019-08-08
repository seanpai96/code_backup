//
//  a233.cpp
//  CPPs
//
//  Created by Sean on 2019/8/8.
//  Copyright © 2019 Sean.Inc. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
#define _ ios::sync_with_stdio(0);cin.tie(0);



int main(){ _
    int n, a[1000001];
    while(cin>>n){
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(int i=0;i<n;i++) cout<<a[i]<<' ';
    }
}
