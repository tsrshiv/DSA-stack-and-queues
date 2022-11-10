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
class queue{
    public:
node *head;
node *tail;
int size;
queue(){
    head=NULL;
    tail=NULL;
    size =0;
}
int getsize(){
    return size;
}
bool isEmpty(){
  return size==0;  
}
void enqueue(int element){
     node *newnode = new node(element);
if(head==NULL){
    head=newnode;
    tail=newnode;
}
else{
tail->next=newnode;
tail=newnode;
}
size++;
} 
int dequeue(){
 if(isEmpty()){
    cout<<"Queue is empty"<<endl;
    return 0;
 }
 int ans = head->data;
 node *temp= head;
 head=head->next;
 delete temp;
 size--;
 return ans;
}
 };
 void print(node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
 }
int main(){   
queue q;
q.enqueue(10);
q.enqueue(20);
q.enqueue(30);
q.enqueue(40);
q.enqueue(50);
    cout<<q.dequeue()<<" ";
     cout<<q.dequeue()<<" ";
      cout<<q.dequeue()<<" ";
       cout<<q.dequeue()<<" ";
        cout<<q.dequeue()<<" "; 


}

