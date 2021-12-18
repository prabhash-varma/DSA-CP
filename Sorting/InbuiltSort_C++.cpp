
// Intro Sort : QuickSort + HeapSort + Insertion Sort


#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>> n;
    // int a[n];

    // for(int i=0;i<n;i++){
    //     cin>> a[i];
    // }

    // sort(a,a+n);    //address of starting index, address last+1 index
    
    //  for(int i=0;i<n;i++){
    //     cout<<a[i]<< " ";
    // }
    // cout<<endl;


    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }

    sort(arr.begin(),arr.end());
     for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;

}