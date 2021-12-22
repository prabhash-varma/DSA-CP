

#include<bits/stdc++.h>

using namespace std;

const int N = 1e5+10;

int main(){
    cout<<INT_MAX<<endl;
    int a=(1LL<<31)-1; //2^32 - 1   
                        // signed int (1 bit reserved for sign)
                        //Overflow
    cout<<a<<endl;

    unsigned int b =(1LL<<32) - 1;  //Unsigned int
                                    //No Overflow
    cout<<b<<endl;

}