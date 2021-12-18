
#include<bits/stdc++.h>

using namespace std;

int main(){

    // map<pair<int,int> ,int> m;

    // pair<int,int> p1,p2;
    // p1 = {1,2};
    // p2 = {2,3};
    // cout<< (p1<p2) <<endl; // prints 1 or 0



    map<pair<string, string>, vector<int> > mp;
    int n;
    cin>> n;
    for(int i=0;i<n;i++){
        string fn,ln;
        int ct;
        cin>>fn>>ln>>ct;
        for(int j=0;j<ct;j++){
            int x;
            cin>>x;
            mp[{fn,ln}].push_back(x);

        }
    }

    for(auto &pr : mp){
        auto &full_name = pr.first;
        auto &list = pr.second;
        cout<<full_name.first<<" "<<full_name.second<<endl;
        cout<< list.size()<<endl;
        for(auto &element : list){
            cout<< element<< " ";
        }
        cout<<endl;

    }
}