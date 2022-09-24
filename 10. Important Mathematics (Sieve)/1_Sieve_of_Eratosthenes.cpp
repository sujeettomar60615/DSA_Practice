// 1. Sieve of Eratosthenes (Prime Numbers)
// 2. Prime Factorisation using Sieve




// 1. Sieve of Eratosthenes (Prime Numbers)
#include<iostream>
using namespace std;

void primeSieve(int n){

    int prime[100] = {0};

    for(int i=2; i*i<=n; i++){
        if(prime[i] == 0){
            for(int j=i*i; j<=n; j+=i){
                prime[j] = 1;
            }
        }
    }

    for(int i=2; i<=n; i++){
        if(prime[i]==0){
            cout<<i<<" ";
        }
    }
}


int main(){
    int n;
    cin>>n;
    primeSieve(n);
    return 0;
}






// // 2. Prime Factorisation using Sieve
// #include<iostream>
// using namespace std;

// void primeFactor(int n){
    
//     int spf[n+1] = {0};                 // spf (Sieve Prime Factor)
//     for(int i=2; i<=n; i++){
//         spf[i] = i;
//     }

//     for(int i=2; i<=n; i++){
//         if(spf[i]==i){
//             for(int j=i*i; j<=n; j+=i){
//                 if(spf[j]==j){
//                     spf[j]=i;
//                 }
//             }
//         }
//     }

//     while(n!=1){
//         cout<<spf[n]<<" ";
//         n = n/spf[n];
//     }

// }

// int main(){

//     int n;
//     cin>>n;

//     primeFactor(n);
//     return 0;
// }