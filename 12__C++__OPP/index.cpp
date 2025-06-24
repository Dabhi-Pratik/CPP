#include<iostream>
#include<string.h>

using namespace std;

class student{

      public:

       char name[100];
       int rollno;
       int age;
       char course[100];
};

class hotel{
     
     public:
  
    char name[100];
    int room_price;
    int lunch_price;

};

class dog{
     
     public:

     char name[100];
     int age;
     char country[100];
     char breed[100];
     char gender[100];
};

int main(){

    student std1,std2,std3;

        strcpy(std1.name,"Utsav");
        std1.rollno=1212;
        std1.age=17;
        strcpy(std1.course,"Full Stake");

        cout <<"Student Name: "<< std1.name << endl;
        cout <<"Student Roll Number: "<< std1.rollno << endl;
        cout <<"Student Age: "<< std1.age<< endl;
        cout <<"Student Course: "<< std1.course<< endl;

        cout<< endl;

        strcpy(std2.name,"Dharmik");
        std2.rollno=2121;
        std2.age=18;
        strcpy(std2.course,"Full Stake");

        cout <<"Student Name: "<<std2.name << endl;
        cout <<"Student Roll Number: "<<std2.rollno << endl;
        cout <<"Student Age: "<<std2.age<< endl;
        cout <<"Student Course: "<<std2.course<< endl;

       cout<< endl;

        strcpy(std3.name,"Brij");
        std3.rollno=2424;



        
        std3.age=19;
        strcpy(std3.course,"Full Stake");

        cout <<"Student Name: "<<std3.name << endl;
        cout <<"Student Roll Number: "<<std3.rollno << endl;
        cout <<"Student Age: "<<std3.age<< endl;
        cout <<"Student Course: "<<std3.course<< endl;

      cout<< endl;

        hotel h1,h2;

        strcpy(h1.name,"server cortico");
        h1.room_price=1000;
        h1.lunch_price=520;

          cout <<"Hotel Name: "<<h1.name <<endl;
          cout <<"1Day Room Price: "<<h1.room_price <<endl;
          cout <<"Lunch Price: "<< h1.lunch_price <<endl;

          cout << endl;

        strcpy(h2.name,"White Rose");
        h2.room_price=1299;
        h2.lunch_price=620;

          cout <<"Hotel Name: "<<h2.name <<endl;
          cout <<"1Day Room Price: "<<h2.room_price <<endl;
          cout <<"Lunch Price: "<< h2.lunch_price <<endl;


        dog d1,d2,d3;
        
        strcpy(d1.name,"German Shepherd");
        d1.age=13;
        strcpy(d1.country,"Germany");
        strcpy(d1.breed,"working dog");
        strcpy(d1.gender,"Male");

        cout<<"Dog Name: "<<d1.name << endl;
        cout<<"Dog Age: "<<d1.age << endl;
        cout<<"Dog country of origin: "<<d1.country << endl;
        cout<<"Dog Breed: "<<d1.breed << endl;
        cout<<"Dog Gender: "<<d1.gender << endl;

        cout << endl;

        strcpy(d2.name,"Husky");
        d2.age=14;
        strcpy(d2.country,"Siberian");
        strcpy(d2.breed,"Working");
        strcpy(d2.gender,"Female");

        cout<<"Dog Name: "<<d2.name << endl;
        cout<<"Dog Age: "<<d2.age << endl;
        cout<<"Dog country of origin: "<<d2.country << endl;
        cout<<"Dog Breed: "<<d2.breed << endl;
        cout<<"Dog Gender: "<<d2.gender << endl;

        cout << endl;

        strcpy(d3.name,"Dobermann");
        d3.age=12;
        strcpy(d3.country,"Germany");
        strcpy(d3.breed,"Apolda Germany");
        strcpy(d3.gender,"Female");

        cout<<"Dog Name: "<<d3.name << endl;
        cout<<"Dog Age: "<<d3.age << endl;
        cout<<"Dog country of origin: "<<d3.country << endl;
        cout<<"Dog Breed: "<<d3.breed << endl;
        cout<<"Dog Gender: "<<d3.gender << endl;

        cout << endl;
         
       


    return 0;
}