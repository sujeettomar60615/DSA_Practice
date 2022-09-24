// // QUESTION 1 PRINT ALL PRIME NUMBERS BETWEEN 2 GIVEN NUMBERS
// // QUESTION 2  Write a program to print Fibonacci sequence.
// // QUESTION 3  Write a program to print the Pascal triangle.







// // QUESTION 1 PRINT ALL PRIME NUMBERS BETWEEN 2 GIVEN NUMBERS
// #include<iostream>
// using namespace std;

// bool isprime(int num){
//     for(int i=2;i<num;i++){
//         if(num%i==0){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){
//     int a,b;
//     cin>>a>>b;

//     for(int i=a;i<=b;i++){
//         if(isprime(i)){
//             cout<<i<<", ";
//         }
//     }
//     return 0;
// }





// // QUESTION 2  Write a program to print Fibonacci sequence.
// #include<iostream>
// using namespace std;
// void fib(int n){
//     int t1=0;
//     int t2=1;
//     int nextterm;

//     for(int i=1;i<=n;i++){
//         cout<<t1<<", ";
//         nextterm = t1 + t2;
//         t1=t2;
//         t2=nextterm;
//     }
// }

// int main(){
//     int n;
//     cin>>n;

//     fib(n);

//     return 0;
// }






// // QUESTION 3  Write a program to print the Pascal triangle.
// #include<iostream>
// using namespace std;

// int fact(int n){
//     int factorial = 1;
//     for(int i=n;i>0;i--){
//         factorial = factorial*i;
//     }
//     return factorial;
// }

// int main(){
//     int n;
//     cin>>n;

//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<fact(i)/(fact(j)*fact(i-j))<<"  ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

