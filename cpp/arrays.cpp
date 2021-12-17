

//Arrays
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>> a[i];
    }

    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + a[i];
    }

    cout << sum;



    //2d array 
    /*

        int n,m;
        cin >> n >> m;
        int a[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;++j){
                cin>>a[i][j];
            }
        }

    */


   //Array Sizes/ Limits
   /*

        int n;
        int arr[n];

       For Local array  : n range   < 10^5


       For Global array : n < 10^7
                            const int n = 1e7
                          int a[n];



   */
}