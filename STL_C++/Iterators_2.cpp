
//Iterators
//C++ 11
// Range Based loops
//Auto keyword



#include<bits/stdc++.h>
using namespace std;



int main(){


     vector<int> v ={2,3,5,6,7};


    //Iterator declaration
    //  vector<int> :: iterator it = v.begin();
    // for(it=v.begin();it !=v.end();it++){
    //     cout<<(*it)<<endl;
    // }

 
 
 /* 
    ---------------------
    | Range Based loops |
    ---------------------

*/
    for(int value: v){
        cout<< value<<" ";
    }
    cout<<endl;


    //vector of pair
    vector<pair<int,int>> v_p ={{1,2},{2,3},{3,4}};
   
    for(pair<int,int> value:v_p){
        cout<<value.first << " "<<value.second<<endl;
    }
    cout<<endl;



/* 
    ---------------------
    | Auto Keyword      |
    ---------------------

*/


for(auto it=v.begin();it !=v.end();it++){
         cout<<(*it)<<endl;
 }


 //Vector of pair
 
 for(auto value:v_p){
        cout<<value.first << " "<<value.second<<endl;
    }
    cout<<endl;









}