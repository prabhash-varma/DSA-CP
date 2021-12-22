
//Find nth root of given number x
#include<bits/stdc++.h>

using namespace std;

double eps=1e-7; //10^-6

double multiply(double mid,int n){
    double ans=1;
    for(int i=0;i<n;i++){
        ans*=mid;
    }
    return ans;

}

int main(){

    int n;
    cin>>n;
    double x;
    cin>>x;

    double lo=1,hi=x,mid;

    while(hi-lo>eps){

        mid = (hi+lo)/2;

        if(multiply(mid,n) < x){
            lo = mid;
        }
        else{
            hi = mid;
        }
    }
    cout<<setprecision(10)<< lo <<"\n"<<hi<< endl;
}