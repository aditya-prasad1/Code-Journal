#include <bits/stdc++.h>
using namespace std;

#define MAX 10000

class Stack{
    int top;
public:
    int arr[MAX];
    
    Stack() { top = -1; } // constructor is called
    
    void push(int num){
        if(top >= MAX-1){
            cout << "stack overflow";
            return;
        }
        
        arr[++top] = num; //increments top and then adds num at top+1
        return; //reduntant in void function
    }
    
    int pop(){
        if(top < 0){
            cout << "stack underflow";
            return -1;
        }
        
        return arr[top--]; // return arr[top] and then decrements it
    }
    
    int peek(){
        if(top < 0){
            cout << "no elements";
            return -1;
        }
        
        return arr[top]; // returns top most value if exists
    }
    
    bool isEmpty(){
        return (top<0); // if condn is true else false
    }
};

int main(){
        Stack s;
        s.push(10); s.push(20); s.push(30);
        cout << s.peek(); // use cout to print the return data type
        cout << endl;
        cout << s.isEmpty();
        cout << endl;
        s.pop(); s.pop(); s.pop();
        cout << s.isEmpty();
        
        return 0;
    }



