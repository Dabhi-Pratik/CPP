#include<iostream>

using namespace std;

class Node{
     
    public:

     int data;
     Node *next;

     Node(){
        this->data = 0;
        this->next = NULL;
     }

};


int main(){

    Node *n1 = new Node();
    n1->data = 200;

    Node *n2 = new Node();
    n2->data = 300;
    n1->next = n2;

    Node *n3 = new Node();
    n3->data = 400;
    n2->next = n3;

    Node *n4 = new Node();
    n4->data = 500;
    n3->next = n4;
    
    cout<<n1->data<<endl;
    cout<<n2->data<<endl;
    cout<<n3->data<<endl;
    cout<<n4->data<<endl;

    cout<<"============================="<<endl;

    Node *ptr = n1;

    while(ptr->next != NULL){
        cout<<n1->data<<endl;
        ptr = ptr->next;
    }
    
    
    return 0;
}