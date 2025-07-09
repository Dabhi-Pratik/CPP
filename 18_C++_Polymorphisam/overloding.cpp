#include<iostream>
#include<string>

using namespace std;

class Object{
  public:

 void show(){
    cout<<"Showing data"<<endl;
 }

 void show(int n){
    cout<<"Showing "<< n <<" data "<<endl;
 }

 void show(int n,int num){
    cout<<"Showing "<< n <<" Days "<< num <<" data "<< endl;
 }

};

int main(){

    Object obj1;

    obj1.show();
    obj1.show(10);
    obj1.show(10 ,2000);
    



    return 0;
}