#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
   
vector<int>arr{1,2,3,4,5};

arr.push_back(2);

arr.pop_back();

// arr.clear();


cout<<"Empty  :  "<<arr.empty()<<endl;
cout<<"at     :  "<<arr.at(2)<<endl;
cout<<"Front  :  "<<arr.front()<<endl;
cout<<"Back   :  "<<arr.back()<<endl;
cout<<"Size   :  "<<arr.size()<<endl;

arr.insert(arr.begin()+2, 5);
arr.erase(arr.begin()+1, arr.begin()+3);


for(int e: arr){
    cout<<e <<", ";
    
}


    return 0;
}
