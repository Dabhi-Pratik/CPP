#include<iostream>
#include<string>

using namespace std;

class Person{


};

class Student:public Person{


};

class Employ:public Person{


};

class Prattime:public Student , public Employ{


};

int main(){


    return 0;
}