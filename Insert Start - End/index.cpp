#include<iostream>

using namespace std;


class Node{
     public:

     int data;
     Node*next;

     Node(int value){
        data=value;
        next = nullptr;
     }

    };

     class Linklist{
        private:
        Node*head;
        
        public:
    
           Linklist(){
             head = nullptr;
           }

           void insert(int value){

              Node* newnode = new Node(value);

              newnode->next = head;
              head = newnode;
           }

     

     void display(){
          
         Node* temp = head;

         while( temp != nullptr){
            cout<<temp->data << "->";
            temp=temp->next;
         }
         cout<<"NULL"<<endl;
         
     }
};

int main(){

    Linklist li;

     li.insert(10);
     li.insert(20);

     li.display();

      

    return 0;
    
}