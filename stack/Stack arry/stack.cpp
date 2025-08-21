#include<iostream>

using namespace std;


class Stack{
  
    public:
    
    int top;
    int arr[5];

    public:

    Stack(){
      top = -1;
    }

 void push(int value){
 
    if(top == 4){
        cout<<"Stack is Full"<<endl;
    }
    else{
        top++;
        arr[top] = value;
        
        cout<<arr[top]<<"  is Successfully Added.....!"<<endl;
    }

 }

 
    void pop(){
        if(top == -1){
            cout << "Stack is Empty Enter Value....!"<<endl;
        }
        
        else{
            cout<<arr[top]<<"  is Successfully Removed....!"<<endl;
            top--;
        }
    }

    void peek(){
        if(top == -1){
            cout<<"Stack is Emty....!"<<endl;
        }
        else{
            cout << arr[top] <<"Now is Top.....!"<<endl;
        }
    }

    void size(){
        if(top == -1){
            cout << "Total Element in stack is "<< top+1 << endl;
        }
    }
};


int main(){
  
    Stack s1;

    s1.push(10);
    s1.push(20);


    s1.pop();

    s1.peek();

    s1.size();

    return 0;


}