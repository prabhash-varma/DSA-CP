
#include<bits/stdc++.h>

using namespace std;

int main(){
    
   //1)
    string str = "Hello";
        cout<<str;

   //2)
    string str2;
    cin>>str2;      //Takes input : Hi Varma  Output: Hi
    cout<<str2<<endl;

    //3)
    cout<< str +str2<<endl;     //concatenate

    //4)
    if(str==str2){
        cout<<"Equal";
    }
    else{
        cout<<"Not Equal";
    }


    //5)
    cout<< str[0]<<endl ; //Accessing using index

    //6) To print String size
    cout<< str.size()<<endl;


    //7) get line 
        //getline(cin,str);
        //cout<<str;

    //8)
        int t;
        cin>> t;
        cin.ignore(); //Cursor shifts to next line (use this only when you use getline functon)
        while(t--){
            string s;
            getline(cin,s);
            cout<< s<< endl;
        }


    //9) String reverse
        
        cin>>str;
        string str_rev;
        for(int i= str.size()-1;i>=0; --i){
            str_rev.push_back(str[i]);
        }
    cout<<str_rev;

    //check palindrome 
    if(str == str_rev){
        cout<< "YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}