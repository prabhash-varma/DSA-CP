
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>> n;

/*
    for Arrays : replace v.begin() with a
                 replace v.end()   with a+n

*/
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

/*
    //1)Min element
    int min = *min_element(v.begin(),v.end());
    cout<<min<<endl;

*/



/*
    //2)Max element
    int max = *max_element(v.begin(),v.end());
    cout<<max<<endl;
*/



/*
    //3)Accumulate
    int sum = accumulate(v.begin(),v.end(),0);
    cout<<sum<<endl;

*/



/*
    //4)Count
    int ct = count(v.begin()+2,v.end(),3);
    cout<<ct<<endl;
*/


/*
    //5)Find
    auto it = *find(v.begin(),v.end(),2);
    if(it != v.end()){
        cout<< *it << endl;
    }
    else{
        cout<<"Element not found";
    }

*/





/*
    //6)Reverse
    reverse(v.begin(),v.end());
    for(auto val: v){
        cout<< val << " ";
    }
    cout<<endl;

    string s = "abcdef";
    reverse(s.begin()+2,s.end());
    cout<<s<<endl;
*/


}