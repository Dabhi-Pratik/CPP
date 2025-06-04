#include<iostream>

using namespace std;

 int main(){

    int choice,type;

    cout << "Press 1 for Pizaa"<< endl;
    cout << "Press 2 for Pasta"<< endl;
    cout << "Press 3 for Burger"<< endl;
    cout << "Press 4 for Sandwitch"<<endl;

    cout << "Enter Your Choice: ";
    cin >>choice;

    switch(choice){

        case 1: cout << "Select Pizza Type"<<endl;
          cout << "Press 1 for Chicago Style Pizza"<< endl;
          cout << "Press 2 for Brick Oven Pizza"<< endl;
          cout << "Press 3 for Italian Pizza"<< endl;
          cout << "Press 4 for Sandwitch"<<endl;
         
        cout << "Enter Your Pizza Type: ";
        cin >>type;

       switch( type){
        case 1: cout<<"You Order Chicago Style Pizza"<<endl;
           break;

        case 2: cout<<"You Order Brick Oven Pizza"<<endl;
           break;

        case 3: cout<<"You Order Italian Pizza"<<endl;
           break;

        case 4: cout<<"You Order Greek Pizza"<<endl;
           break;
        default:cout<<"Order Valid Type of Pizza"<<endl;

       }
         
       break;

        case 2: cout << "Select Pasta Type"<<endl;
          cout << "Press 1 for Spaghetti "<< endl;
          cout << "Press 2 for Penne"<< endl;
          cout << "Press 3 for Lasagne"<< endl;
          cout << "Press 4 for Sandwitch"<<endl;
         
        cout << "Enter Your Pasta Type: ";
        cin >>type;

       switch( type){
        case 1: cout<<"You Order Spaghetti"<<endl;
           break;

        case 2: cout<<"You Order Penne"<<endl;
           break;

        case 3: cout<<"You Order Lasagne"<<endl;
           break;

        case 4: cout<<"You Order Ravioli"<<endl;
           break;
        default:cout<<"Order Valid Type of Pasta"<<endl;

       }
         
       break;

        case 3: cout << "Select Burger Type"<<endl;
          cout << "Press 1 for  Cheeseburger"<< endl;
          cout << "Press 2 for Bacon Cheeseburger"<< endl;
          cout << "Press 3 for Italian Pizza"<< endl;
          cout << "Press 4 for Spicy Burgers"<<endl;
         
        cout << "Enter Your Burger Type: ";
        cin >>type;

       switch( type){
        case 1: cout<<"You Order  Cheeseburger"<<endl;
           break;

        case 2: cout<<"You Order Bacon Cheeseburger"<<endl;
           break;

        case 3: cout<<"You Order Double Cheeseburger"<<endl;
           break;

        case 4: cout<<"You Order Spicy Burgers"<<endl;
           break;
        default:cout<<"Order Valid Type of Burger"<<endl;

       }
         
       break;

        case 4: cout << "Select Sandwitch Type"<<endl;
          cout << "Press 1 for Club sandwich"<< endl;
          cout << "Press 2 for Cuban sandwich"<< endl;
          cout << "Press 3 for Grilled cheese"<< endl;
          cout << "Press 4 for Reuben sandwich"<<endl;
         
        cout << "Enter Your Sandwitch Type: ";
        cin >>type;

       switch( type){
        case 1: cout<<"You Order Club sandwich"<<endl;
           break;

        case 2: cout<<"You Order Cuban sandwich"<<endl;
           break;

        case 3: cout<<"You Order Grilled cheese"<<endl;
           break;

        case 4: cout<<"You Order Reuben sandwich"<<endl;
           break;
        default:cout<<"Order Valid Type of Sandwitch"<<endl;

       }
         
       break;
           
    }

 }