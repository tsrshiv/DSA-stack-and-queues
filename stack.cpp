#include<iostream>
using namespace std;
class node{
    public:
    int data;
node *next;
node(int data){
this->data=data;
next=NULL;
}
};
class stack{
    public:
    node *head;
    int size;
    stack(){
        head=NULL;
        size=0;
    }
    int getsize(){
        return size;
    }
        bool isEmpty()
    {
        return size == 0;
    }
void push(int data){
node *newnode= new node(data);
newnode->next=head;
head=newnode;
size++;
}
int pop(){
        if(isEmpty()){
            return 0;
        }
        int ans = head->data;
        node *temp= head;
        head= head->next;
        delete temp;
        size--;
        return ans;
    }
int top(){
   if(isEmpty()){
    return 0;
        }  
        return head->data;
}
};
int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
     cout<<"top :"<<s.top()<<endl;
    cout<<"poped elements are :";
    for (int i = 0; i<=s.getsize(); i++)
    {
        cout<<s.pop()<<" ";
    }
    cout<<endl;
    cout<<"top :"<<s.top()<<endl;
    cout<<"size is :"<<s.getsize()<<endl;
    cout<<"is empty :"<<s.isEmpty()<<endl;
   cout<<endl;
    
}
