

#include <bits/stdc++.h>

using namespace std;

void printBinary(int num)
{
    for (int i = 10; i >= 0; --i)
    {
        cout << ((num >> i) & 1);
    }
    cout << endl;
}

int main()
{


 // Trick-1: Odd-Even check
 /*
    Odd numbers end with 1(LSB)
    Even numbers end with 0(LSB)
    
*/

    for (int i = 0; i < 8; i++)
    {
        //printBinary(i);
        if (i & 1)
        {
            cout << "odd\n";
        }
        else
        {
            cout << "even\n";
        }
    }






// Trick-2: Multiply / Divide by 2

    int n = 5;

    //Right shift: Division by 2
    cout << (n >> 1) << endl; // 5/2

    //Left Shift: Multiply by 2
    cout << (n << 1) << endl; // 5*2








// Trick-3: UpperCase to LowerCase conversion and ViceVersa
    //Uppercase 5th bit : 0
    //Lowercase 5th bit : 1
    //Remaining bits are same for both

    //Upper to lower*********************************
    char A = 'A';
    char a = A | (1 << 5);
    cout << a << endl;
    //or
    cout << char('C' | ' ') << endl;

    //lower to Upper*********************************
    cout << char(a & (~(1 << 5))) << endl;
    //or
    cout << char('c' & '_') << endl;







//Trick-4: clear LSB's

    // to clear LSB bits after i bits
    int i1=4;
    int a1 = 59;
    printBinary(a1);
    int b1= (a1 & (~((1<<(i1+1))-1)));
    printBinary(b1);



//Trick-5: clear MSB's

    //to clear MSB bits before i bits
    int i2=3;
    int c =  (a1 & (((1<<(i1+1))-1)));
    printBinary(c);







//Trick-6: Power of 2 check

    int num =15;

    if(n & (n-1)){
        cout<<"Not power of 2"<<endl;
    }
    else{
        cout<<"power of 2"<<endl;
    }



}