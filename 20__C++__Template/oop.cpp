#include<iostream>
#include<string>
using namespace std;

template<typename T1, typename T2>

class MyClass{
    
    private:
    T1 num1;
    T2 num2;

    public:
    MyClass(T1 num1, T2 num2){
        this->num1 = num1;
        this->num2 = num2;
    }

    T2 sum(){
        return this->num1 + this->num2;
    }
};

int main(){

    MyClass <int, double>obj(5, 5.5);

    MyClass <string, string>obj2("Utsav", "Kalathiya");

    cout << obj.sum() << endl;
    cout << obj2.sum() << endl;

    return 0;
}