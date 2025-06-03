#include<iostream>

using namespace std;

int main(){

    int a=10;
    int b=20;

    cout << (a < b) << endl;
    cout << (a > b) << endl;

    int x=200;
    int y=200;

     cout << (a==b && x==y) <<endl;
     cout << (a==b || x==y) <<endl;

     y +=x;

     cout << y << endl;

     y -=x;

     cout << y << endl;

     cout << sizeof(y)<< endl;

      x++;

      cout << x << endl;
     
      x--;

      cout << x <<endl;

      cout << x-- << endl;
      cout << --x << endl;

       x=200;

       cout << x++ <<endl;
       cout << ++ x<<endl;

       int z;

       cout << !z << endl;


  return 0;
}