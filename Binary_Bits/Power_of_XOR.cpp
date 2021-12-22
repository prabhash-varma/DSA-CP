
/*
 XOR properties:
     1 0 ==> 1
     0 1 ==> 1
     0 0 ==> 0
     1 1 ==> 0

     x^x = 0
     x^0 = x
*/
#include<bits/stdc++.h>

using namespace std;

int main(){
    


//Swap----------------------------
    int a=4,b=6;

      a = a ^ b;
      b = b ^ a;
    // b = b ^ ( a ^ b)==> b ^ b ^ a==>0 ^a ==>b = a

      a = a ^ b;
    //a= a ^ b ^ a ==> a = b

      cout<<a<<" "<<b<<endl;



// Eliminate duplicates
    /*
        Given array of n integers. All integers are present in even count 
        except one. Find that one integer which has odd count in O(N) time complexity
        and O(1) space.
    */

   int n;
   cin>>n;
   int ans = 0;
   int x;

   for(int i=0;i<n;i++){
       cin>>x;
       ans ^=x;
   }
   cout<< ans << endl;


}