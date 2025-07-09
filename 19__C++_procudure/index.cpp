#include<iostream>

using namespace std;


int main(){

    int size;
    int *arr;

    arr = new int[size];

    if(arr == NULL){
        cout<<"Memory Allocation is Faild.....!"<<endl;
    }
    else{
        cout<<"Memory Allocated Successfully.....!"<<endl;
    }

    arr[0]=12;
    cout<< arr[0] << endl;

    int *newArr = arr;

    arr=NULL;


    if(arr == NULL){
        cout <<"Memory Dellocated Successfully...!"<<endl;
    }else{
        cout<<"Memory Deallocted faild....!"<<endl;
    }



    return 0;
}