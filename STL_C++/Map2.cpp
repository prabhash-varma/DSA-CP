// Unordered Maps


#include<bits/stdc++.h>

using namespace std;

void print(unordered_map<int,string> &m){
    cout << m.size() <<endl;
    for(auto &i: m){
        cout<<i.first<<" "<<i.second<<endl;
    }
}



int main(){

  unordered_map<int,string> m;
   m[1]="abc";
    m[5]="cdc";
    m[3]="acd";
    m[6]="woow";
    m[7]="kwdoe";

    m.insert({4,"afg"});

    print(m);

    
}


//Multi Maps
/*

    multimap<int,vector<string>> m;

*/