#include<iostream>
using namespace std;
class Queue{
public:
    int f;
    int b;
    int arr[5];
    Queue(){
      f = 0;
      b = 0;
    }
    void push(int val){
      if(b==5){
            cout<<"Queue is Full"<<endl;
            return;
      }
      arr[b] = val;
      b++;
    }
    void pop(){
      if(f-b==0){
            cout<<"Queue is Empty!";
      }
      f++;
    }
    int front(){
      return arr[f];
    }
    int back(){
      return arr[b-1];
    }
    int size(){
      return b-f;
    }
    bool empty(){
      if(f-b==0) return true;
      return false;
    }
    void display(){
      for(int i = f; i<b;i++){
            cout<<arr[i]<<" ";
      }
      cout<<endl;
    }
    
};

int main(){
      Queue q;

}