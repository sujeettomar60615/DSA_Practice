// DEFAULT ARGUMENT
//  START is a default argument in this program 
// if start is given by the user then array print with start
// if start is not given by the user then array print with 0 index
#include<iostream>
using namespace std;

void print(int arr[], int n, int start=0){

    for(int i=start; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int size = 5;
    int arr[5] = {1,2,3,4,5};
    print(arr,size);
    cout<<endl;
    print(arr,size,3);
    return 0;
}