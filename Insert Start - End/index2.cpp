#include<iostream>

using namespace std;

class Node{
    public:

    int data;
    Node* next;

    Node(int value){
         data = value;
         next = nullptr;
    }
};

class Linklist{
   private:
   Node* head;

   public:

    Linklist(){
        head = nullptr;
    }

    void insertend(int value){
         
        Node* newnode = new Node(value);

        if(head == nullptr){
            head = newnode;
        }
        else{
            Node* temp = head;

            while(temp->next != nullptr){
                temp=temp->next;
            }
            temp->next = newnode;
        }
    }


  void display(){

            Node* temp = head;

            while(temp != nullptr){
                cout<<temp->data<<"->";
                temp=temp->next;
            }
            cout<<"NULL"<<endl;
        }
};



int main(){
         
    Linklist li;

    li.insertend(10);
    li.insertend(20);
    li.insertend(30);
 
    li.display();
    
    return 0;
}