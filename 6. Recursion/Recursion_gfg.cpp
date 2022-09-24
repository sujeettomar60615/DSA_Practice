// // 1. Factorial of the number 
// #include<iostream>
// using namespace std;

// // SIMPLE RECURSIVE FUNCTION
// // int factorial(int n){
// //     if(n == 0){
// //         return 1;
// //     }
// //     return n*factorial(n-1);
// // }

// // TAIL RECURSIVE FUNCTION
// int factorial(int n, int fact = 1){
//     if(n == 0){
//         return fact;
//     }
//     return factorial(n-1, n*fact);
// }

// int main(){
//     int n;
//     cout<<"Enter the value of n : "<<endl;
//     cin>>n;
//     cout<<factorial(n)<<endl;
//     return 0;
// }





// // 2. nth Fibbonacci Number
// #include<bits/stdc++.h>
// using namespace std;
// int fib(int n){
//     if(n==0 || n==1){
//         return n;
//     }
//     return fib(n-1) + fib(n-2);
// }

// int main(){
//     int n;
//     cout<<"Enter the value of n : "<<endl;
//     cin>>n;

//     cout<<fib(n)<<endl;
//     return 0;
// }




// // 3. Print the number form n to 1   in decreasing order  [TAIL RECURSION]
// #include<iostream>
// using namespace std;

// void decreasing(int n){
//     if(n == 0){
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





// // 4. find the sum of n natural numbers using [TAIL RECURSION]
// #include<iostream>
// using namespace std;

// // SIMPLE RECURSIVE FUNCTION
// int sum(int n){
//     if(n==1){
//         return 1;
//     }
//     return n+sum(n-1);
// }

// // // TAIL RECURSIVE FUNCTION
// // int sum(int n, int val=0){
// //     if(n == 0){
// //         return val;
// //     }
// //     return sum(n-1, n+val);
// // }

// int main(){
//     int n;
//     cout<<"Enter the value of n : "<<endl;
//     cin>>n;
//     cout<<sum(n);
//     return 0;
// }




// // IMPORTANT
// // 5. Find the sum of a digits of a number using recursion
// #include<iostream>
// using namespace std;

// // // SIMPLE RECURSIVE FUNCTION
// // int sum(int n){
// //     if(n==0){
// //         return 0;
// //     }
// //     int digit = n%10;
// //     return digit+sum(n/10);
// // }

// // TAIL RECURSIVE FUNCTION
// int sum(int n, int ans = 0){
//     if(n==0){
//         return ans;
//     }

//     int digit = n%10;
//     ans += digit;
//     return sum(n/10, ans);
// }

// // MAIN FUNCTION
// int main(){
//     int n;
//     cout<<"Enter the value of n : "<<endl;
//     cin>>n; 
//     cout<<sum(n);
//     return 0;
// }




// // IMPORTANT
// //  6. Given a rope and find the maximum no. of pieces of given length is in set.
// #include<iostream>
// using namespace std;

// int maxcuts(int n, int a, int b, int c){
//     if(n==0)
//         return 0;
//     if(n<0)
//         return -1;

//     int x = maxcuts(n-a, a, b, c);
//     int y = maxcuts(n-b, a, b, c);
//     int z = maxcuts(n-c, a, b, c);

//     int ans = max(x,y);
//     ans = max(ans, z);
//     // int ans = max(maxcuts(n-a, a, b, c), maxcuts(n-b, a, b, c), maxcuts(n-c, a, b, c));
//     return ans+1;
// }

// int main(){
//     int n,a,b,c;
//     cout<<"Enter the value of n : "<<endl;
//     cin>>n;

//     cout<<"Enter the value of a,b,c : "<<endl;
//     cin>>a>>b>>c;

//     cout<<maxcuts(n,a,b,c);
//     return 0;
// }





// // IMPORTANT
// // 7. Print the superset of a given string
// #include<iostream>
// using namespace std;

// void powerset(string str, string current = " ", int i=0){

//     if(i == str.length()){
//         cout<<current<<", ";
//         return;
//     }

//     powerset(str, current+str[i], i+1);    // include krenge
//     powerset(str, current, i+1);           // isme include nhi krenge
//                                            // ese dono case handle ho jayenge or dono values mil jayengi apan ko
// }

// int main(){
//     string str;
//     cout<<"Enter the value of str : "<<endl;
//     cin>>str;

//     powerset(str);
//     return 0;
// }






// // IMPORTANT
// // 8. Print the REVERSE of a number using recursion
// #include<iostream>
// using namespace std;

// // SIMPLE RECURSIVE FUNCTION
// void print(int n){
//     if(n<10){
//         cout<<n;
//         return;
//     }
//     int digit = n%10;
//     cout<<digit;
//     print(n/10);
// }

// // MAIN FUNCTION
// int main(){
//     int n;
//     cout<<"Enter the value of n : "<<endl;
//     cin>>n; 
//     print(n);
//     return 0;
// }