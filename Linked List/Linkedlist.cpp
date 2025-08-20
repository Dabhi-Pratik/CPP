#include<iostream>

using namespace std;

class Node{

     public: 

     int data;
     Node* next;

     public:

     Node(int value){
         data = value;
         next = nullptr; 
     }
};

class Linkedlist{
    
    private:

    Node* head;


    public:

    Linkedlist(){
        head = nullptr;
    }

    void insertatstart(int value){

        Node* newNode =  new Node(value);

        newNode->next = head;

        head = newNode;
    }

    void insertatend(int value){
      
        Node* newNode = new Node(value);


        if(head == nullptr ){
             head = newNode;
        }
        else{
            Node* temp = head;

            while(temp->next != nullptr){
                temp=temp->next;
            }
            temp->next = newNode;
        }

    }

    void insertatspecificpos(int value,int pos){
              
        if(pos == 0){
            insertatstart(value);
            return;
        }
        Node* newNode = new Node(value);
        Node* temp = head;

        for(int i=0; i<pos-1&& temp != nullptr; i++){
            temp = temp->next;
        }
        if(temp==nullptr){
            cout<<"Out of Range "<<endl;
            return;
        }

        newNode->next = temp->next;
        temp->next=newNode;
    }

    void Display(){
        Node* temp = head;

        while(temp != nullptr){
            cout << temp->data <<" -> ";
            temp=temp->next;
        }
        cout<<"NULL.......!"<<endl;
    }


};


int main(){

    Linkedlist l1;

    l1.insertatstart(20);
    l1.insertatstart(30);
    l1.insertatstart(40);
    l1.insertatend(100);
    l1.insertatstart(200);
    l1.insertatspecificpos(200,3);
    l1.Display();


    return 0;
}