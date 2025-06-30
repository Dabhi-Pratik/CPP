#include<iostream>
#include<string.h>

using namespace std;

class Bank{
    
    private:
    string email="pratik@gmail.com";
    string password="pratik123";
    string name="Dabhi Pratik";
    long long int phone=98745612;
    long long int accno=123456789;
    int balance=30000;
    int pin=2211;

    public:

   bool login(string email, string password){
        if(this->email==email && this->password==password){
            cout<<"You Log-In Successfully "<< endl;
            return true;
        }
        else{
            return false;
        }
   }

    void checkbalance(int pin){
        if(this->pin==pin){
            cout<<"Your Bank Balance is "<<this->balance<<endl;
        }else{
            cout<<"Invalid Your Pin............!"<<endl;
        }
    }

    void deposit(int amount,int pin){
        if(this->pin==pin){
            this->balance +=amount;
            cout<<"Your Amount Deposit Successfully.......!"<<endl;
            cout<<"Now your balance is "<<this->balance<<endl;
        }else{
            cout<<"Invalid Your Pin............!"<<endl;
        }
    }
    
    void withdrawal(int amount,int pin){
        if(this->pin==pin){
            if(amount > this->balance)
            {
                cout<<"Invalid Amount........!" ; 
            }else{
                this->balance -= amount;
                cout<<"Your Amount Withdrawal Successfully.......!"<<endl;
                cout<<"Now your balance is "<<this->balance<<endl;
            }
        }else{
            cout<<"Invalid Your Pin............!"<<endl;
        }
    }
   
     void profile(int pin){
        if(this->pin == pin){
            cout<<"Name: "<<this->name<<endl;
            cout<<"Email: "<<this->email<<endl;
            cout<<"Phone: "<<this->phone<<endl;
            cout<<"Account No: "<<this->accno<<endl;
            cout<<"Balance: "<<this->balance<<endl;
        }
     }

     void updateprofile(int pin){
        if(this->pin==pin){
            int npin,nphone;
            string nemail,npassword;

            cout<<"Enter a New Pin: ";
            cin>>npin;

            this->pin=npin;

            cout<<"Your Pin Successfully Update.......!"<<endl;

            cout<<"Enter a New Email: ";
            cin>>nemail;

            this->email=nemail;

            cout<<"Your Email Successfully Update.......!"<<endl;

            cout<<"Enter a New Password: ";
            cin>>npassword;

            this->password=npassword;

            cout<<"Your Password Successfully Update.......!"<<endl;

            cout<<"Enter a New Phone: ";
            cin>>nphone;

            this->phone=nphone;

            cout<<"Your Phone Successfully Update.......!"<<endl;

        }
     }
  

};


int main(){
   
     Bank sbi;

     int choice,pin,amount,account;
     string email,password;

     cout<<"Enter Your Email & Passworrd For Log-In"<<endl;

     cout<<"Enter Your Email: ";
     cin>>email;

     cout<<"Enter Password: ";
     cin>>password;

     if(sbi.login(email,password)){

        while(choice != 0 ){

            cout<<endl<<"-----------------------------------------------"<<endl;

              cout <<"Press 1 for Show Balance"<<endl;
              cout <<"Press 2 for case Deposit"<<endl;
              cout <<"Press 3 for case Withdrawal"<<endl;
              cout <<"Press 4 for get Profile"<<endl;
              cout <<"Press 5 for Update Profile"<<endl;
              cout<<"Press 0 for exit........"<<endl;

              cout<<"Enter Your choice: ";
              cin>>choice;

              switch(choice){

                case 1:
                     cout<<"Enter your Pin: ";
                     cin>>pin;

                     sbi.checkbalance(pin);
                     break;

                case 2:
                     cout<<"Enter Amount for Deposit: ";
                     cin>>amount;
                     cout<<"Enter your Pin: ";
                     cin>>pin;

                     sbi.deposit(amount,pin);
                     break;

                case 3:

                     cout<<"Enter Amount for Withdrawal: ";
                     cin>>amount;

                     cout<<"Enter your Pin: ";
                     cin>>pin;

                     sbi.withdrawal(amount,pin);
                     break;

                case 4:

                    cout<<"Enter your Pin: ";
                     cin>>pin;

                     sbi.profile(pin);
                     break;

                case 5:
                     cout<<"Enter your Old Pin: ";
                     cin>>pin;

                     sbi.updateprofile(pin);
                     break;
              }



        }
        cout<<"-----------------------------------------------"<<endl;
     }




    return 0;
}

