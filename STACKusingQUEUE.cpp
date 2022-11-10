#include<iostream>
using namespace std;
#include<queue>
class stack {
    int n;
 queue<int> q1, q2; 
 public:
 stack(){
    n=0;
 }
 
 void push(int x)
    {
        q2.push(x);
        n++;
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        queue <int> q=q1;
        q1=q2;
        q2=q;
  }
void pop() {
if (q1.empty())
            return;
        q1.pop();
        n--;
    }
 
int top()
    {
        if (q1.empty())
            return -1;
        return q1.front();
    }
 
int size() { 
        return q1.size(); 
        }
};
int main(){
    stack s;
    s.push(10);
     s.push(20);
     s.push(30);
      s.push(40);
      for (int i = 0; i <= s.size(); i++)
      {
        cout<<s.top()<<" ";
        s.pop();
      }
      return 0;
}
