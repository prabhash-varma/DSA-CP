
#include<bits/stdc++.h>

using namespace std;



bool should_i_swap(int a,int b){
    if(a>b) return true;
    return false;

}


bool should_i_swap_pair(pair<int,int> a,pair<int,int> b){

    if(a.first != b.first){
         if(a.first>b.first) return true;
    return false;
    }
    else{
        if(a.second<b.second) return true;
    return false;

    }
}



//Comaparator Custom Function
// (***Important) If we need to Swap then return false (only in inbulit comp function)
// else return true
bool comp(pair<int,int> a,pair<int,int> b){

    if(a.first != b.first){
         if(a.first>b.first) return false;
    return true;

            //or
            //return a.first<b.first;
    }
    else{
        if(a.second<b.second) return false;
    return true;

        //or
     //return a.second>b.second;

    }
}






int main(){
     int n;
    cin>> n;

//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>> arr[i];
//     }

//    // sort(arr.begin(),arr.end());

//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(should_i_swap(arr[i],arr[j])){
//                 swap(arr[i],arr[j]);
//             }
//         }
//     }


//      for(int i=0;i<n;i++){
//         cout<<arr[i]<< " ";
//     }
//     cout<<endl;



    // Vector pair-----------------------------------------
     vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        cin>> a[i].first >> a[i].second;
    }

  

    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(should_i_swap_pair(a[i],a[j])){
    //             swap(a[i],a[j]);
    //         }
    //     }
    // }


    
// Changing C++ inbuilt sort ALgo with Custom swap Function

    sort(a.begin(),a.end(),comp);


     for(int i=0;i<n;i++){
        cout<<a[i].first<< " "<<a[i].second<<endl;
    }
    cout<<endl;






}