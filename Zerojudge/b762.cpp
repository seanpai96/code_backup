//
//  b762.cpp
//  CPPs
//
//  Created by Sean on 2019/8/8.
//  Copyright © 2019 Sean.Inc. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
#define _ ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'


int main(){ _
    int n, k=0, d=0, a=0, ck=0;
    string s;
    cin>>n;
    while(n--){
        cin>>s;
        if(s == "Get_Kill"){
            k+=1;
            ck+=1;
            if(ck<3){
                cout<<"You have slain an enemie."<<endl;
            }else if(ck == 3){
                cout<<"KILLING SPREE!"<<endl;
            }else if(ck == 4){
                cout<<"RAMPAGE~"<<endl;
            }else if(ck == 5){
                cout<<"UNSTOPPABLE!"<<endl;
            }else if(ck == 6){
                cout<<"DOMINATING!"<<endl;
            }else if(ck == 7){
                cout<<"GUALIKE!"<<endl;
            }else if(ck >= 8){
                cout<<"LEGENDARY!"<<endl;
            }
        }else if (s == "Get_Assist"){
            a +=1;
        }else if (s == "Die"){
            d+=1;
            if(ck <3){
                cout<<"You have been slained."<<endl;
            }else{
                cout<<"SHUTDOWN."<<endl;
            }
            ck=0;
        }
        
    }
    cout<<k<<'/'<<d<<'/'<<a;
}
