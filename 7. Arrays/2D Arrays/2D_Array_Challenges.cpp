// // QUESTION 1 [Transpose of Matrix]
// // QUESTION 2   [Multiplication of Matrix]
// // QUESTION 3   [Matrix  Search  (Brute Force Approach)]
// // QUESTION 4  [Matrix  Search  (Optimised Approach)]





// // QUESTION 1  [Transpose of Matrix]
// #include<iostream>
// using namespace std;
// int main(){
//     // int n;
//     // cin>>n;

//     // int arr[n][n];
//     // for(int i=0; i<n; i++){
//     //     for(int j=0; j<n; j++){
//     //         cin>>arr[n][n];
//     //     }
//     // }
//     int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    
//     for(int i=0; i<3; i++){
//         for(int j=i; j<3; j++){
//             //swap
//             int temp =arr[i][j];
//            arr[i][j] =arr[j][i];
//            arr[j][i] = temp;
//         }
//     }
    
    
//     // print
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }






// // QUESTION 2   [Multiplication of Matrix]
// #include<iostream>
// using namespace std;
// int main(){
//     int n1, n2, n3;
//     cin>>n1>>n2>>n3;

//     int m1[n1][n2];
//     int m2[n2][n3];

// // for input m1
//     for(int i=0; i<n1; i++){
//         for(int j=0; j<n2; j++){
//             cin>>m1[i][j];
//         }
//     }

// // for input m2   
//     for(int i=0; i<n2; i++){
//         for(int j=0; j<n3; j++){
//             cin>>m2[i][j];
//         }
//     }

// // for declare ans[]
//     int ans[n1][n3];
//     for(int i=0; i<n1; i++){
//         for(int j=0; j<n3; j++){
//             ans[i][j] = 0;
//         }
//     }

// // main logic
//     for(int i=0; i<n1; i++){
//         for(int j=0; j<n3; j++){
//             for(int k=0; k<n2; k++){
//                 ans[i][j] += m1[i][k]*m2[k][j];
//             }
//         }
//     }

// // print ans
//     for(int i=0; i<n1; i++){
//         for(int j=0; j<n3; j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }






// // QUESTION 3   [Matrix  Search  (Brute Force Approach)]
// #include<iostream>
// using namespace std;
// int main(){

//     int target;
//     cin>>target;


//     // int n,m;
//     // cin>>n>>m;

//     // int arr[n][m];
//     // for(int i=0; i<n; i++){
//     //     for(int j=0; j<m; j++){
//     //         cin>>arr[i][j];
//     //     }
//     // }


//     int arr[5][5] = {{1, 4, 7, 11, 15},{2, 5, 8, 12, 19},{3, 6, 9, 16, 22},{10, 13, 14, 17, 24},{18, 21, 23, 26, 30}};

//     bool flag = false;
//     for(int i=0; i<5; i++){
//         for(int j=0; j<5; j++){
//             if(arr[i][j]==target){
//                 flag = true;
//             }
//         }
//     }

//     if(flag){
//         cout<<"Found"<<endl;
//     }
//     else{
//         cout<<"Not Found"<<endl;
//     }

//     return 0;
// }







// // QUESTION 4  [Matrix  Search  (Optimised Approach)]
// #include<iostream>
// using namespace std;
// int main(){

//     int n,m,target;
//     cin>>n>>m>>target;

//     int arr[n][m];
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cin>>arr[i][j];
//         }
//     }


//     // int arr[5][5] = {{1, 4, 7, 11, 15},{2, 5, 8, 12, 19},{3, 6, 9, 16, 22},{10, 13, 14, 17, 24},{18, 21, 23, 26, 30}};

//     bool flag = false;
//     int r = 0;
//     int c = m-1;
//     while (r<m && c>=0){
//         if(arr[r][c]==target){
//             cout<<r<<", "<<c<<endl;
//             flag = true;
//         }
        
//         if(arr[r][c]>target){
//             c--;
//         }
//         else{
//             r++;
//         }
//     }
    
//     if(flag){
//         cout<<"Element Found"<<endl;
//     }
//     else{
//         cout<<"Element does not exist"<<endl;
//     }

//     return 0;
// }
