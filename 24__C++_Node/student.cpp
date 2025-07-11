#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Std{
     
    public:

    int id;
    string name;
   
    Std(int id , string name){
        this->id=id;
        this->name=name;
    }

};


class List{
    public:
      
    vector<Std>list;

    List(){

    }

    void addStudent(int id, string name){
          Std s(id ,name);

          this->list.push_back(s);
              
    }

    void updatestudent(int id, string name ){
          
        for(Std &e : list){
            if(e.id == id){
                e.name = name;
            }
        }
    }

    void showAll(){
        for(Std e : list){
          cout << e.id << ", " <<e.name <<endl;
        }
    }

};

int main(){ 

    List list;

    list.addStudent(1111,"Utsav");
    list.addStudent(2222,"Pratik");
    list.addStudent(3333,"Dharmik");
    list.addStudent(4444,"Vaishali");
    list.addStudent(5555,"Brij");


    list.showAll();

    list.updatestudent(124,"Umang");
    list.updatestudent(124,"Amit"); 





    return 0;
}