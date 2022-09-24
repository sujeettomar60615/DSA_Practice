// // Find the minimum difference b/w two numbers in array
// //  firstly sort to the array and after that compare the difference b/w them.

// #include <iostream>
// #include<algorithm>
// using namespace std;

// int main() {
//     int minDiffernce = 999999;
// 	int S[5] = {4,9,1,32,13};

//     // firstly Sort the array
// 	for(int i=0; i<5; i++){
// 	    for(int j=i+1; j<5; j++){
// 	        if(S[i]>S[j]){
// 	            int temp = S[i];
// 	            S[i] = S[j];
// 	            S[j] = temp;
// 	        }
// 	    }
// 	}

//     // and then find the difference and find the minimum difference using min() function
// 	for(int i=0; i<5; i++){
// 	    int differnce = S[i+1] - S[i];
// 	    minDiffernce = min(differnce,minDiffernce);
// 	}

// 	cout<<minDiffernce<<endl;
// 	return 0;
// }
