//
//  e339.cpp
//  CPPs
//
//  Created by Sean on 2019/8/8.
//  Copyright © 2019 Sean.Inc. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
#define _ ios::sync_with_stdio(0);cin.tie(0);



int main(){ _
    long long n, sum=0, a;
    while(cin>>n){
        for(long long i=0;i<n;i++){
            cin>>a;
            sum += a;
            cout<< sum<< ' ';
        }
    }
}
