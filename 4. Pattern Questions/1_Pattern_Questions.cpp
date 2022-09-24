// AWESOME PATTERN QUSETIONS

// QUESTION 1  RECTANGLE PATTERN
// QUESTION 2  HOLLOW RECTANGLE PATTERN
// QUESTION 3 INVERTED HALF PYRAMID
// QUESTION 4  HALF PYRAMID AFTER 180 ROTATION
// QUESTION 5  HALF PYRAMID USING NUMBERS
// QUESTION 6  FLOYD'S TRIANGLE
// QUESTION 7  BUTTERFLY PATTERN


// ADVANCED QUESTIONS

// QUESTION 8  INVERTED HALF PYRAMID USING NUMBERS
// QUESTION 9  HALF PYRAMID USING (0 - 1) PATTERN
// QUESTION 10  RHOMBUS PATTERN
// QUESTION 11  NUMBER PATTERN
// QUESTION 12  PALINDROMIC PATTERN
// QUESTION 13  STAR PATTERN
// QUESTION 14  ZIG - ZAG PATTERN

// ....................................................................................................................................




// // QUESTION 1  RECTANGLE PATTERN
// #include<iostream>
// using namespace std;
// int main(){
//     int rows,columns;
//     cout<<"Enter the No. of Rows : "<<endl;
//     cin>>rows;
//     cout<<"Enter the No. of Columns : "<<endl;
//     cin>>columns;

//     for(int i=1;i<=rows;i++){
//         for(int j=1;j<=columns;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     return 0;
// }





// // QUESTION 2  HOLLOW RECTANGLE PATTERN
// #include<iostream>
// using namespace std;
// int main(){
//     int rows,columns;
//     cout<<"Enter the No. of Rows : "<<endl;
//     cin>>rows;
//     cout<<"Enter the No. of Columns : "<<endl;
//     cin>>columns;

//     for(int i=1;i<=rows;i++){
//         for(int j=1;j<=columns;j++){
//             if(i==1 || i==rows){
//                 cout<<"*";
//             }
//             else if(j==1 || j==columns){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }

//     return 0;
// }





// // QUESTION 3 INVERTED HALF PYRAMID
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=n;i>0;i--){
//         for(int j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }






// // QUESTION 4  HALF PYRAMID AFTER 180 ROTATION
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(j<=n-i){
//                 cout<<"  ";
//             }
//             else{
//                 cout<<"* ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }





// // QUESTION 5  HALF PYRAMID USING NUMBERS
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(j<=i){
//                 cout<<i<<" ";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }






// // QUESTION 6  FLOYD'S TRIANGLE
// #include<iostream>
// using namespace std;
// int main(){
//     int n,a=1;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(j<=i){
//                 cout<<a<<" ";
//                 a = ++a;
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }





// // QUESTION 7  BUTTERFLY PATTERN
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         int space = 2*n - 2*i;
//         for(int j=1;j<=space;j++){
//             cout<<"  ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     for(int i=n;i>+1;i--){
//         for(int j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         int space = 2*n - 2*i;
//         for(int j=1;j<=space;j++){
//             cout<<"  ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }









// ADVANCED PATTERN QUSETIONS


// // QUESTION 8  INVERTED HALF PYRAMID USING NUMBERS
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=n;i>0;i--){
//         for(int j=1;j<=i;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }




// // QUESTION 9  HALF PYRAMID USING (0 - 1) PATTERN
// #include<iostream>
// using namespace std;
// int main(){
//     int n,a=0;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(j<=i){
//                 if((i+j)%2==0){
//                     cout<<"1 ";
//                 }
//                 else{
//                     cout<<"0 ";
//                 }
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }





// // QUESTION 10  RHOMBUS PATTERN
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<"  ";
//         }
//         for(int j=1;j<=n;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }





// // QUESTION 11  NUMBER PATTERN
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }





// // QUESTION 12  PALINDROMIC PATTERN
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         int j;
//         for(j=1;j<=n-i;j++){
//             cout<<"  ";
//         }
//         int k=i;
//         for(;j<=n;j++){
//             cout<<k--<<" ";
//         }
//         k=2;
//         for(;j<=n+i-1;j++){
//             cout<<k++<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }





// // QUESTION 13  STAR PATTERN
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<"  ";
//         }
//         for(int j=1;j<=(2*i)-1;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=n-i;j++){
//             cout<<"  ";
//         }
//         for(int j=1;j<=(2*i)-1;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }





// // QUESTION 14  ZIG - ZAG PATTERN
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     for(int i=1;i<=3;i++){
//         for(int j=1;j<=n;j++){
//             if(((i+j)%4==0) || (i==2 && j%4==0)){
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }





