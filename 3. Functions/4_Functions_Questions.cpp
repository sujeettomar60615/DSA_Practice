// 1. POWER FUNCTION
// 2. ODD EVEN FUNCTION
// 3. FACTORIAL FUNCTION  & COMBINATIONS 
// 4. PRIME or NOT
// 5. NTH TERM OF AP
// 6. FIBBONACCI SERIES







// // 1. POWER FUNCTION
// // Functions Questions 
// // new use of function without using argument in function calling 
// // then taking input in user defined function not in main function

// #include<iostream>
// using namespace std;

// int power(){
//     int a,b;
//     cout<<"Base (a) : "<<endl;
//     cin>>a;
//     cout<<"Power (b) : "<<endl;
//     cin>>b;

//     int ans = 1;
//     for(int i=0; i<b; i++){
//         ans *= a;
//     }

//     return ans;
// }

// int main(){
    
//     cout<<power()<<endl;;

//     return 0;
// }






// 2. ODD EVEN FUNCTION
// #include<iostream>
// using namespace std;
// bool isEven(int a){
//     // 0 --> true
//     // 1 --> false
//     if(a&1){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// int main(){
//     int num;
//     cout<<"Enter the number num : "<<endl;
//     cin>>num;
    
//     cout<<isEven(num)<<endl;
//     return 0;
// }






// 3. FACTORIAL FUNCTION  & COMBINATIONS 
// #include<iostream>
// using namespace std;

// // Function of finding the  factorial
// int fact(int n){
//     if(n>1){
//         return n*fact(n-1);
//     }
//     else{
//         return 1;
//     }
// }


// int combinations(int n, int r){
//     int answer = fact(n)/(fact(r)*fact(n-r));
//     return answer;
// }

// int main(){
//     int n, r;
//     cout<<" Enter the value of n and r : "<<endl;
//     cin>>n>>r;

//     cout<<combinations(n,r)<<endl;;
//     return 0;
// }






// // 4. PRIME or NOT
// #include<iostream>
// using namespace std;

// bool isPrime(int n){
//     if(n<=1){
//         return false;
//     }

//     for(int i=2; i<n; i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){

//     int n;
//     cin>>n;
//     cout<<isPrime(n)<<endl;
//     return 0;
// }






// 5. NTH TERM OF AP
//  #include<iostream>
//  using namespace std;

//  int nth_Term(int n){
//      int nthTerm = (3*n)+7;
//      return nthTerm;
//  }

//  int main(){

//      int n;
//      cout<<"Enter the value of n : "<<endl;
//      cin>>n;
//      cout<<nth_Term(n)<<endl;
//      return 0;
//  }






// // 6. FIBBONACCI SERIES
// #include<iostream>
// using namespace std;
// void fibbonacci(int n){
//     int n1=0;
//     int n2=1;
//     cout<<n1<<" "<<n2<<" ";
//     for(int i=2; i<n; i++){
//         int n3 = n1+n2;
//         cout<<n3<<" ";

//         n1=n2;
//         n2=n3;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     fibbonacci(n);
//     return 0;
// }
