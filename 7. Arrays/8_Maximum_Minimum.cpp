// 1. Find the minimum difference b/w two numbers in array
// 2. Sum of Maximum and Minimum element





// // 1. Find the minimum difference b/w two numbers in array
// //  firstly sort to the array and after that comapare the difference b/w them.

// #include <iostream>
// #include<algorithm>
// using namespace std;

// int main() {
//     int minDiffernce = 999999;
// 	int S[5] = {4,9,1,32,13};
// 	for(int i=0; i<5; i++){
// 	    for(int j=i+1; j<5; j++){
// 	        if(S[i]>S[j]){
// 	            int temp = S[i];
// 	            S[i] = S[j];
// 	            S[j] = temp;
// 	        }
// 	    }
// 	}

// 	for(int i=0; i<5; i++){
// 	    int differnce = S[i+1] - S[i];
// 	    minDiffernce = min(differnce,minDiffernce);
// 	}

// 	cout<<minDiffernce<<endl;
// 	return 0;
// }






// // 2. Sum of Maximum and Minimum element
// #include<iostream>
// using namespace std;
// int main(){
//     int T;
//     cin>>T;
//     for(int i=0; i<T; i++){
//          int n;
//          cin>>n;
//          int arr[n];
//          for(int i=0; i<n; i++){
//              cin>>arr[i];
//          }
//         int min =999999;
//         int max = -999999;
//         int sum;
//         for(int i=0; i<n; i++){
//             if(arr[i]<min){
//                 min = arr[i];
//             }
//             if(arr[i]>max){
//                 max = arr[i];
//             }
//         }
//         sum = max + min;
//         cout<<sum<<endl;
//     }
//     return 0;
// }