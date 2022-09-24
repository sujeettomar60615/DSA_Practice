// ALL QUESTIONS
//     1. ODD EVEN NUMBER
//     2. Swap two numbers without using 3rd variable or using bitwise operator
//     3. Find number of bits to change to convert a to b.
//     4. Write a program to check if a given number is power of 2.
//     5. Write a program to count the number of ones in binary representation of a number.
//     6. Write a program to generate all posible subsets of a set.
//     7. Write a program to find a unique number in an array where all numbers except one, are present twice.
//     8. Write a program to find 2 unique number in an array where aal numbers except two, are present twice.
//     9. Write a program to find a unique number in an array where aal numbers except one, are present thrice.
//     10. DECIMAL TO BINARY  ( LOVE BABBAR )
//     11. BINARY  TO  DECIMAL ( LOVE BABBAR )







// // QUESTION 1   ODD EVEN NUMBER
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter an integer : ";
//     cin>>a;

//     if(a&1 == 1){
//         cout<<"Odd Number"<<endl;
//     }
//     else{
//         cout<<"Even Number"<<endl;
//     }
//     return 0;
// }





// // Question 2  Swap two numbers without using 3rd variable or using bitwise operator
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"a = ";
//     cin>>a;
    
//     int b;
//     cout<<"b = ";
//     cin>>b;

//     a = a^b;
//     b = a^b;
//     a = a^b;

//     cout<<"a = "<<a<<endl;
//     cout<<"b = "<<b<<endl;
//     return 0;
// }





// // Question 3  Find number of bits to change to convert a to b.
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"a = ";
//     cin>>a;
//     cout<<"b = ";
//     cin>>b;

//     int n = a^b;
//     int counter = 0;
//     while(n>0){
//         n = n & (n-1);
//         counter++;
//     }

//     cout<<counter<<endl;
//     return 0;
// }




//  Bit Manipulation Challenges   (APNA COLLEGE)

// // QUESTION 4  Write a program to check if a given number is power of 2.
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






// // QUESTION 5  Write a program to count the number of ones in binary representation of a number.
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







// // QUESTION 6  Write a program to generate all posible subsets of a set.
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







//  Bit Manipulation Challenges   (APNA COLLEGE)

// // QUESTION 7 Write a program to find a unique number in an array where all numbers except one, are present twice.
// #include<iostream>
// using namespace std;
// int main(){
//     int a[7] = {2,4,6,3,4,6,2};
//     int result = 0;
//     for(int i=0; i<7; i++){
//         result = result ^ a[i];
//     }

//     cout<<result<<endl;
//     return 0;
// } 







// // QUESTION 8  Write a program to find 2 unique number in an array where all numbers except two, are present twice.
// #include<iostream>
// using namespace std;


// int setBit(int n, int pos){
//     return ((n & (1<<pos)) != 0);
// }


// void unique(int arr[], int n){
//     int result = 0;
//     for(int i=0; i<8; i++){
//         result = result ^ arr[i];
//     }

//     int temp = result;
//     int setbit = 0;
//     int pos = 0;
//     while(setbit != 1){
//         setbit = result & 1;
//         pos++;
//         result = result>>1;
//     }

//     int a = 0;
//     int b = 0;
//     for(int i=0; i<n; i++){
//         if(setBit(arr[i], pos-1)){
//             a = a^arr[i];
//         }
//     }

//     b = a ^ temp;
//     cout<<a<<", "<<b;
// }


// int main(){
//     int arr[] = {2,4,6,3,7,4,6,2};
//     unique(arr,8);
//     return 0;
// } 






// // QUESTION 9 Write a program to find a unique number in an array where aal numbers except one, are present thrice.
// #include<iostream>
// using namespace std ;

// bool getBit ( int n , int pos ) {
// return (( n & ( 1 << pos )) != 0 );
// }


// int setBit ( int n , int pos ) {
// return ( n | ( 1 << pos ));
// }

// int unique ( int arr [], int n ) {
//     int result = 0 ;
//     for ( int i = 0 ; i < 64 ; i ++) {
//         int sum = 0 ;
//         for ( int j = 0 ; j < n ; j ++) {
//             if ( getBit ( arr[j], i )) {
//                 sum ++;
//             }
//         }
        
//         if ( sum % 3 != 0 ) {
//             result = setBit ( result , i );
//         }
//     }
//     return result ;
// }


// int main () {
//     int arr [] = { 1 , 2 , 3 , 4 , 1 , 2 , 3 , 1 , 2 , 3 };
//     cout << unique ( arr , 10 ) << endl ;
//     return 0;
// }





// // 10.  DECIMAL TO BINARY  ( LOVE BABBAR )

//  #include<iostream>
//  #include<math.h>
//  using namespace std;

//  int DecimalTObinary(int n){
//      int ans = 0;
//      int i = 0;
//      while(n != 0){
//          int bit = n & 1;
//          ans = (bit * pow(10, i)) + ans;

//          n = n >> 1;
//          i++;   
//      }

//      return ans;
//  }

//  int main(){
//      int n;
//      cin>>n;

//      cout<<DecimalTObinary(n)<<endl;
//      return 0;
//  }






//  11. BINARY  TO  DECIMAL ( LOVE BABBAR )

// int bit = n & 1;
// n = n >> 1;

//    [is something equal to] 

// int digit = n % 10;
//  n = n / 10;



//  #include<iostream>
//  #include<math.h>
//  using namespace std;

//  int binary_to_Decimal(int n){
//      int ans = 0;
//      int i = 0;
//      while(n != 0){
//          int digit = n%10;
//          if(digit == 1){
//              ans = pow(2, i) + ans;
//          }

//          n /= 10;
//          i++;   
//      }

//      return ans;
//  }

//  int main(){
//      int n;
//      cin>>n;

//      cout<<binary_to_Decimal(n)<<endl;
//      return 0;
//  }