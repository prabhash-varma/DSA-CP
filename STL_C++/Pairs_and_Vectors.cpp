

#include<bits/stdc++.h>
using namespace std;




void printVec(vector<int> &v){
    for(int i=0;i< v.size();i++){
        cout<< v[i]<< " ";
    }

    cout << endl;
}

int main(){



//Pairs----------------------------------------------------------------------------------------------
    pair<int,string> p;

    //p = make_pair(2,"abc");
    //  (or)
      p = {2,"abc"};
   // cout << p.first << " " <<p.second << endl;

    pair<int,int> p_array[3];

    p_array[0] = {1,2};
    p_array[1] = {2,3};
    p_array[2] = {3,4};

    for(int i=0; i <3 ;i++){
        cout<<p_array[i].first  << " "<<p_array[i].second<<endl;
    }




// Vectors ------------------------------------------------------------------------------
    
    vector<int> v;

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x);     //Insertion at back in vector
    }
    
    printVec(v);







// Vector size declaration-------------------------------------------------------------------------------------
 vector<int> v[10];    // All 10 values will be 0
 v.push_back(7);       // v[10] aka 11th value = 7


 vector<int> a[10,3];    // All 10 values will be 3 



v.pop_back();   // remove  last value of vector 

vector<int> v2 = v; // Copying vectors (we can't do this in arrays arr1 != arr2)

}