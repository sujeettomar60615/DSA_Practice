// // QUESTION 1 Write a program to find a unique number in an array where all numbers except one, are present twice.
// // QUESTION 2 Write a program to find 2 unique number in an array where all numbers except two, are present twice.
// // QUESTION 3 Write a program to find a unique number in an array where all numbers except one, are present thrice.









// // QUESTION 1 Write a program to find a unique number in an array where all numbers except one, are present twice.
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






// // QUESTION 2 Write a program to find 2 unique number in an array where aal numbers except two, are present twice.
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






// // QUESTION 3 Write a program to find a unique number in an array where aal numbers except one, are present thrice.
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