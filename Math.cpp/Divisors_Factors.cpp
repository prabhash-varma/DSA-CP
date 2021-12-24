

//Find divisors 

#include<bits/stdc++.h>
using namespace std;





int main(){


    //SQRT method to find sum and count of divisors
    int n;
    cin>>n;
    int ct=0;
    int sum=0;
    for(int i=1; i*i<=n;i++){
        if(n%i==0){
            cout<< i<<" "<<n/i<<endl;
            ct+=1;
            sum+=i;
            if(n/i != i){
                sum += n/i;
                ct +=1;
            }

        }
    }

    cout<<ct<<" "<<sum<<endl;




    /*
        SQRT method is not suitable for large numbers 10^10 so we 
        require another method Formula method
    */

    /*
        x = p1^n1 * p2^n2 * p3^n3 (Prime Factorization)
        No.of Divisors = (n1+1)*(n2+1)*(n3+1)

    */

   /*
                              p1^(n1+1) -1       p2^(n2+1)  -1      p3^(n3+1) -1
        Sum of Divisors =   ---------------- *  ---------------- * ---------------
                                 p1-1                 p2-1              p3-1
   */
}