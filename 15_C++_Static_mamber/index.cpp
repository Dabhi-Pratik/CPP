#include<iostream>
#include<string>

using namespace std;

class student{

    private:
      
      static string code;

    
    public:

    int roll;
    string name;
    static string cource;

    static void mycode(string c){
        code=c;
    }

    static void getmycode(){
        cout<<code<<endl;
    }

};

  string student::cource="fsd";

  string student::code="";

int main(){

    student std1,std2;


    std1.roll=145;
    std1.name="Pratik";

   cout<<"Student-1 Roll No. : "<<std1.roll<<endl;
   cout<<"Student-1 Name : "<<std1.name<<endl;
   cout<<"Student-1 Cource Name : "<<std1.cource<<endl;

   cout<<"--------------------------"<<endl;


    std2.roll=251;
    std2.name="Utsav";

   cout<<"Studdent-2 Roll No. : "<<std2.roll<<endl;
   cout<<"Studdent-2 Name :  "<<std2.name<<endl;
   cout<<"Studdent-2 Cource Name : "<<std2.cource<<endl;

     student::mycode("RWBN1");

     student::getmycode();




    return 0;
}


