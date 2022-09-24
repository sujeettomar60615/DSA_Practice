// 1. REFRENCE VARIABLE
// 2. CREATING A VARIABLE SIZE ARRAY (WITH THE USE OF HEAP MEMORY OR DYNAMIC ALLOCATION)






// // 1. REFRENCE VARIABLE
// #include<iostream>
// using namespace std;

// void update(int &n){
//     n++;
// }

// int main(){ 
//     // int i = 5;
//     // // Create a Refrence Variavle
//     // int &j = i;
//     // cout<<i<<endl;
//     // i++;
//     // cout<<i<<endl;
//     // j++;
//     // cout<<i<<endl;

//     int n=5; 
//     cout<<"Before Update"<<endl;
//     cout<<n<<endl;
//     update(n);
//     cout<<"After Update"<<endl;
//     cout<<n<<endl;
//     return 0;
// }







// // 2. CREATING A VARIABLE SIZE ARRAY (WITH THE USE OF HEAP MEMORY OR DYNAMIC ALLOCATION)
// #include<iostream>
// using namespace std;

// int getsum(int* arr, int n){
//     int sum = 0;
//     for(int i=0; i<n; i++){
//         sum += arr[i];
//     }
//     return sum;
// }

// int main(){

//     int n;
//     cin>>n;

//     // Variable size array
//     int* arr = new int[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     int ans = getsum(arr,n);
//     cout<<ans;
//     return 0;
// }






