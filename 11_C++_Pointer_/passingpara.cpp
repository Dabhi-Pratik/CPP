#include<iostream>

using namespace std;

void square(int z){
    z =z*z;

    cout << z << endl;
}

void cube(int &n){
   n=n*n*n;

   cout<< n <<endl;
}

void fun(int arr[]){

    cout << arr << endl;
}

void fun_arr(int &arry){

    cout << &arry << endl;
}



int main(){
 
     // PASS BY VALUE

    int a=10;
    
    square(a);

    cout<<a<<endl;

    //arry

        int arr[3]={1,2,3};

         fun(arr);

         cout << arr << endl;

cout << "--------------" << endl;

    // PASS BY REFEREFCNE

    int n=10;
    int &ref=n;

    cube(n);

    cout<<n<<endl;
  
   //arry

        int arry[4]={1,2,3,4};

         fun_arr(*arry);

         cout << &arry << endl;
         
    return 0;
}