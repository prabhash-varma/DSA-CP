//upper bound func : finds the greater element
//lower bound func : if the num  exists in the array then it will be included




#include<bits/stdc++.h>

using namespace std;


int main(){
int n;

cin>>n;

/*
int a[n];

for(int i=0;i<n;i++){
    cin>>a[i];
}

sort(a,a+n);

for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<endl;
*/

//a: starting address
//a+n: target address + 1
//5 : to find lower bound of this element 

/*
int *ptr = lower_bound(a,a+n,6);

if(ptr==(a+n)){
    cout<<"Not found";
    return 0;
}

cout<<(*ptr)<<endl;
*/



/*
//Upper bound:
int *pt = upper_bound(a,a+n,6);

if(pt==(a+n)){
    cout<<"Not found";
    return 0;
}

cout<<(*pt)<<endl;
*/



//For Vectors:------------------------------------
/*
vector<int> arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

sort(arr.begin(),arr.end());

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

auto it = upper_bound(arr.begin(),arr.end(),5);
if(it==arr.end()){
    cout<<"Not found";
    return 0;
}

cout<<(*it)<<endl;
*/





//for SETS:-------------------------------------------------------
set<int> s;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    s.insert(x);
}

auto ite = s.lower_bound(5);
if(ite==s.end()){
    cout<<"Not found";
    return 0;
}

cout<<(*ite)<<endl;



}