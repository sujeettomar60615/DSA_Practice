// 1. Book Allocation Problem
// 2. Painter Partirion Problem  ( SAME AS BOOK ALLOCATION PROBLEM )
//  [ Ditto Copy ] of 1st Question
// 3. Agrressive Cows Problem






// // 1. Book Allocation Problem

// #include<iostream>
// using namespace std;

// bool ispossible(int arr[], int n, int m, int mid){
//     int studentCount = 1;
//     int pageSum = 0;

//     for(int i=0; i<n; i++){
//         if(pageSum + arr[i] <= mid){
//             pageSum += arr[i];
//         }
//         else{
//             studentCount++;
//             if(studentCount > m || arr[i] > mid){
//                 return false;
//             }

//             pageSum = arr[i];
//         }
//     }

//     return true;
// }


// int allocateBooks(int arr[], int n, int m){
//     int s = 0;
//     int sum = 0;

//     for(int i=0; i<n; i++){
//         sum += arr[i];
//     }
//     int e = sum;
//     int ans = -1;
//     int mid = s + (e-s)/2;

//     while(s<=e){
//         if(ispossible(arr,n,m,mid)){
//             ans = mid;
//             e = mid - 1;
//         }
//         else{
//             s = mid + 1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }


// int main(){

//     int m;
//     cout<<"Enter the number of students : "<<endl;
//     cin>>m;

//     int n;  // size of array = number of chapters 
//     cout<<"Enter the size of array : "<<endl;
//     cin>>n;

//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     cout<<"Answer is "<<allocateBooks(arr,n,m)<<endl;
//     return 0;
// }








// 2. Painter Partirion Problem  ( SAME AS BOOK ALLOCATION PROBLEM )
//  [ Ditto Copy ] of 1st Question

// #include<iostream>
// using namespace std;

// bool ispossible(int arr[], int n, int m, int mid){
//     int studentCount = 1;
//     int pageSum = 0;

//     for(int i=0; i<n; i++){
//         if(pageSum + arr[i] <= mid){
//             pageSum += arr[i];
//         }
//         else{
//             studentCount++;
//             if(studentCount > m || arr[i] > mid){
//                 return false;
//             }

//             pageSum = arr[i];
//         }
//     }

//     return true;
// }


// int painterPartition(int arr[], int n, int m){
//     int s = 0;
//     int sum = 0;

//     for(int i=0; i<n; i++){
//         sum += arr[i];
//     }
//     int e = sum;
//     int ans = -1;
//     int mid = s + (e-s)/2;

//     while(s<=e){
//         if(ispossible(arr,n,m,mid)){
//             ans = mid;
//             e = mid - 1;
//         }
//         else{
//             s = mid + 1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }


// int main(){

//     int m;
//     cout<<"Enter the number of Painters : "<<endl;
//     cin>>m;

//     int n;  // size of array = number of chapters 
//     cout<<"Enter the size of array : "<<endl;
//     cin>>n;

//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     cout<<"Answer is "<<painterPartition(arr,n,m)<<endl;
//     return 0;
// }








// // 3. Agrressive Cows Problem
// bool isPossible(vector<int> &stalls, int k, int mid){
    
//     int cowCount = 1;
//     int lastPos = stalls[0];
    
//     for(int i=0; i<stalls.size(); i++){
        
//         if(stalls[i]-lastPos >= mid){
//             cowCount++;
//             if(cowCount == k){
//                 return true;
//             }
//             lastPos = stalls[i];
//         }
//     }
//     return false;
// }


// int aggressiveCows(vector<int> &stalls, int k)
// {
//     sort(stalls.begin(), stalls.end());
    
//     int s = 0;
//     int maxi = -1;
//     for(int i=0; i<stalls.size(); i++){
//         maxi = max(maxi, stalls[i]);
//     }
//     int e = maxi;
//     int ans = -1;
//     int mid = s + (e-s)/2;
    
//     while(s <= e){
//         if(isPossible(stalls, k, mid)){
//             ans = mid;
//             s = mid + 1;
//         }
//         else{
//             e = mid - 1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }
