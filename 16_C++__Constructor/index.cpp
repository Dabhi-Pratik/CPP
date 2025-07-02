#include<iostream>
#include<string>

using namespace std;

class object{
   
      private:
        
     int grid;
      string name;
      string course;

      public:
 
      //constructor      

      object(){
         
          this->grid = 111;
          this->name="--";
          this->course="--";
      }

      object(int id){
        this->grid=id;
        this->name="-";
        this->course="-";
          
      }

      void setData(string name, string course){
              this->name=name;
              this->course=course;

      }

      void getData(){

         cout<<endl<<" Name: "<<this->name<<endl;
         cout<<" Course: "<<this->course<<endl;
         cout<<" Grid: "<<this->grid<<endl;

      }

};


int main(){

    object obj1,obj2,obj3(222),obj4(333);

        //   obj1.name="Pratik";

        obj1.setData("Pratik","FSD");
        obj1.getData();
        obj2.getData();
        obj3.getData();
        obj4.getData();



    return 0;
}