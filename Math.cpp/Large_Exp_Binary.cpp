
#include<bits/stdc++.h>

using namespace std;
const int M=1e9+7;

//a<=10^18 b<=10^9 M<=10^9==> we can use iterative method

// What if a <=10^18 ?
/*

    int binExp(int a,int b){
    a %=M;
    int ans=1;
    while(b){
        if(b&1){
            ans = binMultiply(ans,a);
        }
        else{
            a = binMultiply(a,a);
            b >>= 1;
        }
    }
    return ans;
}
*/



int binMultiply(long long int a, long long int b){
    int ans=0;
    while(b>0){
        if(b&1){
            ans = (ans + a) % M;
        }
        a = (a + a) % M;
        b>>=1;
    }
    return ans;
}

int binExp(int a,int b){
    
    int ans=1;
    while(b){
        if(b&1){
            ans = binMultiply(ans,a);
        }
        else{
            a = binMultiply(a,a);
            b >>= 1;
        }
    }
    return ans;
}



int main(){

    cout<< binExp(2,10) <<endl;


}