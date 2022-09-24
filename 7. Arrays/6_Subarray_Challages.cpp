// // QUESTION - 1  [PRINT ALL POSSIBLE SUBARRAYS]
// // QUESTION - 2  [ 1st METHOD  MAXIMUM SUBARRAY SUM]
// // QUESTION - 2  [ 2nd METHOD  (CUMULATIVE SUM APPROACH) or (Prefix Sum Technique)]
// // QUESTION - 2  [ 3rd METHOD (Kadane's Algorithm)]
// // QUESTION - 3  [ Maximum Circular Subarray Sum ]
// // QUESTION - 4  [ Worst TAREEKA  (Pair Target Sum Problem) ]
// // QUESTION - 4  [ Best Tareeka (Pair Target Sum Problem) ]







// // QUESTION - 1        [PRINT ALL POSSIBLE SUBARRAYS]
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     cout<<endl;


//     for(int i=0; i<n; i++){
//         for(int j=i; j<n; j++){
//             for(int k=i; k<=j; k++){
//                 cout<<arr[k]<<" ";
//             }
//             cout<<endl;
//         }
//     }
//     return 0;
// }






// // QUESTION - 2                       [ 1st METHOD  MAXIMUM SUBARRAY SUM]
// // Time Complexity: O(N 2 )
// // Space Complexity: O(N)
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     cout<<endl;

//     int maxSum = INT_MIN;
//     for(int i=0; i<n; i++){
//         for(int j=i; j<n; j++){
//             int sum = 0;
//             for(int k=i; k<=j; k++){
//                 sum += arr[k];
//             }
//             maxSum = max(maxSum,sum);
//         }
//     }

//     cout<<maxSum<<endl;
//     return 0;
// }






// // // QUESTION - 2                       [ 2nd METHOD  (CUMULATIVE SUM APPROACH) or (Prefix Sum Technique)]
// // // Time Complexity: O(N^2 )
// // // Space Complexity: O(N)
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     int currsum[n+1];
//     currsum[0]=0;

//     for(int i=1; i<=n; i++){
//         currsum[i] = currsum[i-1] + arr[i-1];
//     }

//     int maxSum = INT_MIN;
//     for(int i=1; i<=n; i++){
//         int sum = 0;
//         for(int j=0; j<i; j++){
//             sum = currsum[i] - currsum[j];
//             maxSum = max(sum, maxSum);
//         }   
//     }

//     cout<<maxSum<<endl;
//     return 0;
// }









// // QUESTION - 2                                  [ 3rd METHOD (Kadane's Algorithm)]
// // Time Complexity: O(N)
// // Space Complexity: O(1)
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     int currentSum = 0;
//     int maxSum = 0;
//     for(int i=0; i<n; i++){
//         currentSum += arr[i];
//         maxSum = max(currentSum, maxSum);
//         if(currentSum < 0){
//             currentSum = 0;
//         }
//     }

//     cout<<maxSum<<endl;
//     return 0;
// }






// // QUESTION - 3                                  [ Maximum Circular Subarray Sum ]
// #include<iostream>
// #include<climits>
// using namespace std;

// int kadane(int arr[], int n){
//     int currentSum = 0;
//     int maxSum = 0;
//     for(int i=0; i<n; i++){
//         currentSum += arr[i];
//         maxSum = max(currentSum, maxSum);
//         if(currentSum < 0){
//             currentSum = 0;
//         }
//     }
//     return maxSum;
// }


// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     int wrapsum;
//     int nonwrapsum;

//     nonwrapsum = kadane(arr,n);
//     int totalsum = 0;

//     for(int i=0; i<n; i++){
//         totalsum += arr[i];
//         arr[i] = -arr[i];
//     }

//     wrapsum = totalsum + kadane(arr,n);
//     cout<<max(wrapsum,nonwrapsum)<<endl;
//     return 0;
// }






// // QUESTION - 4                                  [ Worst TAREEKA  (Pair Target Sum Problem) ]
// // Time Complexity: O(N^2)
// #include<iostream>
// using namespace std;

// bool pairSum(int arr[], int n, int k){
//     for(int i=0; i<n-1; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[i]+arr[j] == k){
//                 cout<<i<<"+"<<j<<"="<<k<<endl;
//                 return true;
//             }
//         }
//     }
//     return false;
// }


// int main(){
//     int n;
//     cout<<"n : ";
//     cin>>n;
    
//     int k;
//     cout<<"k : ";
//     cin>>k;

//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
    
//     // EXAMPLE
//     // int arr[]= {2,4,7,11,14,16,20,21};
//     // int k = 31;

//     if(pairSum(arr,n,k) == true){
//         cout<<"True"<<endl;
//     }
//     else{
//         cout<<"False"<<endl;
//     }

//     return 0;
// }






// // QUESTION - 4                                  [ Best Tareeka (Pair Target Sum Problem) ]
// // Time Complexity: O(N)
// // Space Complexity: O(1)
// #include<iostream>
// using namespace std;

// bool pairSum(int arr[], int n, int k){

//     int low = 0;
//     int high = n-1;

//     while(low<high){
//         if(arr[low]+arr[high]==k){
//             cout<<low<<" "<<high<<endl;
//             return true;
//         }
//         else if(arr[low]+arr[high]>k){
//             high--;
//         }
//         else{
//             low++;
//         }
//     }
//     return false;
// }


// int main(){
//     int arr[]= {2,4,7,11,14,16,20,21};
//     int k = 31;

//     cout<<pairSum(arr,8,k)<<endl;

//     return 0;
// }