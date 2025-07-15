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
    n1->data = 100;

    Node *n2 = new Node();
    n2->data = 200;
    n1->next = n2;

    Node *n3 = new Node();
    n3->data = 300;
    n2->next = n3;

    Node *n4 = new Node();
    n4->data = 400;
    n3->next = n4;

    cout<<"===========simple=========="<<endl;


    cout<<n1 << "- n1->data: "<<n1->data<<"- n1->next"<<n1->next<<endl;
    cout<<n2 << "- n2->data: "<<n2->data<<"- n2->next"<<n2->next<<endl;
    cout<<n3 << "- n3->data: "<<n3->data<<"- n3->next"<<n3->next<<endl;
    cout<<n4 << "- n4->data: "<<n4->data<<"- n4->next"<<n4->next<<endl;


    cout<<"========================="<<endl;


    cout<<n1->data<<endl;
    cout<<n1->next->data<<endl;
    cout<<n1->next->next->data<<endl;
    cout<<n1->next->next->next->data<<endl;

    cout<<"==============================="<<endl;


    Node *ptr = n1;

    while (ptr->next != NULL)
    {
         cout<<ptr->data<<endl;
         ptr = ptr->next;
    }
    


    return 0;
}