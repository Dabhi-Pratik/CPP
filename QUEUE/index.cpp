#include<iostream>

using namespace std;

# define size 5

class Queue{
        
   int arr[size];
   int front,real;

   public:

   Queue(){
    front = real = -1;
   }

   void Enqueue(int value){
    if(real == size-1){
        cout << "Queue is Full.....!" <<endl;
    }

    if(front == -1 )
    front=0;
    arr[++real]=value;

    cout << value <<" iS Add in Queue Successfully......!"<<endl;
   }

   void Dequeue(){
      if(front == -1 || front > real ){
        cout <<"Queue is Empty.Add Queue...!"<<endl;
        return;
      }
      cout << arr[front]<<" is Removed From Queue Successfully...!"<<endl;

      front++;
   }

   void peek(){
         
      cout << arr[front] << " is the Front Element in the Queue....!"<<endl;

   }

   void Display(){
      cout<<"Queue All Element: ";
     for(int i=front;i<=real;i++){
        cout<<arr[i] <<"  ";
     }
   }


};

int main(){

    Queue q1;

    // Add Element in Queue

    q1.Enqueue(10);
    q1.Enqueue(20);
    q1.Enqueue(30);
    q1.Enqueue(40);
    q1.Enqueue(50);
    

    // Remove Element in Queue

    q1.Dequeue();

    // Front of Queue

    q1.peek();

    // Display All Element of Queue

    q1.Display();


    return 0;
}