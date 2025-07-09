#include<iostream>

using namespace std;

 template<typename T>

   T sum(T x, T y){
     return x + y;
   }
 
int main(){

    int a,b;

    cout<<"Enter A: ";
    cin>>a;

    cout<<"Enter B: ";
    cin>>b;

     cout << sum<int>(a,b) <<endl;
     cout << sum<float>(a,b) <<endl;
    

    return 0;
}