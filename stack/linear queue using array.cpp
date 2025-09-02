#include <bits/stdc++.h>
using namespace std;

#define MAX 10000

// remove from front and add from rear

class Queue{
public:
    int arr[MAX];
    int front, rear;
    
    Queue() { front = -1; rear = -1;}
    
    void enqueue(int num){ // inserting into rear
        if(rear >= MAX -1 ){
            cout << "queue overflow";
            return;
        }
        
        if(front == -1) front = 0; // if first element
        arr[++rear] = num; // incrementing rear and saving num at rear+1
        return;
    }
    
    int dequeue(){
        if(front < 0 || front > rear){
            cout << "queue underflow 0"; return -1; 
        }
        
        return arr[front++];
    }
    
    int peek(){
        if(front < 0 || front > rear){
            cout << "no element"; return -1;
        }
        
        return arr[front];
    }
    
    bool isEmpty(){
        return (front < 0 || front > rear);
        }
    }; // there is semi colon at the end of class
    
    int main(){
        
        Queue q;
        
        q.enqueue(10); q.enqueue(20); q.enqueue(30);
        
        cout << q.peek() << " " << q.isEmpty() << endl;
        
        q.dequeue(); q.dequeue(); q.dequeue();
        
        cout << q.peek() << " " << q.isEmpty();
        
        return 0;
        
    }
