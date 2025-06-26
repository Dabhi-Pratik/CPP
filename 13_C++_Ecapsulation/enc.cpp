#include<iostream>
#include<string>

using namespace std;

class st{

    private:

    int price;
    float rate;

    public:

    void setter(int price, float rate){
        this->price=price;
        this->rate=rate;
    }

    void getter(){
        cout<<"Price: "<<this->price<<endl;
        cout<<"Rate: "<<this->rate<<endl;
    }
};

int main(){

    st s1,s2,s3;

    int price;
    float rate;

    cout <<"Enter Price: ";
    cin>>price;

    cout <<"Enter Rate: ";
    cin>>rate;


//     s1.price=100;
//     s1.rate=3.1;

//    cout <<"Price: "<<s1.price <<endl;
//    cout <<"Rate: "<<s1.rate <<endl;

      s1.setter(price,rate);
      s1.getter();

    cout<<"----------------------------------------------"<<endl;

    cout <<"Enter Price: ";
    cin>>price;

    cout <<"Enter Rate: ";
    cin>>rate;

      s2.setter(price,rate);
      s2.getter();


    cout<<"----------------------------------------------"<<endl;

    cout <<"Enter Price: ";
    cin>>price;

    cout <<"Enter Rate: ";
    cin>>rate;

      s3.setter(price,rate);
      s3.getter();
   

  


    return 0;
}