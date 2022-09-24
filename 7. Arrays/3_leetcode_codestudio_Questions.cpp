// // 1. FIND UNIQUE ELEMENTS IN ARRAY
// // 2. FIND DUPLICATE ELEMENTS IN ARRAY
// // 3. FIND THE INTERSECTION OF TWO ARRAYS ( USE OF STL VECTORS )
// // 4. SORTING FOR (0, 1) CASE







// // 1. FIND UNIQUE ELEMENTS IN ARRAY
// // USE OF XOR(^) OPERATOR IS IMPORTANT AND WORKING OF XOR
// #include<iostream>
// using namespace std;

// int unique(int arr[], int n){ 
//     int ans = 0;
//     for(int i=0; i<n; i++){
//         ans = ans^arr[i];
//     }
//     return ans;
// }

// int main(){
//     int n; 
//     cout<<"Enter the size of array : "<<endl;
//     cin>>n;

//     if(n%2!=0){
//         int arr[n];
//         cout<<"Enter the elements of array : "<<endl;
//         for(int i=0; i<n; i++){
//             cin>>arr[i];
//         }
    
//         int answer = unique(arr,n);
//         cout<<"Unique element in array is "<<answer<<endl;
//     }
//     else{
//         cout<<"Enter the size of Array is ODD ! \n\nWE DO NOT WORK WITH EVEN ARRAY IN THIS PARTICULAR SCENARIO "<<endl;
//     }

//     return 0;
// }






// // 2. FIND DUPLICATE ELEMENTS IN ARRAY
// // USE OF XOR(^) OPERATOR IS IMPORTANT AND WORKING OF XOR
// #include<iostream>
// using namespace std;

// int duplicate_number(int arr[], int n){ 
//     int ans = 0;
//     for(int i=0; i<n; i++){
//         // important
//         ans = ans^arr[i];
//     }

//     for(int i=0; i<n; i++){
//         // important
//         ans = ans^i;
//     }

//     return ans;
// }

// int main(){
//     int n; 
//     cout<<"Enter the size of array : "<<endl;
//     cin>>n;

//     int arr[n];
//     // ELEMENYS OF ARRAY LIE BETWEEN 1 TO N-1
//     cout<<"Enter the elements of array : "<<endl;
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     int answer = duplicate_number(arr,n);
//     cout<<"Duplicate element in array is "<<answer<<endl;

//     return 0;
// }



 


// // 3. FIND THE INTERSECTION OF TWO ARRAYS ( USE OF STL VECTORS )
// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
// {
// 	int i=0, j=0;
//     vector<int> ans;
//     while(i<n && j<m){
//         if(arr1[i] == arr2[j]){
//             ans.push_back(arr1[i]);
//             i++;
//             j++;
//         }
        
//         else if(arr1[i] < arr2[j]){
//             i++;
//         }
       
//         else{
//             j++;
//         }
//     }
//     return ans;
// }










// // 4. SORTING FOR (0, 1) CASE
// #include<iostream>
// using namespace std; 

// void sortOne(int arr[], int n){
//     int start = 0;
//     int end = n-1;
//     while(start < end){

//         while(arr[start] == 0){
//             start++;
//         }
//         while(arr[end] == 1){
//             end--;
//         }

//         if(arr[start] == 1 && arr[end] == 0){
//             swap(arr[start], arr[end]);
//             start++;
//             end--;
//         }
//     }
// }

// int main(){
//     int arr[8] = {1,1,0,1,0,0,1,0};

//     sortOne(arr,8);
    
//     for(int i=0; i<8; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }