// QUESTION 1  SUM OF FIRST N NATURAL NUMBERS 
// QUESTION 2  CHECK PYTHAGORIAN TRIPLET
// QUESTION 3  CONVERT INTO BINARY TO DECIMAL
// QUESTION 4  CONVERT INTO OCTAL TO DECIMAL
// QUESTION 5  CONVERT INTO HEXADECIMAL TO DECIMAL
// QUESTION 6  CONVERT INTO DECIMAL TO BINARY







// // QUESTION 1  SUM OF FIRST N NATURAL NUMBERS 
// #include<iostream>
// using namespace std;
// int sum_of_natural_numbers(int n){
//     int sum;
//     sum = (n*(n+1))/2;
//     return sum;
// }
// int main(){
//     int n;
//     cin>>n;

//     cout<<sum_of_natural_numbers(n)<<endl;
//     return 0;
// }






// // QUESTION 2   CHECK PYTHAGORIAN TRIPLET
// #include<iostream>
// using namespace std;
// bool check(int x,int y,int z){
//     int a = max(x, max(y,z));
//     int b, c;

//     if(a==x){
//         b=y;
//         c=z;
//     }
//     else if(a==y){
//         b=x;
//         c=z;
//     }
//     else{
//         b=x;
//         c=z;
//     }

//     if(a*a == b*b + c*c){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// int main(){
//     int x,y,z;
//     cin>>x>>y>>z;

//     if(check(x,y,z)){
//         cout<<"Pythgorian Triplet"<<endl;
//     }
//     else{
//         cout<<"Not a Pythagorian Triplet"<<endl;
//     }
//     return 0;
// }







// // QUESTION 3  CONVERT INTO BINARY TO DECIMAL
// #include<iostream>
// using namespace std; 

// int binarytodecimal(int n){
//     int ans = 0;
//     int x = 1;
//     while (n>0){
//         int y = n%10;
//         ans += x*y;
//         x *= 2;
//         n /= 10;
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cin>>n;
    
//     cout<< binarytodecimal(n) <<endl;
//     return 0;
// }







// // QUESTION 4  CONVERT INTO OCTAL TO DECIMAL
// #include<iostream>
// using namespace std; 

// int octaltodecimal(int n){
//     int ans = 0;
//     int x = 1;
//     while (n>0){
//         int y = n%10;
//         ans += x*y;
//         x *= 8;
//         n /= 10;
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cin>>n;
    
//     cout<< octaltodecimal(n) <<endl;
//     return 0;
// }







// // QUESTION 5  CONVERT INTO HEXADECIMAL TO DECIMAL
// #include<bits/stdc++.h>
// using namespace std; 

// int hexadecimaltodecimal(string n){
//     int ans = 0;
//     int x = 1;

//     int s = n.size();
//     for(int i=s-1;i>=0;i--){
//         if(n[i] >= '0' && n[i] <= '9'){
//             ans += x*(n[i]-'0');
//         }
//         else if(n[i] >= 'A' && n[i] <= 'F'){
//             ans += x*(n[i]-'A' + 10);
//         }
//         x *= 16;
//     }
//     return ans;
// }

// int main(){
//     string n;
//     cin>>n;
    
//     cout<< hexadecimaltodecimal(n) <<endl;
//     return 0;
// }





// // QUESTION 6  CONVERT INTO DECIMAL TO BINARY
// #include<bits/stdc++.h>
// using namespace std;
// int decimaltobinary(int n){
//     int x=1;
//     int ans=0;
//     while(x<=n)
//         x *=2;
//         x /=2;

//     while(x>0){
//         int lastdigit = n/x;
//         n -= lastdigit*x;
//         x/=2;
//         ans = ans*10 + lastdigit;
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cin>>n;

//     cout<<decimaltobinary(n)<<endl;
//     return 0;
// }