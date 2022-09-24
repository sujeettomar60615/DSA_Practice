// // SYNTAX OF TAKING INPUT AND PRINTING OUTPUT
// // QUESTION 1  [Searching a Element in Matrix]
// // QUESTION 2  [Spiral Order Matrix Traversal]






// // SYNTAX OF TAKING INPUT AND PRINTING OUTPUT
// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int arr[n][m];

//     // // Taking ROW WISE Input in 2 - Dimensional Array
//     // for(int row=0; row<n; row++){
//     //     for(int col=0; col<m; col++){
//     //         cin>>arr[row][col];
//     //     }
//     // }


//     // Taking COLUMN WISE Input in 2 - Dimensional Array
//     for(int col=0; col<m; col++){
//         for(int row=0; row<n; row++){
//             cin>>arr[row][col];
//         }
//     }


//     // Printing Output in 2 - Dimensional Array
//     for(int row=0; row<n; row++){
//         for(int col=0; col<m; col++){
//             cout<<arr[row][col]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;

//     return 0;
// }



// // QUESTION 1                        [Searching a Element in Matrix]
// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cin>>x;
    
//     int n,m;
//     cin>>n>>m;

//     int arr[n][m];
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cin>>arr[i][j];
//         }
//     }

//     bool flag = false;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             if(arr[i][j] == x){
//                 cout<<i<<" "<<j<<endl;
//                 flag = true;
//             }
//         }
//     }

//     if(flag){
//         cout<<"Element is Found\n";
//     }
//     else{
//         cout<<"Element is not Found\n";
//     }
//     return 0;
// }






// // QUESTION 2                        [Spiral Order Matrix Traversal]
// #include<iostream>
// using namespace std;
// int main(){
    // int n,m;
    // cin>>n>>m;

    // int arr[n][m];
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m; j++){
    //         cin>>arr[i][j];
    //     }
    // }

//     // Spiral order Print
//     int row_start = 0;
//     int row_end = n-1;
//     int column_start = 0;
//     int column_end = m-1;

//     while(row_start<=row_end && column_start<=column_end){
       
//         // for row_start
//         for(int col=column_start; col<=column_end; col++){
//             cout<<arr[row_start][col]<<" ";
//         }
//         row_start++;


//         // for column_end
//         for(int row=row_start; row<=row_end; row++){
//             cout<<arr[row][column_end]<<" ";
//         }
//         column_end--;


//         // for row_end
//         for(int col=column_end; col>=column_start; col--){
//             cout<<arr[row_end][col]<<" ";
//         }
//         row_end--;


//         // for column_start
//         for(int row=row_end; row>=row_start; row--){
//             cout<<arr[row][column_start]<<" ";
//         }
//         column_start++;
//     }

//     return 0;
// }



// // QUESTION 3                      [Row Wise Sum]
// #include<iostream>
// using namespace std;
// // int rowwiseSum(int arr[][col], int row, int col){
//       // it is doubt (if we don't have col so I can't use Functional approach)
// // }
// int main(){
//     int row,col;
//     cin>>row>>col;

//     int arr[row][col];
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             cin>>arr[i][j];
//         }
//     }

//     // cout<<rowwiseSum(arr, row, col);
//     for(int i=0; i<row; i++){
//         int sum = 0;
//         for(int j=0; j<col; j++){
//             sum += arr[i][j];
//         }
//         cout<<"Sum of "<<i<<"th row is "<<sum<<endl;
//     }
    
//     return 0;
// }




