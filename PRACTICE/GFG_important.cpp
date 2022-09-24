// //1. find the second largest element in array without sorting
// // first or Naive Approach
// #include<iostream>
// using namespace std;
// int getlargest(int arr[], int n){
//     int ans = 0;
//     for(int i=1; i<n; i++){
//         if(arr[i] > arr[ans]){
//             ans = i;
//         }
//     }
//     return ans;
// }

// int indexofsecondlargerst(int arr[], int n){
//     int largest = getlargest(arr, 5);
//     int res = -1;
//     for(int i=0; i<n; i++){
//         if(arr[i] != arr[largest]){
//             if(res == -1){
//                 res = i;
//             }
//             else if(arr[i] > arr[res]){
//                 res = i;
//             }
//         }
//     }
//     return res;
// }

// int main(){
//     int arr[5] = {20, 10, 20, 8, 12};
//     cout<<indexofsecondlargerst(arr, 5);
//     return 0;
// }


// // Efficient Approach
// #include<iostream>
// using namespace std;

// int indexofsecondlargerst(int arr[], int n){
//     int res = -1, largest = 0;
//     for(int i=1; i<n; i++){
//         if(arr[i] > arr[largest]){
//             res = largest;
//             largest = i;
//         }
//         else if(arr[i] != arr[largest]){
//             if(res == -1 || arr[i] > arr[res]){
//                 res = i;
//             }
//         }
//     }
//     return res;
// }

// int main(){
//     int arr[5] = {20, 10, 20, 8, 12};
//     cout<<indexofsecondlargerst(arr, 5);
//     return 0;
// }




// // 2. Maximum length of even odd subarray
// // Efficient Approach 
// // Time Complexity O(N)
// #include<iostream>
// using namespace std;
// int maxEvenOdd(int arr[], int n){

//     int count = 1;
//     int ans = 1;
//     for(int i=1; i<n; i++){
//         if((arr[i]%2 == 0 && arr[i-1]%2 != 0) || (arr[i]%2 != 0 && arr[i-1]%2 == 0)){
//             count++;
//             ans = max(ans, count);
//         }
//         else{
//             count = 1;
//         }
//     }
//     return ans;
// }

// int main(){
//     int arr[6] = {5,10,20,6,3,8};
//     cout<<maxEvenOdd(arr,6);
// }





// // Merge Sort CODE

// #include<iostream>
// using namespace std;

// void merge(int *arr, int s, int e) {

//     int mid = (s+e)/2;

//     int len1 = mid - s + 1;
//     int len2 = e - mid;

//     int *first = new int[len1];
//     int *second = new int[len2];

//     //copy values
//     int mainArrayIndex = s;
//     for(int i=0; i<len1; i++) {
//         first[i] = arr[mainArrayIndex++];
//     }

//     for(int i=0; i<len2; i++) {
//         second[i] = arr[mainArrayIndex++];
//     }

//     //merge 2 sorted arrays     
//     int index1 = 0;
//     int index2 = 0;
//     mainArrayIndex = s;

//     while(index1 < len1 && index2 < len2) {
//         if(first[index1] < second[index2]) {
//             arr[mainArrayIndex++] = first[index1++];
//         }
//         else{
//             arr[mainArrayIndex++] = second[index2++];
//         }
//     }   

//     while(index1 < len1) {
//         arr[mainArrayIndex++] = first[index1++];
//     }

//     while(index2 < len2 ) {
//         arr[mainArrayIndex++] = second[index2++];
//     }

//     delete []first;
//     delete []second;

// }

// void mergeSort(int *arr, int s, int e) {

//     //base case
//     if(s >= e) {
//         return;
//     }
    
//     int mid = (s+e)/2;

//     //left part sort karna h 
//     mergeSort(arr, s, mid);
    
//     //right part sort karna h 
//     mergeSort(arr, mid+1, e);

//     //merge
//     merge(arr, s, e);

// }

// int main() {

//     int arr[15] = {3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
//     int n = 15;

//     mergeSort(arr, 0, n-1);

//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     } cout << endl;

//     return 0;
// }