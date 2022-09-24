// // 1. BITWISE OPERATOR
// // 2. REVERSE THE NUMBER






// ---------------------------- NOTES -------------------------------------
// 1. If first bit is 1 then number is Negative number
// 2. if we use left shift operator then answer is multiply by 2.   [ (5<<1) =  10 ]
// 2. if we use right shift operator then answer is divide by 2.   [ (5>>1) =  2 ]






// // 1. BITWISE OPERATOR
// #include<iostream>
// using namespace std;
// int main(){
//     int a = 4;
//     int b = 6;

//     cout<<" a&b : "<<(a&b)<<endl;
//     cout<<" a|b : "<<(a|b)<<endl;
//     cout<<" ~a : "<<~a<<endl;
//     cout<<" a^b : "<<(a^b)<<endl;
    
    
//     cout<<(17>>1)<<endl;
//     cout<<(17>>2)<<endl;
//     cout<<(19<<1)<<endl;
//     cout<<(21<<2)<<endl;


//     return 0;
// }




// // 2. REVERSE THE NUMBER
// #include<iostream>
// using namespace std;
// int reversedNumber(int n){
    // int ans = 0;
    // while(n>0){
    //     int lastdigit = n % 10;
    //     n = n/10;
    //     ans = ans*10 + lastdigit;
    // }

    // return ans;
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<reversedNumber(n)<<endl;
//     return 0;
// }






