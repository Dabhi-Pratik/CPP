#include<iostream>
#include<string>

using namespace std;

template<typename T>

class Vector{

    private:

    int size;
    T *arr;

    public:
 
    Vector(){

        this->size = 0;
        arr = new T[100];
    }

    void puch(T ele){
        
        arr[this->size] = ele;
        this->size++;

    }

    void pop(){
        this->size--;
    }

    void length(){
          cout<<"Size Of Arry: "<<this->size<<endl;
    }

    void print(){
        for(int i=0; i<this->size; i++){
            cout<<arr[i]<<", ";
        }
        cout<<endl;
    }


};



int main(){

    Vector <int>arr;

    arr.puch(1);
    arr.puch(2);
    arr.puch(3);
    arr.puch(4);

   

    arr.print();
    arr.length(); 
    arr.pop();
    arr.print();

    cout<<"-------------------------"<<endl;

    Vector<char>str;

    str.puch('a');
    str.puch('b');
    str.puch('c');
    str.puch('d');

    str.print();
    str.length();
    arr.pop();
    arr.print();

    cout<<"-------------------------"<<endl;

    Vector<string>s1;

    s1.puch("Pratik");
    s1.puch("Utsav");
    s1.puch("Dharmik");
    s1.puch("Brij");
    s1.puch("Vaishali");

    s1.print();
    s1.length();
    s1.pop();
    s1.print();
    


    return 0;
}
