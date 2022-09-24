// MOST IMPORTANT INTERVIEW QUESTIONS

// 1. First and last Occurence of an element in an array.
// 2. Find MINIMUM (pivot) element in an Sorted array and rotated array [Using Binary Search with complexity of O(log n)] 
// 3.Find the Square root of the number with more precision.




// // 1. First and last Occurence of an element in an array.
// #include<iostream>
// using namespace std;

// int firstOccurence(int arr[], int n, int key){
    
//     // simply using binary search
//     int s = 0, e = n-1;
//     int ans = -1;
//     while(s<=e){
//         int mid = s + (e-s)/2;        

//         if(arr[mid] == key){
//             ans = mid;
//             e = mid - 1;
//         }
//         else if(key > arr[mid]){ // Right me jaao
//             s = mid + 1;
//         }
//         else if(key < arr[mid]){ // Left me jaao
//             e = mid - 1;
//         }

//     }

//     return ans; 
// }

// int lastOccurence(int arr[], int n, int key){
    
//     // simply using binary search
//     int s = 0, e = n-1;
//     int ans = -1;
//     while(s<=e){
//         int mid = s + (e-s)/2;        

//         if(arr[mid] == key){
//             ans = mid;
//             s = mid + 1;
//         }
//         else if(key > arr[mid]){ // Right me jaao
//             s = mid + 1;
//         }
//         else if(key < arr[mid]){ // Left me jaao
//             e = mid - 1;
//         }

//     }

//     return ans; 
// }


// int main(){

//     int even[12] = {1,2,2,3,3,3,3,3,3,3,3,3};

//     cout<<"First Occurence of 3 is at index "<<firstOccurence(even,12,3)<<endl;
//     cout<<"Last Occurence of 3 is at index "<<lastOccurence(even,12,3)<<endl;

//     return 0;
// }









// // 2. Find MINIMUM (pivot) element in an Sorted array and rotated array [Using Binary Search with complexity of O(log n)] 
// Sorted Array : arr[5] = {1,2,3,7,9}
// Rotated Array : arr[5] = {7,9,1,2,3}

// // #include<iostream>
// using namespace std;

// int getPivot(int arr[], int n){
//     int start = 0;
//     int end = n-1;
//     int mid = start + (end-start)/2;

//     while(start<end){
//         if(arr[mid] >= arr[0]){
//             start = mid + 1;
//         }
//         else{
//             end = mid;
//         }
//         mid = start + (end-start)/2;
//     }  
//     return start;
//     // we can return end also because start and end is equal at the terminating condition  
// }

// int main(){

//     int arr[5] = {3,8,10,17,1};
//     cout<<"Pivot : "<<getPivot(arr,5)<<endl;
//     return 0;
// }








// // 3.Find the Square root of the number with more precision.
// #include<iostream>
// using namespace std;

//  long long int sqrtInteger(int n) {  
        
//         // This function for absolute square root wtih no decimal digits
//         int s = 0;
//         int e = n;
//         long long int mid = s + (e-s)/2;
        
//         long long int ans = -1;
//         while(s<=e) {
            
//             long long int square = mid*mid;
            
//             if(square == n)
//                 return mid;
            
//             else if(square < n ){
//                 ans = mid;
//                 s = mid+1;
//             }
//             else
//             {
//                 e = mid - 1;
//             }
//             mid = s + (e-s)/2;
//         }
//         return ans;
//     }

// double morePrecision(int n, int precision, int tempSol) {
    
//     // This function for decimal digits
//     double factor = 1;
//     double ans = tempSol;

//     for(int i=0; i<precision; i++) {
//         factor = factor/10;

//         for(double j=ans; j*j<n; j= j+factor ){
//             ans = j;
//         }
//     }
//     return ans;
// }

// int main() {
//     int n;
//     cout <<"Enter the number " << endl;
//     cin >> n;

//     int tempSol = sqrtInteger(n);
//     cout <<"Answer is " << morePrecision(n, 3, tempSol) << endl;

//     return 0;
// }