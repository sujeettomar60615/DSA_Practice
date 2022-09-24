// 1. Merge Two Arrays [1st Method] this is for specially unsorted array
// 2. Merge Two Arrays [2nd Method] this is for specially sorted array




// // 1. Merge Two Arrays [1st Method] this is for specially unsorted array
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // cout<<"Hello World";
//     int n = 4, m = 3;
//     int a[n] = {1, 3, 5, 7};
//     int b[m] = {0, 4, 8};
//     int h = m + n;

//     int ans[h];
//     int q = 0;
//     for (int i = 0; i < n; i++)
//     {
//         ans[i] = a[i];
//         q++;
//     }
//     for (int i = 0; i < m; i++)
//     {
//         ans[q] = b[i];
//         q++;
//     }
//     sort(ans, ans + h);
//     for (int i = 0; i < h; i++)
//     {
//         cout << ans[i] << " ";
//     }
//     return 0;
// }








// // 2. Merge Two Arrays [2nd Method] this is for specially sorted array
// #include<iostream>
// #include<vector>
// using namespace std;

// void merge(int arr1[], int n, int arr2[], int m, int arr3[]){

//     int i = 0, j = 0;
//     int k = 0; 
//     while(i<n && j<m){
//         if(arr1[i] < arr2[j]){
//             arr3[k++] = arr1[i++];
//         }
//         else{
//             arr3[k++] = arr2[j++];
//         }
//     }

//     // first array ke bache hue elements ko copy krenge
//     while(i<n){
//         arr3[k++] = arr1[i++];
//     }

//     // Second array ke bache hue elements ko copy krenge
//     while(j<m){
//         arr3[k++] = arr2[j++];
//     }

// }

// void print(int ans[], int n){
//     for(int i=0; i<n; i++){
//         cout<<ans[i]<<" ";
//     }
//     cout<<endl;
// }


// int main(){

//     int arr1[5] = {1,3,5,7,9};
//     int arr2[3] = {2,4,6};

//     int arr3[8];
//     merge(arr1, 5, arr2, 3, arr3);
//     print(arr3, 8);
// }