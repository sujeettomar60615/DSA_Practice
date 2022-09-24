// Recursion with Anuj Bhaiya

// // 1st Question It is like a Power Function using recursive function
// #include<iostream>
// using namespace std; 

// int exponential(int a, int b){
//     if(b==0){
//         return 1;
//     }
//     return a* exponential(a,b-1);
// }

// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<exponential(a,b)<<endl;
//     return 0;
// }




// // 2nd Question  Find the number of ways in (n X m) Matrix.
// #include<iostream>
// using namespace std; 

// int count(int n,int m){
//     if(n==1 || m==1){
//         return 1;
//     }
//     return count(n,m-1) + count(n-1,m);
// }
// int main(){
//     int n,m;
//     cin>>n>>m;
//     cout<<count(n,m)<<endl;
//     return 0;
// }




// // 3rd Question  JOSEPHUS PROBLEM
// #include<iostream>
// using namespace std; 

// int josephus(int n, int k){
//     if(n==1){
//         return 0;
//     }
//     return (josephus(n-1,k)+k)%n;
// }

// int main(){
//     int n,k;
//     cin>>n>>k;
//     cout<<josephus(n,k)<<endl;
//     return 0;
// }






