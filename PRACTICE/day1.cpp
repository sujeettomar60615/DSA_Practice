// // 1. First and Last Occurence of k
// #include<iostream>
// using namespace std;

// int firstOcc(int arr[],int n, int k){
//     int start=0, end=n-1;
//     int mid = start + (end-start)/2;
//     int ans = 0;
//     while(start <= end){
//         if(arr[mid] == k){
//             ans = mid;
//             end = mid - 1;
//         }
//         else if(arr[mid] > k){
//             end = mid - 1;
//         }
//         else{
//             start = mid + 1;
//         }

//         mid = start + (end-start)/2;
//     }
//     return ans;
// }

// int lastOcc(int arr[],int n, int k){
//     int start=0, end=n-1;
//     int mid = start + (end-start)/2;
//     int ans = 0;
//     while(start <= end){
//         if(arr[mid] == k){
//             ans = mid;
//             start = mid + 1;
//         }
//         else if(arr[mid] > k){
//             end = mid - 1;
//         }
//         else{
//             start = mid + 1;
//         }

//         mid = start + (end-start)/2;
//     }
//     return ans;
// }

// //for count the number of 5
// int getCount(int first, int last){
//     int ans = (last - first) + 1;
//     return ans;
// }

// int main(){
//     int n = 10;
//     int arr[10] = {1,2,3,5,5,5,5,67,123,125};
    
//     int firstOccurence = firstOcc(arr,10,5);
//     int lastOccurence = lastOcc(arr,10,5);

//     cout<<"First Occurence is "<<firstOccurence<<endl;
//     cout<<"Last Occurence is "<<lastOccurence<<endl;
//     cout<<"Count of 5 : "<<getCount(firstOccurence, lastOccurence)<<endl;
//     return 0;
// }

