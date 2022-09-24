// Question 1  Add all Numbers till n
// Question 2  Calculate n raised to power p
// Question 3  Find the Factorial of a number n
// Question 4  Print the nth Fibonacci Number
// Question 5  To print numbers 1 to n, in increasing as well as decreasing order.
// Question 6  Check if Array is Sorted [Strictly increasing]
// Question 7  Find the first and last occurrence of an element using recursion






// // Question 1  Add all Numbers till n
// #include<iostream>
// using namespace std;

// int recursiveSum(int n){
//     if(n==0){
//         return 0;
//     }

//     return n + recursiveSum(n-1);
// }

// void decreasing(int n){
//     if(n==1){
//         cout<<"1"<<endl;
//         return;
//     }

//     cout<<n<<" ";
//     decreasing(n-1);
// }

// int main(){
//     int n;
//     cin>>n;
//     // cout<<recursiveSum(n)<<endl;
//     decreasing(n);
//     return 0;
// }







// // Question 2  Calculate n raised to power p
// #include<iostream>
// using namespace std;

// int power(int n, int p){

//     if(p==0){
//         return 1;
//     }

//     return n * power(n, p-1);
// }

// int main(){
//     int n,p;
//     cin>>n>>p;
   
//     cout<<power(n,p)<<endl;
//     return 0;
// }







// // Question 3  Find the Factorial of a number n
// #include<iostream>
// using namespace std;

// int factorial(int n){
//     if(n==1){
//         return 1;
//     }
//     return n * factorial(n-1);
// }

// int main(){
//     int n;
//     cout<<"Enter the value of n : "<<endl;
//     cin>>n;
//     cout<<factorial(n)<<endl;
//     return 0;
// }






// // Question 4  Print the nth Fibonacci Number
// #include<iostream>
// using namespace std;

// int fib(int n){
//     if(n==0 || n==1){
//         return n;
//     }
//     return fib(n-1) + fib(n-2);
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<fib(n)<<endl;
//     return 0;
// }







// // Question 5  To print numbers 1 to n, in increasing as well as decreasing order.
// #include<iostream>
// using namespace std;
// void increasing(int n){
//     if(n==1){
//         cout<<1<<" ";
//         return;
//     }

//     increasing(n-1);
//     cout<<n<<" ";
// }

// void decreasing(int n){
//     if(n==1){
//         cout<<1<<" ";
//         return;
//     }

//     cout<<n<<" ";
//     decreasing(n-1);
// }

// int main(){
//     int n;
//     cin>>n;
//     decreasing(n);
//     return 0;
// } 







// // Question 6  Check if Array is Sorted [Strictly increasing]
// #include<iostream>
// using namespace std;
// bool sorted(int arr[], int n){

//     if(n==1){
//         return true;
//     }

//     bool restarray = sorted(arr+1, n-1);
//     return(arr[0] < arr[1] && restarray);
// }

// int main(){
//     int arr[] = {1,2,4,5,3};
//     cout<<sorted(arr,5);
//     return 0;
// }






// // Question 7  Find the first and last occurrence of an element using recursion
// #include<iostream>
// using namespace std;
// int firstOccurence(int arr[], int n, int i, int key){

//     if(i==n){
//         return -1;
//     }

//     if(arr[i]==key){
//         return i;
//     }
//     return firstOccurence(arr,n,i+1,key);
// }


// int lastOccurence(int arr[], int n, int i, int key){

//     if(i==n){
//         return -1;
//     }

//     int restArray = lastOccurence(arr , n , i + 1 , key);
//     if ( restArray != - 1 ) {
//         return restArray ;
//     }

//     if(arr[i]==key){
//         return i;
//     }
//     return -1;
// }

// int main(){
//     int arr[] = {4,2,1,2,5,2,7};
//     cout<<firstOccurence(arr,7,0,2)<<endl; 
//     cout<<lastOccurence(arr,7,0,2)<<endl; 
//     return 0;
// }




// // NICE QUESTION OF RECURSION
// #include<iostream>
// using namespace std;

// void func(int n){
//     if(n<1){
//         return;
//     }
//     else{
//         cout<<n<<endl;
//         func(n-1);
//         cout<<n<<endl;
//         return;
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter the value of n : "<<endl;
//     cin>>n;
//     func(n);
//     return 0;
// }