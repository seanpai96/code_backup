//
//  1203A.cpp
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
    ll q, a[201], n, mx = 0, start;
    cin>>q;
    while(q--){
        start = 0;
        mx = 0;
        bool lr = false, flag = false;
        cin>>n;
        for(ll i=0;i<n;i++) {
            cin>>a[i];
            if(max(a[i],mx) == a[i]){
                start = i;
                mx = a[i];
            }
        }
        if(a[start]-1 == a[(start+1 == n ? 0 : start+1)]){
            lr = true;
        }else if (a[start]-1 == a[(start-1)>=0 ? start-1 : n-1]){
            lr = false;
        }else{
            cout<<"NOinfront"<<endl;
            continue;
        }
        cout<<lr<<endl;
        bool first = false;
        if(lr){     //right
            for(ll i=start;;){
                if(a[i] == a[start-1 ? n-1 : start-1] && first){
                    flag = true;
                    break;
                }else{
                    first = true;
                    ll next = i+1 == n ? 0 : i+1;
                    if(a[i]-1 != a[next]) {
                        break;
                    }
                }
                i = i+1 == n ? 0 : i+1;
            }
        }else{      //left
            for(ll i=start;;){
                if(a[i] == a[start+1 == n ? 0 : start+1] && first){
                    flag = true;
                    break;
                }else{
                    first = true;
                    ll next = (i-1)>=0 ? i-1 : n-1;
                    if(a[i]-1 != a[next]) {
                        break;
                    }
                }
                i = (i-1)>=0 ? i-1 : n-1;
            }
        }
        if(flag || n == 1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
