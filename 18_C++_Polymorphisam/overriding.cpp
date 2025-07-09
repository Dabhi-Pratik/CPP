#include<iostream>
using namespace std;


class Object{

    public:


    void show(int days, string data){
        cout << "Showing " << days  <<" days, " << data <<" Data" << endl;
    }
};

class MediumObj : public Object{
     
    public:

    void show(int days, string data){
        cout << "Showing " << days  <<" days, " << data <<" Data" << endl;
    }

};

class SmallObj :  public Object{
     
    public:

    void show(int days, string data){
        cout << "Showing " << days  <<" days, " << data <<" Data" << endl;
    }

};



 int main(){

    Object obj1;
    MediumObj mobj1;
    SmallObj sobj1;

    obj1.show(10,"BULK");
    mobj1.show(20,"HUGE");
    sobj1.show(50, "LARGE");
    
    

    return 0;
 }