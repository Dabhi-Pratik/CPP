#include<iostream>
using namespace std;


 int main(){

    int r, c;

    cout << "Row: ";
    cin >> r;
    cout << "Col: ";
    cin >> c;


    for(int i=1; i<=r; i++) 
    {
        for(int j=1; j<=c; j++) 
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    cout << "------------------------------------" <<endl;

    for(int i=1; i<=r; i++) 
    {
        for(int j=1; j<=c; j++) 
        {
            cout << j << " ";
        }
        cout << endl;
    }

     cout << "------------------------------------" <<endl;

     for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            cout<<i<<" ";
        }
        cout<<endl;
     }

      cout << "------------------------------------" <<endl;

      for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
      }

    return 0;
 }