#include<iostream>

using namespace std;

int main(){

    int a,b,c;

    cout << "Enter The Value of A: ";
    cin>>a;

    cout << "Enter The Value of B: ";
    cin>>b;

    cout << "Enter The Value of C: ";
    cin>>c;

    if(a>b && a>c){
        cout << "A is Bigger"<<endl;
    }

    else if(b>a && b>c){
        cout << "B is Bigger"<<endl;
    }

    else{
        cout << "C is Bigger";
    }
}