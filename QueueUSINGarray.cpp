#include<iostream>
using namespace std;
class queueusingarray{
    public:
    int *data;
int firstindex;
int nextindex;
int size;
int capacity;
queueusingarray(int s){
    data= new int[s];
size=0;
capacity=s;
firstindex=-1;
nextindex=0;
}
int getsize(){
    return size;
}
bool isEmpty(){
    return size==0;
}
void enqueue(int element){
if(size==capacity){
    cout<<"queue is full"<<endl;
    return;
}
else{
    data[nextindex]=element;
    nextindex=(nextindex+1)%capacity;
}
if(firstindex==-1){
    firstindex=0;
}
size++;
}
int dequeue(){
if(isEmpty()){
    cout<<"queue is empty"<<endl;
    return 0;
}
    int a= data[firstindex];
    firstindex=(firstindex+1)%capacity;
if(size==0){
    firstindex=-1;
    nextindex=0;
}
size--;
return a;
}
};
int main(){
    queueusingarray q(5);
    q.enqueue(10);
     q.enqueue(20);
      q.enqueue(30);
       q.enqueue(40);
        q.enqueue(50);
        cout<<q.getsize()<<endl; 
            cout<<q.dequeue()<<" ";
             cout<<q.dequeue()<<" ";
              cout<<q.dequeue()<<" ";
               cout<<q.dequeue()<<" ";
    
        
   
}
