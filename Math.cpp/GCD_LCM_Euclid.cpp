

/*
    -------------------------
    |   A *  B = LCM * GCD  |
    -------------------------
*/



#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b){

    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

int main(){
  //GCD
    cout<<gcd(18,12)<<endl;

  //LCM
    cout<< 12*18/gcd(12,18)<<endl;

    cout<< __gcd(12,18)<<endl; //Inbuilt func
    


}