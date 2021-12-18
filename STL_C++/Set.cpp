
//Sets - unique elements 
//Ordered Sets
//Unordered
//Multi sets

#include<bits/stdc++.h>

using namespace std;


void print(set<string> &s){

    for(auto i : s){
        cout<<i<<endl;
    }


    /*
        Another method
        for(auto it = s.begin();it != s.end();it++){
            cout<<(*it)<<endl;
        }

    */
}




int main(){

    set<string> s;
    s.insert("abc");    //O(logn)
    s.insert("azxj");
    s.insert("ueyd");

    auto it = s.find("abc");    //O(logn)
    if(it!=s.end()){
        cout<<(*it);
    }

    // s.erase(it)  or s.erase("abc")


    print(s);


    //Unordered set -------------------------------------------------
    unordered_set<string> set;
    set.insert("abc");    //O(1)
    set.insert("azxj");
    set.insert("ueyd");

    auto ite = set.find("abc");    //O(1)
    if(ite!=set.end()){
        cout<<(*ite);
    }



    //Multi set -----------------------------------------------
    //Multiple values allowed
     multiset<string> st;
    st.insert("abc");    //O(logn)
    st.insert("azxj");
    st.insert("ueyd");
    st.insert("abc"); 

    auto iter = st.find("abc");    //O(logn)
    if(iter!=st.end()){
        cout<<(*iter);
    }

     // st.erase(iter)   ---- Only one abc will be deleted
     // st.erase("abc") --- All "abc" will be deleted
     //st.clear         --- clears set
     


}