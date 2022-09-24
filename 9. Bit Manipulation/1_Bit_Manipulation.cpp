// Methods of Bit Operations
// QUESTION 1   ODD EVEN NUMBER
// Question 2  Swap two numbers without using 3rd variable or using bitwise operator
// Question 3  Find number of bits to change to convert a to b.





// Methods of Bit Operations
// // Get BIT, Set BIT, Clear BIT
// #include<iostream>
// using namespace std;

// int getbit(int n, int pos){
//     return ((n & (1<<pos))!=0);
// }

// int setbit(int n, int pos){
//     return (n | (1<<pos));
// }

// int clearbit(int n, int i){
//     int mask = ~(1<<i);
//     return (n & mask);
// }

// int updatebit(int n, int i, int value){
//     int mask = ~(1<<i);
//     n = n & mask;
//     mask = (value<<i);
//     n = n | mask;
//     return (n);
// }

// int main(){

//     // cout<<getbit(5,2)<<endl;
//     // cout<<setbit(5,1)<<endl;
//     // cout<<clearbit(5,1)<<endl;
//     cout<<updatebit(5,1,1)<<endl;
//     return 0;
// }





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





