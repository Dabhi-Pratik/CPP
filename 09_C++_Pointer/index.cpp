#include<iostream>
#include<stdio.h>

using namespace std;

int main(){


    int x=10;
    int y=20;
 
    int *p=&x;

    printf("%x",p);
    cout << endl;
    printf("%u",p);
    cout << endl;
    printf("%p",p);
    cout << endl;

    return 0;
}