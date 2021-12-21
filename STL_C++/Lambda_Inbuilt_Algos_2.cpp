

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    
    //Lambda Function
    cout<< [](int x){return x+2;}(2)<< endl;
    //                            ^--Input parameter

    auto sum = [](int x,int y){return x+y;};
    cout<<sum(2,3)<<endl;;
    

     //All of
     vector<int> v ={2,3,5};
     cout<< all_of(v.begin(),v.end(),[](int x){return x>0;}) <<endl;


     //Any of
      cout<< any_of(v.begin(),v.end(),[](int x){return x>0;}) <<endl;

    //None of
     cout<< none_of(v.begin(),v.end(),[](int x){return x>0;}) <<endl;




}