
/*

 Queue:
    
    - FIFO (First in First out)
    - enqueue
    - dequeue
    - front


*/


#include<bits/stdc++.h>

using namespace std;

int main(){
    queue<string> q;
    q.push("abc");
    q.push("bcd");
    q.push("cde");
    q.push("def");
    q.push("ghi");
    q.push("xyz");
        
        while(!q.empty()){
            cout<< q.front() <<endl;
            q.pop();
        }
}