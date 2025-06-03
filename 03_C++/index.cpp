#include<iostream>

using namespace std;

int main(){

     cout <<"press 1 for Pizza "<< endl;
     cout <<"Press 2 for Pasta "<< endl;
     cout <<"Press 3 for Burger" << endl;
     cout <<"Press 4 for Sandwitch"<< endl;

    int a; 
    int b,c,d,e;
    
    cout << "Enter the Number Order: " ;
    cin >>a;

    if(a==1){
        cout << "You Order Pizza"<<endl;

     cout <<"press 1 for Chicago Style Pizza "<< endl;
     cout <<"Press 2 for Brick Oven Pizza"<< endl;
     cout <<"Press 3 for Italian Pizza" << endl;
     cout <<"Press 4 for Greek Pizza"<< endl;
     
   

    cout << "Enter the Number Order: " ;
    cin >> b;

      if(b==1){
          cout << "You Order Chicago Style Pizza"<<endl;
      }
      else if(b==2){
        cout << "You Order Brick Oven Pizza"<<endl;
      }
      else if(b==3){
        cout << "You Order Italian Pizza"<<endl;
      }
      else if(b==4){
        cout << "You Order Greek Pizza"<<endl;
      }
       else{
         cout << "Press Valid Order....!"<<endl;
    }


        
    }
    else if(a==2){
       cout << "You Order Pasta"<<endl;

     cout <<"press 1 for Spaghetti "<< endl;
     cout <<"Press 2 for Penne"<< endl;
     cout <<"Press 3 for Lasagne" << endl;
     cout <<"Press 4 for Ravioli"<< endl;
     
   

    cout << "Enter the Number Order: " ;
    cin >> c;

      if(c==1){
          cout << "You Order Spaghetti"<<endl;
      }
      else if(c==2){
        cout << "You Order Penne"<<endl;
      }
      else if(c==3){
        cout << "You Order Lasagne"<<endl;
      }
      else if(c==4){
        cout << "You Order Ravioli"<<endl;
      }
       else{
         cout << "Press Valid Order....!"<<endl;
    }

    }
    else if(a==3){
       cout << "You Order Burger"<<endl;

     cout <<"press 1 for Cheeseburger"<< endl;
     cout <<"Press 2 for Bacon Cheeseburger"<< endl;
     cout <<"Press 3 for Double Cheeseburger" << endl;
     cout <<"Press 4 for Spicy Burgers"<< endl;
     
   

    cout << "Enter the Number Order: " ;
    cin >> d;

      if(d==1){
          cout << "You Order Cheeseburger"<<endl;
      }
      else if(d==2){
        cout << "You Order Bacon Cheeseburger"<<endl;
      }
      else if(d==3){
        cout << "You Order Double Cheeseburger"<<endl;
      }
      else if(d==4){
        cout << "You Order Spicy Burgers"<<endl;
      }
       else{
         cout << "Press Valid Order....!"<<endl;
    }
    }

    else if(a==4){
       cout << "You Order Sandwitch"<<endl;

     cout <<"press 1 for Club sandwich"<< endl;
     cout <<"Press 2 for Cuban sandwich"<< endl;
     cout <<"Press 3 for Grilled cheese" << endl;
     cout <<"Press 4 for Reuben sandwich"<< endl;
     
   

    cout << "Enter the Number Order: " ;
    cin >> e;

      if(e==1){
          cout << "You Order Club sandwich"<<endl;
      }
      else if(e==2){
        cout << "You Order Cuban sandwich"<<endl;
      }
      else if(e==3){
        cout << "You Order Grilled cheese"<<endl;
      }
      else if(e==4){
        cout << "You Order Reuben sandwich"<<endl;
      }
       else{
         cout << "Press Valid Order....!"<<endl;
    }


    }

    else{
         cout << "Press Valid Order....!"<<endl;
    }



    return 0;
}