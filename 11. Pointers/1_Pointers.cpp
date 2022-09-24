// 1. Pointers : Pointers are variable that stores the address of other variable.
// 2. Pointers Arithmetic :  Increment [++], Decrement [--], Add [+], Subtract [-].
// 3. SWAP FUNCTION BY USING POINTERS
// 4. PASSING POINTERS TO FUNCTION







// // 1. Pointers : Pointers are variable that stores the address of other variable.
// #include<iostream>
// using namespace std; 
// int main(){
//     int a = 10;
//     int *aptr = &a;

//     cout<<*aptr<<endl;      // 10
//     cout<<aptr<<endl;
//     return 0;
// }







// // 2. Pointers Arithmetic :  Increment [++], Decrement [--], Add [+], Subtract [-].
// #include<iostream>
// using namespace std;
// int main(){
//     int a = 10;
//     int *aptr = &a;
//     cout<<aptr<<endl;

//     aptr++;                              // increment in address of a
//     cout<<aptr<<endl;
    
//     aptr--;                              // decrement in address of a
//     cout<<aptr<<endl;

//     return 0;
// }







// // 3. SWAP FUNCTION BY USING POINTERS
// #include<iostream>
// using namespace std;
// void swap(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main(){

//     int a=2;
//     int b=4;

//     swap(&a,&b);
//     cout<<a<<" "<<b<<endl;
//     return 0;
// }







// // 4. PASSING POINTERS TO FUNCTION
// #include<iostream>
// using namespace std;
// void increment(int *a){
//     *a++;  
// }

// int main(){

//     int a=2;
//     increment(&a);
//     cout<<a<<endl;
//     return 0;
// }


