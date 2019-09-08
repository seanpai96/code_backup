//
//  1196D.cpp
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


int main(){ _
    string rgb="RGB", input;
    ll q,n,k,cnt=0, minCnt = ;
    cin>>q;
    while(q--){
        cnt=0;
        cin>>n>>k>>input;
        for(int indRGB = 0; indRGB<2;indRGB++){
            for(ll i=0;i<(n-k);i++){
                for(ll indStr = i; indStr < i+k;i++){
                    if(rgb[indRGB] != input[indStr]) cnt++;
                }
            }
        }
    }
}
