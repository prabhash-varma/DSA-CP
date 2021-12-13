
#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cout<<"Enter value of n : "<<endl;

    cin>> n;
    int r;
    int sum=0;
    while(n>0){
        r = n %10;
        sum = sum+r;

        n = n/10;
    }

    cout<< sum<<endl;
}