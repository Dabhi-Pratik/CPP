#include<iostream>
#include<string>

using namespace std;

class Data{
   
    public:
    string name;
    string email;
    int phone;
    string password;

};

int main(){

    // data s1,s2;

    // s1.name="Utsav";
    // s1.email="utsav@gmail.com";
    // s1.phone=21562144;
    // s1.password="utsav@123";


    // cout << "Name: " <<s1.name << endl;
    // cout << "Email: " <<s1.email << endl;
    // cout << "Phone: " <<s1.phone << endl;
    // cout << "Password: " <<s1.password<< endl;
    
    // cout << endl;

    // s2.name="Dharmik";
    // s2.email="dharmik@gmail.com";
    // s2.phone=32565524;
    // s2.password="dharmik@123";


    // cout << "Name: " <<s2.name << endl;
    // cout << "Email: " <<s2.email << endl;
    // cout << "Phone: " <<s2.phone << endl;
    // cout << "Password: " <<s2.password<< endl;
    
    // cout << endl;

   
    Data obj1,obj2;
    int size;

    cout<<"Size: ";
    cin>>size;

    Data obj[size];


    for(int i=0; i<size; i++){

        cout<<"Name-"<<i<<": ";
        cin>> obj[i].name;

        cout<<"Email-"<<i<<": ";
        cin>> obj[i].email;

        cout<<"Phone-"<<i<<": ";
        cin>> obj[i].phone;

        cout<<"Password-"<<i<<": ";
        cin>> obj[i].password;

        cout<<endl;
    }


    for(int i=0; i<size; i++){
       
        cout << "Name: "<<obj[i].name<<endl;
        cout << "Email: "<<obj[i].email<<endl;
        cout << "Phone: "<<obj[i].phone<<endl;
        cout << "Password: "<<obj[i].password<<endl;

        cout << endl;
    }

    
    


    return 0;
}