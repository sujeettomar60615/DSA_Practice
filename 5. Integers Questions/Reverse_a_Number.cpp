// QUESTION 1  CHECK IF A NUMBER IS PRIME OR NOT        (USING FLAG VARIABLE)
// QUESTION 2  REVERSE A NUMBER
// QUESTION 3  CHECK IF A GIVEN NUMBER IS ARMSTRONG NUMBER OR NOT
// QUESTION 4  Write a program to print the ASCII value of any given character.
// QUESTION 5  Write a program to display all factors of a number.







// // QUESTION 1  CHECK IF A NUMBER IS PRIME OR NOT        (USING FLAG VARIABLE)
// #include<iostream>
// using namespace std;
// int main(){
//     int n,i;
//     cin>>n;
//     bool flag = true;
    
//     for(i=2;i<n;i++){
//         if(n%i==0){
//             flag = false;
//             break;
//         }
//     }
//     if(flag){
//             cout<<"Prime Number"<<endl;
//     }
//     else{
//         cout<<"Not a Prime Number"<<endl;
//     }

//     return 0;
// }






// // QUESTION 2  REVERSE A NUMBER
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int reverse=0;
//     while(n>0){
//         int lastdigit = n%10;
//         reverse = reverse*10 + lastdigit;
//         n=n/10; 
//     }
//     cout<<reverse<<endl;
//     return 0;
// }






// // QUESTION 3  CHECK IF A GIVEN NUMBER IS ARMSTRONG NUMBER OR NOT
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int sum=0;
//     int originaln = n;

//     while(n>0){
//         int lastdigit = n%10;
//         sum = sum + (lastdigit*lastdigit*lastdigit);
//         n=n/10; 
//     }
//     cout<<sum<<endl;
//     if(sum==originaln){
//         cout<<"YES, It is a armstrong Number"<<endl;
//     }
//     else{
//         cout<<"NO, It is not a armstrong Number"<<endl;
//     }
//     return 0;
// }





// // QUESTION 4  Write a program to print the ASCII value of any given character.
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     char n;
//     cin>>n;
//     a = int(n);
//     cout<<a<<endl;
//     return 0;
// }





// // QUESTION 5  Write a program to display all factors of a number.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             cout<<i<<" ";
//         }
//     }
//     return 0;
// }



