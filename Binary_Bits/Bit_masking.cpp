

//BIT Masking

/*
    Apple - 0
    Orange- 1
    Banana- 2
    Lichi - 3


    1st Person: 2,3
    2nd Person: 0,1,2
    3rd Person: 1,3

    We need to Find common fruits?
    1st intersection 2nd ==> 2(Banana)

    
    Bit Masking:
    1st Person: 2,3   ==> 1100  (make 2,3 bits as 1)    = 12
    2nd Person: 0,1,2 ==> 0111  (make 0,1,2 bits as 1)  = 7
    3rd Person: 1,3   ==> 1010  (make 1,3 bits as 1)    = 10

     1st intersection 2nd ==> 12 & 7 (1100 & 0111 = 2nd bit common) 


*/

#include<bits/stdc++.h>

using namespace std;


// Question:  https://codeforces.com/blog/entry/73558
int main(){

//Watch: https://youtu.be/mqCdA8mcJeo
}
