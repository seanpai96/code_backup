//
//  2A.cpp
//  CPPs
//
//  Created by Sean on 2019/8/9.
//  Copyright © 2019 Sean.Inc. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
#define _ ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
typedef long long ll;

struct userData{
    string name;
    int score;
};

bool cmp(userData a, userData b){
    return a.score > b.score;
}

struct findName {
    string name;
    findName(string name):name(name){}
    bool operator()(userData const& u){
        return u.name == name;
    }
};

vector<userData> v;

int main(){ _
    int n, score, tmp;
    string name;
    cin>>n;
    tmp = n;
    while(n--){
        cin>>name>>score;
        auto findResult = find_if(v.begin(), v.end(), findName(name));
        if(findResult == v.end()){
            v.push_back(userData{name,score});
        }else{
            (*findResult).score += score;
        }
    }
    sort(v.begin(), v.end(), cmp);
    cout<<v[0].name;
    cout<<endl;
}
