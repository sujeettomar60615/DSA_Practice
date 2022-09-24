// 1. Creation of 2D Array 






// 1. Creation of 2D Array 
#include<iostream>
using namespace std;
int main(){

    int row, col;
    cin>>row;


    // Creation of 2D Array
    int ** arr = new int*[row];
    for(int i=0; i<row; i++){
        cin>>col;
        arr[i] = new int[col];
    }

    
    // Taking Input
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }
  

    // Printing Output
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }



    // Releasing Memory
    for(int i=0; i<row; i++){
        delete [] arr[i];
    }

    delete []arr;

    // how to create a 2D array dynamically
    // input/output
    // memory free kaise karani hai

    return 0;
}