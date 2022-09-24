// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];

//     // for taking input elements of array
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     // for printing the output
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }






// #include<iostream>
// using namespace std;
// int main(){
//     float sum = 0;
//     int marks[5];
//     for(int i=0; i<5; i++){
//         cin>>marks[i];
//     }
//     for(int i=0; i<5; i++){
//         sum += marks[i];
//     }

//     float average = sum/5;
//     float percent = (sum/500)*100;
//     cout<<"average = "<<average<<endl;
//     cout<<"percent = "<<percent<<endl;

//     return 0;
// }






// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of array : "<<endl;
//     cin>>n;

//     int arr[n];
//     cout<<"Enter the elements of array : "<<endl;
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     int num;
//     cout<<"Enter element to be searched : "<<endl;
//     cin>>num;
//     int count = 0;
//     int position;

//     for(int i=0; i<n; i++){
//         if(num == arr[i]){
//             count++;
//             position = i;
//             break;
//         }
//     }

//     if(count==0){
//         cout<<"not found ! "<<endl;
        
//     }
//     else{
//         cout<<"Element "<<num<<" is found at position "<<position<<endl;
//     }

//     return 0;
// }






// #include<iostream>
// using namespace std;
// int main(){
//     int size;
//     cout<<"Enter the size of array : "<<endl;
//     cin>>size;

//     int arr[size];
//     cout<<"Enter the elements of array : "<<endl;
//     for(int i=0; i<size; i++){
//         cin>>arr[i];
//     }

//     int largest = -9999999;
//     for(int i=0; i<size; i++){
//         if(arr[i] > largest){
//             largest = arr[i];
//         }
//     }

//     cout<<"largest number in array is : "<<largest<<endl;

//     return 0;
// }






// #include<iostream>
// using namespace std;
// int main(){
//     int size;
//     cout<<"Enter the size of array : "<<endl;
//     cin>>size;

//     int arr[size];
//     cout<<"Enter the elements of array : "<<endl;
//     for(int i=0; i<size; i++){
//         cin>>arr[i];
//     }

//     int smallest = 9999999;
//     for(int i=0; i<size; i++){
//         if(arr[i] < smallest){
//             smallest = arr[i];
//         }
//     }

//     cout<<"smallest number in array is : "<<smallest<<endl;

//     return 0;
// }







// #include<iostream>
// using namespace std;
// int main()
// {
//         int arr[100], size, i, j, temp;
//         cout<<"\n Enter Array Size : ";
//         cin>>size;
//         cout<<"\n Enter Array Elements : \n";
//         for(i=0; i<size; i++)
//         {
//                 cin>>arr[i];
//         }
//         cout<<"\n Array Elements : \n\n";
//         for(i=0; i<size; i++)
//         {
//                 cout<<arr[i]<<"\t";
//         }
//         j=i-1;  // j points to the last element and i points to the first element
//         i=0;     
//         while(i<j)
//         {
//                 temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//                 i++;
//                 j--;
//         }
//         cout<<"\n\n Reverse Array Elements : \n\n";
//         for(i=0; i<size; i++)
//         {
//                 cout<<arr[i]<<"\t";
//         }
//         return 0;
// }