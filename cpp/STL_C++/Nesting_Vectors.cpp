

#include<bits/stdc++.h>
using namespace std;

//print func for Vectors of Pair
void printVec(vector<pair<int,int> > &v){
    for(int i=0;i< v.size();i++){
        cout<< v[i].first<< " "<<v[i].second<<endl;
    }

    cout << endl;
}


//print func for Array of Vectors
void printVector(vector<int> &v){

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}



int main(){

/* 

     ---------------------
    | Vectors of Pair   |
    ---------------------


*/
    vector<pair<int,int>> v;    // A vector of pair 

    v = {{1,2},{2,3},{4,5}};
    printVec(v);


    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int x,y;

        cin>>x>>y;
        v.push_back({x,y});

    }

    printVec(v);








/*
        ---------------------
        | Array of Vectors  |
        ---------------------
*/


    int num; //No.of Vectors
    cin>>num;
    vector<int> vec[num];  //num vectors

    for(int i=0;i<num;i++){
        int s; //each vector size
        cin>>s;
        for(int j=0;j<s;j++){
            int x;
            cin>>x;
            vec[i].push_back(x);
        }
    }


    for(int i=0;i<num;i++){
        printVector(vec[i]);
    }


    cout<< vec[0][0]<<endl; // 0th element in 0th vector





/*

        ------------------------
        |   Vector of Vector    |
        ------------------------
*/

vector<vector<int>> vt;
int N;
cin>>N;

for(int i=0;i<N;i++){
    int n1;
    cin>>n1;

    vector<int> temp;
    for(int j=0; j<n1;j++){
        int x;
        cin>>x;
        temp.push_back(x);
    }
    vt.push_back(temp);

}

//vt[0].push_back(10);


for(int i=0;i<vt.size();i++){
    printVector(vt[i]);
}


}