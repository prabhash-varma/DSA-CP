
//Maps- stores in sorting order (increasing)
// All keys must be Unique (Replaces value if duplicate key found)
//By default values conatin 0 or Empty string 


#include<bits/stdc++.h>

using namespace std;

void print(map<int,string> &m){
    cout << m.size() <<endl;
    for(auto &i: m){
        cout<<i.first<<" "<<i.second<<endl;
    }
}



int main(){

    map<int,string> m;
    m[1]="abc";
    m[5]="cdc";
    m[3]="acd";
    m[6]="woow";
    m[7]="kwdoe";

    m.insert({4,"afg"});



//Find ---------------------------
// auto it = m.find(3);
// if(it==m.end()){
//     cout<<"No value";
// }
// else{
//     cout<<(*it).first <<" "<<(*it).second<<endl;
// }


//Erase-------------(deletion)

//print(m);
m.erase(3); 




//clear--------------
m.clear();






   

    
}