#include<iostream>
#include<string>

using namespace std;

class student{
   
     public:

     string name;
     string course;

     student(string name, string course){
           
        this->name = name;
        this->course = course;
  
     }

     student(student &std){
         
         this->name=std.name;
         this->course=std.course;
         
     }



};

int main(){

    student std1("Pratik","DSA"),std2(std1),std3("Utsav","FSD"),std4(std3),std5("Dharmik","FSD"),std6(std5),std7("Vaishali","FRONTEDND"),std8(std7),std9("Brij","FSD"),std10(std9);

    cout<<"STD-1 Name: "<<std1.name<<endl;
    cout<<"STD-1 Course: "<<std1.course<<endl;


    cout<<endl<<"STD-2 Name: "<<std2.name<<endl;
    cout<<"STD-2 Course: "<<std2.course<<endl;

    cout<<endl<<"STD-3 Name: "<<std3.name<<endl;
    cout<<"STD-3 Course: "<<std3.course<<endl;


    cout<<endl<<"STD-4 Name: "<<std4.name<<endl;
    cout<<"STD-4 Course: "<<std4.course<<endl;

    cout<<endl<<"STD-5 Name: "<<std5.name<<endl;
    cout<<"STD-5 Course: "<<std5.course<<endl;


    cout<<endl<<"STD-6 Name: "<<std6.name<<endl;
    cout<<"STD-6 Course: "<<std6.course<<endl;

    cout<<endl<<"STD-7 Name: "<<std7.name<<endl;
    cout<<"STD-7 Course: "<<std7.course<<endl;


    cout<<endl<<"STD-8 Name: "<<std8.name<<endl;
    cout<<"STD-8 Course: "<<std8.course<<endl;

    cout<<endl<<"STD-9 Name: "<<std9.name<<endl;
    cout<<"STD-9 Course: "<<std9.course<<endl;


    cout<<endl<<"STD-10 Name: "<<std10.name<<endl;
    cout<<"STD-10 Course: "<<std10.course<<endl;
   
 
    return 0;
}
