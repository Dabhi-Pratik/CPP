#include<iostream>

using namespace std;

int main(){
     int choice,pos,ele,size;

     cout <<"Size: ";
     cin >>size;

     int arr[100];

     for(int i=0; i<size; i++){
        cout<<"arr["<< i << "]: ";
        cin>>arr[i];
     }

     while( choice != 0){
         
    cout << "-------------------------" << endl;
    cout << "--> press 1 for insert" <<endl;
    cout << "--> press 2 for delete" <<endl;
    cout << "--> press 3 for update" <<endl;
    cout << "--> press 4 for read" <<endl;
    cout << "--> press 0 exit...!" <<endl;
       
      cout<<"Choice: ";
      cin>>choice;

      switch(choice){
        case 1:
           cout<<"postition: ";
           cin>>pos;

           cout<<"Element: ";
           cin>>ele;

           for(int i=size; i>pos; i--){
            arr[i]=arr[i-1];
           }
                
           arr[pos]=ele;
           size++;

        cout<<"ele insrted"<<endl;
        break;

        case 2:
           cout<<"postition: ";
           cin>>pos;

           for(int i=pos; i<size; i++){
               arr[i]=arr[i+1];
           }
           size--;  
        
        cout<<"ele delete"<<endl;
        break;

        case 3:
           cout<<"postition: ";
           cin>>pos;

           cout<<"Element: ";
           cin>>ele;

           arr[pos]=ele;
    
        cout<<"ele Update"<<endl;
        break;

        case 4:
        cout << "-------------------------" << endl;
            
        for(int i=0; i<size; i++){
            cout << arr[i]<<",";
        }

        cout<<endl;
      
        break;

        default:

        cout<<"Invalid input......!"<<endl;
      }

     }


    return 0;
}