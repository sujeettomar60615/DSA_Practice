// // Example 1  Check Palindrome  [RACECAR, NITIN, ANNA]
// // Example 2  Largest word in a Sentence






// TAKING INPUT OR PRINTING OUTPUT
// #include<iostream>
// using namespace std;
// int main(){
//     char arr[100];
//     cin>>arr;
//     cout<<arr;
//     return 0;
// }






// // Example 1  Check Palindrome                               [RACECAR, NITIN, ANNA]
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     char arr[n+1];
//     cin>>arr;

//     bool check = true;
//     for(int i=0; i<n; i++){
//         if(arr[i] != arr[n-1-i]){
//             check = false;
//             break;
//         }
//     }

//     if(check){
//         cout<<"Word is a Pallindrome"<<endl;
//     }
//     else{
//         cout<<"Word is not a Pallindrome"<<endl;
//     }
//     return 0;
// }








// // Example 2  Largest word in a Sentence
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     cin.ignore();

//     char arr[n+1];
//     cin.getline(arr,n);
//     cin.ignore();

//     int i=0;
//     int currLen = 0, maxLen = 0;
//     int st = 0, maxst = 0;

//     while(1){
//         if(arr[i] == ' ' || arr[i] == '\0'){
//             if(currLen>maxLen){
//                 maxLen = currLen;
//                 maxst = st;
//             }
//             currLen = 0;
//             st = i+1;
//         }
//         else{
//             currLen++;
//         }
//         if(arr[i] == '\0'){
//             break;
//         }
//         i++;
//     }


//     cout<<maxLen<<endl;
//     for(int i=0; i<maxLen; i++){
//         cout<<arr[i+maxst];
//     }

//     return 0;
// } 