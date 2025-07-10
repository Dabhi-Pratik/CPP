#include<iostream>
#include<vector>

using namespace std;


int main(){

    vector <vector<int>>arr;

    int n;

    cout<<"n: ";
    cin>>n;

    for(int i=0; i<n; i++){
        vector<int>temp;
        for(int j=0; j<n; j++){
            int a;

            cin>>a;

            temp.push_back(a);
        }

        arr.push_back(temp);
    }

       for(vector<int> ele: arr){
        for(int e: ele){
            cout << e << ", ";
        }
        cout << endl;
    }


    return 0;
}