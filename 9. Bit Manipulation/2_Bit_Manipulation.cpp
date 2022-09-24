// QUESTION 1  Write a program to check if a given number is power of 2.
// QUESTION 2  Write a program to count the number of ones in binary representation of a number.
// QUESTION 3  Write a program to generate all posible subsets of a set.







// // QUESTION 1  Write a program to check if a given number is power of 2.
// #include<iostream>
// using namespace std;

// bool ispowerof2(int n){
//     return (n && !(n & n-1));
// }

// int main(){

//     int n;
//     cout<<"n = ";
//     cin>>n;

//     if(ispowerof2(n) == 1){
//         cout<<"Number is power of 2"<<endl;
//     }
//     else{
//         cout<<"Number NOT power of 2"<<endl;
//     }

//     cout<<ispowerof2(n)<<endl;
//     return 0;
// } 






// // QUESTION 2  Write a program to count the number of ones in binary representation of a number.
// #include<iostream>
// using namespace std;
// int numberofones(int n){
//     int counter = 0;
//     while (n>0){
//         n = n & n-1;
//         counter++;
//     }
//     return counter;
// }

// int main(){
//     int n;
//     cin>>n;
    
//     cout<<numberofones(n)<<endl;
//     return 0;
// }







// // QUESTION 3  Write a program to generate all posible subsets of a set.
// #include<iostream>
// using namespace std;

// void subsets(int arr[], int n){
//     for(int i=0; i<(1<<n); i++){
//         for(int j=0; j<n; j++){
//             if(i & (1<<j)){
//                 cout<<arr[j]<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }
// 
// int main(){
//     int arr[3] = {2,3,4};
//     subsets(arr,3);
//     return 0;
// }