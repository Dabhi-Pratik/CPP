#include<iostream>
#include<stdio.h>

using namespace std;

int main(){

  int arr[4]={3, 4, 5, 6};

  int *a=arr;
  int *a1=&arr[0];

  int *ptr[4];


  for(int i=0; i<4; i++)
  {
    // cout << &arr[i] << endl;
    printf("%u",&arr[i]);
    cout << endl;
  }

  for(int i=0; i<4; i++){
      ptr[i]=&arr[i];
  }

    for(int i=0; i<4; i++){
        cout << ptr[i] << ":" << *ptr[i] << endl;
    }


    cout << "Address or arr: "<< a << endl;
    cout << "Address or arr[0]: "<< a1 << endl;




    return 0;
}