#include<iostream>
#include<vector>

using namespace std;


int main(){
     
     vector<int>arr={1,2,3,4,5,6,7,8};

     for(int i=1; i<arr.size()-1; i++){

        if(arr[i-1] > arr[i] && arr[i] < arr[i+1]){
            
        }
     }

    return 0;
}