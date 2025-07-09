#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
   
    vector<int>arr;
    arr={1,2,3,4,5,6};


    vector<char>str(5,'A');
    vector<int>num{1,2,3,4,5,6,7};


    for(int e : arr){
        cout<<e<<", ";
    }

    cout<<endl;

    for(char e : str){
        cout<<e<<", ";
    }

    cout<<endl;

    for(int e : num){
        cout<<e<<", ";
    }

    cout<<endl;






    return 0;
}
