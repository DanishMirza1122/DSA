#include <bits/stdc++.h>

using namespace std;

class Queue {
public:
    stack<int> s1,s2;
    
    void push(int x) {
        while(s1.size()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(s2.size()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    
    int pop() {
        int n=s1.top();
        s1.pop();
        return n;
    }
    
    int peek() {
        return s1.top();
    }
    
    bool empty() {
        return s1.size()==0;
    }
};
int main() {
  Queue q;
  q.push(1);
  q.push(2);
  cout << "The top of the queue is " << q.peek() << endl;
  cout << "The element poped is " << q.pop() << endl;
  //q.push(5);
  //cout << "The top of the queue is " << q.peek() << endl;
  //cout << "The size of the queue is " << q.size() << endl;
}