
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v ={2,3,5,6,7};

    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<< " ";

    // }
    // cout<<endl;



    //Iterator declaration
    vector<int> :: iterator it = v.begin();
    //cout<<(*(it+1))<<endl;

    for(it=v.begin();it !=v.end();it++){
        cout<<(*it)<<endl;
    }



    //vector of pair
    vector<pair<int,int>> v_p ={{1,2},{2,3},{3,4}};
    vector<pair<int,int>> :: iterator ite;
    for(ite=v_p.begin();ite!=v_p.end();ite++){
        cout<< (*ite).first<<" "<<(*ite).second<<endl;
    }

    // (*it).first == (it->first)
    for(ite=v_p.begin();ite!=v_p.end();ite++){
        cout<< (ite->first)<<" "<<(ite->second)<<endl;
    }

}

