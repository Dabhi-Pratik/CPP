#include<iostream>

using namespace std;

int main(){

    int choice;

    while( choice != 0){
      
        cout<<"---------------------------"<<endl;
        cout<<"Press 1 for Pizza"<<endl;
        cout<<"Press 2 for Burger"<<endl;
        cout<<"Press 3 for Pasta"<<endl;
        cout<<"Press 4 for Sandwitch"<<endl;
        cout<<"---------------------------"<<endl;

        cout<<"Choice: ";
        cin >> choice;

        switch(choice){
            case 1: cout<<"You orderd Pizaa"<<endl;

                  cout<<"Press 1 for Chicago Style Pizza"<<endl;
                  cout<<"Press 2 for Italian Pizza"<<endl;
                  cout<<"Press 3 for California Pizza"<<endl;
                  cout<<"Press 4 for Greek Pizza"<<endl;

                  cout<<"Choice: ";
                  cin>>choice;

                  if(choice == 1){
                    cout<<"You orderd Chicago Style Pizza"<<endl;
                  }

                  else if(choice == 2){
                    cout<<"You Italian Pizza"<<endl;
                  }

                  else if(choice == 3){
                    cout<<"You orderd California Pizza"<<endl;
                  }

                  else if(choice == 4){
                    cout<<"You orderd Greek Pizza"<<endl;
                  }

                  else{
                    cout<<"Your order is not in list........!";
                  }

            break;

            case 2: cout<<"You orderd Burger"<<endl;

                  cout<<"Press 1 for Turkey Burger"<<endl;
                  cout<<"Press 2 for Black Bean Burger"<<endl;
                  cout<<"Press 3 for Salmon Burger"<<endl;
                  cout<<"Press 4 for Smash Burger"<<endl;

                  cout<<"Choice: ";
                  cin>>choice;

                  if(choice == 1){
                    cout<<"You orderd Turkey Burger"<<endl;
                  }

                  else if(choice == 2){
                    cout<<"You orderd Black Bean Burger"<<endl;
                  }

                  else if(choice == 3){
                    cout<<"You orderd Salmon Burger"<<endl;
                  }

                  else if(choice == 4){
                    cout<<"You orderd Smash Burger"<<endl;
                  }

                  else{
                    cout<<"Your order is not in list........!";
                  }
            break;

            case 3: cout<<"You orderd Pasta";

                  cout<<"Press 1 for Angel Hair Pasta"<<endl;
                  cout<<"Press 2 for  Bow Tie Pasta (Farfalle)"<<endl;
                  cout<<"Press 3 for Bucatini Pasta"<<endl;
                  cout<<"Press 4 for Ditalini Pasta"<<endl;

                  cout<<"Choice: ";
                  cin>>choice;

                  if(choice == 1){
                    cout<<"You orderd Angel Hair Pasta"<<endl;
                  }

                  else if(choice == 2){
                    cout<<"You orderd  Bow Tie Pasta (Farfalle)"<<endl;
                  }

                  else if(choice == 3){
                    cout<<"You orderd Bucatini Pasta"<<endl;
                  }

                  else if(choice == 4){
                    cout<<"You orderd Ditalini Pasta"<<endl;
                  }

                  else{
                    cout<<"Your order is not in list........!";
                  }
            break;

            case 4: cout<<"You orderd Sandwich";

                  cout<<"Press 1 for Grilled cheese Sandwich"<<endl;
                  cout<<"Press 2 for Cheesesteak Sandwich"<<endl;
                  cout<<"Press 3 for Club sandwich Sandwich"<<endl;
                  cout<<"Press 4 for Reuben sandwich Sandwich"<<endl;

                  cout<<"Choice: ";
                  cin>>choice;

                  if(choice == 1){
                    cout<<"You orderd Grilled cheese Sandwich"<<endl;
                  }

                  else if(choice == 2){
                    cout<<"You orderd Cheesesteak Sandwich"<<endl;
                  }

                  else if(choice == 3){
                    cout<<"You orderd Club sandwich Sandwich"<<endl;
                  }

                  else if(choice == 4){
                    cout<<"You orderd Reuben sandwich Sandwich"<<endl;
                  }

                  else{
                    cout<<"Your order is not in list........!";
                  }

            break;

            default:
                cout<<"Enter Valid Choice...............!";

        }
        
    }

    return 0;
}