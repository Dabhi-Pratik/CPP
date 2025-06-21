#include<iostream>

using namespace std;

int avg(int sum, int size){
    int avg=sum/size;

    return avg;
}


int sum(int arr[],int size){
    int sum=0;

    for(int i=0; i<size; i++){
        sum +=arr[i];
    }

    return avg(sum,size);
}

int main(){

    int x=10;
    int y=20;

    int arr[5]={1, 2, 3, 4, 5};

    cout << sum(arr,5);

    return 0;
}