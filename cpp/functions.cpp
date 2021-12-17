#include<bits/stdc++.h>
using namespace std;

/*  by value
void swap_func(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a =3;
    int b = 5;
    cout<< a<< " "<< b << endl;
    swap(a,b);
    cout<< a<< " "<< b << endl;
}


Output: 3 5


*/







/*  by Reference    (NO need to use pointers)
    void swap_func(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a =3;
    int b = 5;
    cout<< a<< " "<< b << endl;
    swap(a,b);
    cout<< a<< " "<< b << endl;
}


Output: 5 3
*/




//Inbuilt function : Swap
int main(){
    int a =3;
    int b = 5;
    cout<< a<< " "<< b << endl;
    swap(a,b);
    cout<< a<< " "<< b << endl;
}



/*

void func(string &s){
    s = "";
}
int main(){
    string s = "abcdef";
    cout<< s<< endl;
    func(s);
    cout<< s<<endl;
}

Output :       (Empty string) 
*/



// Arrays By Default pass by Reference
/*

void func(int a[]){
    a[0]=5;
}
int main(){
    int a[10];
    a[0]=7;
    cout<< a[0] << endl;
    func(a);
    cout<< a[0] <<endl;
}

Output :  7     
          5    
*/



/*
    //2D array
    void func(int a[][20]){
    a[0][0]=5;
}
int main(){
    int a[10][20];
    a[0][0]=7;
    cout<< a[0][0] << endl;
    func(a);
    cout<< a[0][0] <<endl;
}


*/