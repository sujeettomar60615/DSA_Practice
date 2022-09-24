// ---------------------------------  NOTES  ------------------------------------
// 1.
// IF ARRAY KA SIZE JYADA HAI OR ARRAY ME KAM VALUES DALOGE TO BAKI ELEMENTS 0 HO JAYENGE
// ARR[15] = {2,7}
// ARR = {2 7 0 0 0 0 0 0 0 0 0 0 0 0 0 0}

// 2.
// INITIALIZING ALL LOCATIONS WITH 0
// ARR[10] = {0}






// 1. MAXIMUM & MINIMUM ELEMENT
// 2. SUM OF ALL ELEMENTS IN ARRAY
// 3. LINEAR SEARCH IN ARRAY
// 4. REVERSE OF ARRAY
// 5. SWAP ALTERNATE ELEMENTS IN ARRAY







// // 1. MAXIMUM & MINIMUM ELEMENT
// #include<iostream>
// using namespace std;

// int maximum(int arr[], int n){
//     int maxi = INT8_MIN;
//     for(int i=0; i<n; i++){
//         // if(arr[i]>maxi){
//         //     maxi = arr[i];
//         // }
//         maxi = max(maxi,arr[i]);
//     }
//     return maxi;
// }

// int minimum(int arr[], int n){
//     int mini = INT8_MAX;
//     for(int i=0; i<n; i++){
//         // if(arr[i]<mini){
//         //     mini = arr[i];
//         // }
//         mini = min(mini,arr[i]);
//     }
//     return mini;
// }

// int main(){
//     int n;
//     cout<<"Enter the size of array : "<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of array : "<<endl;
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     cout<<"Maximum value : "<<maximum(arr,n)<<endl;
//     cout<<"Minimum value : "<<minimum(arr,n)<<endl;
//     return 0;
// }






// // 2. SUM OF ALL ELEMENTS IN ARRAY 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of array : "<<endl;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     int sum = 0;
//     for(int i=0; i<n; i++){
//         sum += arr[i];
//     }
//     cout<<"Sum of all elements of array is : "<<sum<<endl;
//     return 0;
// }






// // 3. LINEAR SEARCH IN ARRAY
// #include<iostream>
// using namespace std;

// bool linearSearch(int arr[], int n, int key){
//     for(int i=0; i<n; i++){
//         if(key == arr[i]){
//             return true;
//         }
//     }
//     return false;
// }

// int main(){
//     int n;
//     cout<<"Enter the size of an array : "<<endl;
//     cin>>n;

//     int arr[n];
//     cout<<"Enter the elements of Array : "<<endl;
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     int key;
//     cout<<"Enter the key : "<<endl;
//     cin>>key;

//     bool found = linearSearch(arr,n,key);
//     if(found){
//         cout<<"Key is Present"<<endl;
//     }
//     else{
//         cout<<"Key is Absent"<<endl;
//     }
 
//     return 0;
// }






// // 4. REVERSE OF ARRAY
// #include<iostream>
// using namespace std;

// void reverse(int arr[], int n){
//     int start = 0;
//     int end = n-1;
//     for(int i=0; i<n/2; i++){
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// }

// int main(){
    // int n; 
    // cout<<"Enter the size of array : "<<endl;
    // cin>>n;
    // int arr[n];
    // cout<<"Enter the elements of array : "<<endl;
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }

//     reverse(arr,n);

    // // for printing the reversed array
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
//     return 0;
// }





// // 5. SWAP ALTERNATE ELEMENTS IN ARRAY
// #include<iostream>
// using namespace std;

// void swap(int arr[], int n){
//     for(int i=0; i<n-1; i+=2){
//         // if(i+1<n){
//         //     // int temp = arr[i];
//         //     // arr[i] = arr[i + 1];
//         //     // arr[i + 1] = temp;
//         //     swap(arr[i], arr[i+1]);
//         // }
//         swap(arr[i], arr[i+1]);

//     }
// }

// int main(){
//     int n; 
//     cout<<"Enter the size of array : "<<endl;
//     cin>>n;

//     int arr[n];
//     cout<<"Enter the elements of array : "<<endl;
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     swap(arr,n);

//     // for printing the swapped array
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }







