// Question 1 Write a program to print all odd numbers till n.
// Question 2 Write a program to check if a given number is prime or not.
// Question 3 Write a program to print all prime numbers in a given range






// // Question 1 Write a program to print all odd numbers till n.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         if(i%2==0){
//             continue;
//         }
//         cout<<i<<" , ";
//     }
//     return 0;
// }







// // Question 2 Write a program to check if a given number is prime or not.
// #include<iostream>
// using namespace std;
// int main(){
//     int n,i;
//     cin>>n;

//     for(i=2;i<n;i++){
//         if(n%i==0){
//             cout<<"Not a Prime Number\n";
//             break;
//         }
//     }
//     if(i==n){
//         cout<<"Prime Number\n";
//     }
//     return 0;
// }







// // Question 3 Write a program to print all prime numbers in a given range
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"Enter Two Numbers : ";
//     cin>>a>>b;

//     for(int num=a;num<=b;num++){
//         int i;
//         for(i=2;i<num;i++){
//             if(num%i==0){
//                 break;
//             }
//         }
//         if(i==num){
//             cout<<num<<", ";
//             }

//     }

// return 0;
// }
