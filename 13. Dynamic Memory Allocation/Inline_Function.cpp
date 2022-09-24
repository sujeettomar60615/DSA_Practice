// Use of Inline Function 
// Inline function works as same as macros it will also replace things
// Function calls replaced with function body before compile the program
// inline function don't make a new memory 
 
#include<iostream>
using namespace std;

inline int getMax(int a, int b){
    return (a>b) ? a : b;
}

int main(){

    int a = 1, b = 2;
    int ans = 0;

    ans = getMax(a,b);
    cout<<ans<<endl;

    a = a+3;
    b = b+1;

    ans = getMax(a,b);
    cout<<ans<<endl;
    return 0;
}