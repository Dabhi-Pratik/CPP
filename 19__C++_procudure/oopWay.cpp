#include<iostream>

using namespace std;

class Myclass{
       
    private:
    int size;
    int *arr;

    public:

    Myclass(int size){
         this->size=size;
         
         arr = new int[this->size];

         if(arr == NULL){
            cout<<"Memory Allocaltion Faild....!"<<endl;
         }
         else{
            cout<<"Memory Allocation Successfully...!"<<endl;
         }


    }

    void addele(int index, int element){

        if(index>=0 && index < this->size){
            arr[index] = element;

            cout<<arr[index]<<endl;
        }
        else{
            cout<<" Error: index is out of bound...!"<<endl;
        }
    }

    ~Myclass(){
         delete[] arr;
         arr = NULL;

         if(arr == NULL){
               cout<<"Memory Deallocation Successy.....!"<<endl;
         }
         else{
            cout<<"Memory Deallocation Faild.....!"<<endl;
         }
    }


     
};


int main(){

    int size;

    cout<<"Enter Size: ";
    cin>>size;


    Myclass obj(size);

    int index,ele;

    cout<<"Enter Index: ";
    cin>>index;

    cout<<"Enter Index Element: ";
    cin>>ele;

    obj.addele(index,ele);


    return 0;
}