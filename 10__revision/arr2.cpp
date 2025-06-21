#include<iostream>

using namespace std;

void two_sum(){

    int r,c;

    cout<<"Enter Row: ";
    cin>>r;

    cout<<"Enter Col: ";
    cin>>c;

    int a[r][c];
    int b[r][c];
    int s[r][c];

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<"a["<<i<<"]["<<j<<"]: ";
            cin >> a[i][j];
        }
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<"b["<<i<<"]["<<j<<"]: ";
            cin >> b[i][j];
        }
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            s[i][j]= a[i][j] + b[i][j];

           cout << s[i][j]<<" ";
        }
        cout<<endl;
    }





}

void boundary(){
    int n = 6;
    int arr[n][n] = {
                        {10, 11, 12, 13, 14, 15}, // 0
                        {16, 17, 18, 19, 20, 21}, // 1
                        {22, 23, 24, 25, 26, 27}, // 2
                        {28, 29, 30, 31, 32, 33}, // 3
                        {34, 35, 36, 37, 38, 39}, // 4
                        {40, 41, 42, 43, 44, 45}  // 5
                    };
                     //   0   1   2   3   4   5
      
         for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==0 || j==0 || j==n-1 || i==n-1){
                    cout << arr[i][j] <<" ";
                }
                else{
                    cout<<"  "<<" ";
                }
            }
            cout<<endl;
         }  
         
         

}

void diagonal(){
    int n = 6;
    int arr[n][n] = {
                        {10, 11, 12, 13, 14, 15}, // 0
                        {16, 17, 18, 19, 20, 21}, // 1
                        {22, 23, 24, 25, 26, 27}, // 2
                        {28, 29, 30, 31, 32, 33}, // 3
                        {34, 35, 36, 37, 38, 39}, // 4
                        {40, 41, 42, 43, 44, 45}  // 5
                    };
                     //   0   1   2   3   4   5
      
         for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==j || i+j==n-1){
                    cout << arr[i][j] <<" ";
                }
                else{
                    cout<<"  "<<" ";
                }
            }
            cout<<endl;
         }  
}

void row_sum(){
     int n = 6;
     int row;
     int col;
    int arr[n][n] = {
                        {10, 11, 12, 13, 14, 15}, // 0
                        {16, 17, 18, 19, 20, 21}, // 1
                        {22, 23, 24, 25, 26, 27}, // 2
                        {28, 29, 30, 31, 32, 33}, // 3
                        {34, 35, 36, 37, 38, 39}, // 4
                        {40, 41, 42, 43, 44, 45}  // 5
                    };
                     //   0   1   2   3   4   5

       cout <<"Enter Row: ";
       cin>>row;
       int sum=0;
       
       cout<<"Row"<<row<<":";

       for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == row){
                sum += arr[i][j];
                cout << arr[i][j]<<" ";
            }
        }
       }

       cout << endl <<  "Row" <<row <<": " << sum << endl;
 
         cout << endl;

       cout <<"Enter Col: ";
       cin>>col;
       sum=0;
       
       cout<<"Col"<<col<<":";

       for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == col){
                sum += arr[i][j];
                cout << arr[i][j]<<" ";
            }
        }
       }

       cout << endl <<  "Col" <<row <<": " << sum << endl;
      
      
}

int main(){
   
    //  two_sum();

    //  boundary();

    //  diagonal();

    row_sum();


    return 0;
}