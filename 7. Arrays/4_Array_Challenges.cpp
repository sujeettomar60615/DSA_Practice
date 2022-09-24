// // CHALLENGE - 1    [ MAX TILL i ]
// // CHALLENGE - 2    [SUM OF ALL SUBARRAYS]
// // CHALLENGE - 3    [LONGEST ARITHEMATIC SUBARRAY  by  Google Kickstart]
// // CHALLENGE - 4    [RECORD BREAKER  by  Google Kickstart]







// // CHALLENGE - 1    [ MAX TILL i ]
// #include<iostream>
// using namespace std;
// int main(){
//     int mx = -9999999;
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     for(int i=0; i<n; i++){
//         mx = max(mx, arr[i]);
//         cout<<mx<<", ";
//     }
//     return 0;
// }







// // CHALLENGE - 2        [SUM OF ALL SUBARRAYS]
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     for(int i=0; i<n; i++){
//         int current = 0;
//         for(int j=i; j<n; j++){
//             current += arr[j];
//             cout<<current<<", ";
//         }
//     }
//     return 0;
// }






// // CHALLENGE - 3        [LONGEST ARITHEMATIC SUBARRAY  by  Google Kickstart]
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     int ans = 2;
//     int current = 2;
//     int j = 2;
//     int pd = arr[1]-arr[0];

//     while(j<n){
//         if(pd==arr[j]-arr[j-1]){
//             current++;
//         }
//         else{
//             pd = arr[j]-arr[j-1];
//             current = 2;
//         }
//         ans = max(ans, current);
//         j++;
//     }

//     cout<<ans<<endl;
//     return 0;
// }






// // CHALLENGE - 4        [RECORD BREAKER  by  Google Kickstart]
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int arr[n+1];
    
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     arr[n]= -1;

//     if(n==1){
//         cout<<"1"<<endl;
//         return 0;
//     }

//     int ans = 0;
//     int mx = -1;

//     for(int i=0; i<n; i++){
//         if(arr[i]>mx && arr[i]>arr[i+1]){
//             ans++;
//         }
//         mx = max(mx, arr[i]);
//     }

//     cout<<ans<<endl;

    
// return 0;
// }