
#include<bits/stdc++.h>
using namespace std;

int main(){
 //   cout<< "Hello "<<" "<<"Hi Prabhash Varma"<<endl;
    
    //char ,int, float ,double, bool

    int a = 6;
    /* a++ vs ++a
        cout<< a<< endl;
        cout<< a++<< endl;
        cout<< a<< endl;
        cout<< ++a<< endl;

    Output:
    6
    6
    7
    8

    */


/*
   char c = 'a';
   cout << (int) c<<endl;     //Prints ASCII value of a, Type conversion
*/

/*
int b,d;
cin >> b >>d ;
cout<<b <<" ,"<<d<<endl;
*/

/*

    int a,b,c;
    char d;
    cin>> d >> a;
    cout<< d << " " << a;


    INPUT: 
    12 2345
    1 2 2345

    OUTPUT:
    1 2 
    1 2
    

*/


/*
    Calculations
    |                                         OUTPUT                               Precedence(INcreasing bottom to Top)
    cout<< 7/2;                                 3                                   Double
    cout<< 7/2.0                                3.5                                 Float
    cout<< 'c'+ 1                               100                                 Long Long Int
    cout<< 3/2;                                 1                                   Long Int
                                                                                    Int
                                                                                    Char
*/      

/*

    int a = 3/2.0;
    cout<<a;

    Output: 1;

    double a = 3/2.0;
    cout<<a;

    Output: 1.5

    double a = 3/2; // 3/2 is calculated first and it results in 1
    cout<<a;

    Output: 1


                  

*/



/*  Operator Precedence
    cout<< 7 / 2 * 3 ;            Output: 9
    cout<< 3 * 7 / 2 ;            Output: 10


*/


/*

      -10^9 < int < 10^9
      -10^12 <long int < 10^12
      -10^18 <long long int < 10^18


*/


/*
    double a = 100000;
    double b = 100000;
    double c = a * b;
    cout<< fixed << setprecision(0)<< c << endl;


    Output : 10000000000

*/
}