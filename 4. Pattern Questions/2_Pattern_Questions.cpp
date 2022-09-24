// 30 Pattern Questions of Love Babbar


// // QUESTION 1
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }





// // QUESTION 2
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=n-1; j>=0; j--){
//             cout<<j+1<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }





// // QUESTION 3
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }





// // QUESTION 4
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int count = 1;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout<<count<<" ";
//             count++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }





// // QUESTION 5
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int count = 1;

//     int i=1;
//     while(i<n){
//         int j=1;
//         while(j<n){
//             cout<<count<<" ";
//             count++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }





// // TRIANGLE PATTERN


// // QUESTION 6
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
    
//     for(int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }




// // QUESTION 7
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
    
//     for(int i=1; i<=n; i++){
//         for(int j=0; j<=i; j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }




// // QUESTION 8
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
    
//     int row = 1;
//     while(row<=n){
//         int col = 1;
//         while(col<=row){
//             cout<<row<<" ";
//             col++;
//         }
//         cout<<endl; 
//         row++;
//     }
//     return 0;
// }





// // QUESTION 9
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
    
//     int count = 1;
//     int row = 1;
//     while(row<=n){
//         int col = 1;
//         while(col<=row){
//             cout<<count<<" ";
//             count++;
//             col++;
//         }
//         cout<<endl; 
//         row++;
//     }
//     return 0;
// }






// // QUESTION 10
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
    
//     for(int i=1; i<=n; i++){
//         int value = i;
//         for(int j=1; j<=i; j++){
//             cout<<value<<" ";
//             value += 1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }





// // QUESTION 11
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
    
//     for(int i=1; i<=n; i++){
//         for(int j=0; j<i; j++){
//             cout<<i+j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }






// // QUESTION 12
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int row =1;
//     while(row<=n){
//         int value = row;
//         int col = 1;
//         while(col<=row){
//             cout<<value<<" ";
//             value -= 1;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }






// // QUESTION 13
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         int j=1;
//         char ch = 'A'+i-1;
//         while(j<=n){
//             cout<<ch<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }






// // QUESTION 14
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             char ch = 'A'+j-1;
//             cout<<ch<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }






// // QUESTION 15
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int count = 0;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             char ch = 'A' + count;
//             cout<<ch<<" ";
//             j++;
//             count++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }





// // QUESTION 16
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int row =1;
//     while(row<=n){
//         char ch = 'A'+row-1;
//         int col = 1;
//         while(col<=row){
//             cout<<ch<<" ";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }





// // QUESTION 17
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int count = 0;
//     int row =1;
//     while(row<=n){
//         int col = 1;
//         while(col<=row){
//             char ch = 'A'+ count;
//             cout<<ch<<" ";
//             count++;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }




// // QUESTION 18
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int row =1;
//     while(row<=n){
        
//         int col =1;
//         char ch = 'A'+n-row;
//         while(col<=row){
//             cout<<ch<<" ";
//             ch = 'A'+n-row+col;
//             col++;
//         }

//         cout<<endl;
//         row++;
//     }
//     return 0;
// }





// // QUESTION 19
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int row = 1;
//     while(row<=n){
//         char ch = 'A'+ row-1;
//         int col = 1;
//         while(col<=n){
//             char ch = 'A'+ row-1 + col-1;
//             cout<<ch<<" ";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }




// // QUESTION 20
// #include<iostream>
// using namespace std;
// int main(){
//     int n; 
//     cin>>n;

//     int row = 1;
//     while(row<=n){
//         int col = 1;
//         while(col<=n){
//             if(col<=n-row){
//                 cout<<"  ";
//             }
//             else{
//                 cout<<"* ";
//             }
            
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }

//     return 0;
// }






// // QUESTION 21
// #include<iostream>
// using namespace std;
// int main(){
//     int n; 
//     cin>>n;

//     int row = 1;
//     while(row<=n){

//         // space print krlo
//         int space=n-row;
//         while(space){
//             cout<<"  ";
//             space = space - 1;
//         }

//         // star print krlo
//         int col = 1;
//         while(col<=row){
//             cout<<"* ";
//             col = col + 1;
//         }
//         cout<<endl;
//         row++;
//     }

//     return 0;
// }





// // QUESTION 22
// #include<iostream>
// using namespace std;
// int main(){
//     int n; 
//     cin>>n;

//     int row = 1;
//     while(row<=n){

//         // star print krlo
//         int star=n-row+1;
//         while(star){
//             cout<<"* ";
//             star = star - 1;
//         }
        
//         cout<<endl;
//         row++;
//     }

//     return 0;
// }






// // QUESTION 23
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int row =1;
//     while(row<=n){

//         // space print krlo
//         int space = row -1;
//         while(space){
//             cout<<" ";
//             space = space -1;
//         }


//         //  star print krlo
//         int col =n-row +1;
//         while(col){
//             cout<<"*";
//             col = col - 1;
//         }
//         cout<<endl;
//         row++;
//     }

//     return 0;
// }






// // QUESTION 24
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int row =1;
//     while(row<=n){

//         // space print krlo
//         int space = row -1;
//         while(space){
//             cout<<" ";
//             space = space -1;
//         }


//         //  star print krlo
//         int col =n-row +1;
//         int i = row;
//         while(col){
//             cout<<i;
//             i++;
//             col = col - 1;
//         }
//         cout<<endl;
//         row++;
//     }

//     return 0;
// }






// // QUESTION 25
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int row =1;
//     while(row<=n){

//         // space print krlo
//         int space = row -1;
//         while(space){
//             cout<<" ";
//             space = space -1;
//         }


//         //  star print krlo
//         int col =n-row +1;
//         while(col){
//             cout<<row;
//             col = col - 1;
//         }
//         cout<<endl;
//         row++;
//     }

//     return 0;
// }






// // QUESTION 26
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int row =1;
//     while(row<=n){

//         // space print krlo
//         int space = n - row;
//         while(space){
//             cout<<"  ";
//             space = space -1;
//         }


//         //  star print krlo
//         // for(int col=n-row+1; col<=n; col++){
//         //     cout<<row;
//         // }

//         int col = n-row+1;
//         while(col<=n){
//             cout<<row<<" ";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }






// // QUESTION 27
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int row =1;
//     while(row<=n){

//         // space print krlo
//         int space = n - row;
//         while(space){
//             cout<<"  ";
//             space = space -1;
//         }


//         //  star print krlo

//         int col = n-row+1;
//         int i = row;
//         while(col<=n){
//             cout<<i<<" ";
//             i++;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }






// // QUESTION 28
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int row =1;
//     int i =1;
//     while(row<=n){

//         // space print krlo
//         int space = n - row;
//         while(space){
//             cout<<"  ";
//             space = space -1;
//         }


//         //  star print krlo

//         int col = n-row+1;
//         while(col<=n){
//             cout<<i<<" ";
//             i++;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }






// // QUESTION 29
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int row =1;
//     while(row<=n){

//         // space print krlo
//         int space = n - row;
//         while(space){
//             cout<<"  ";
//             space = space -1;
//         }


//         //  star print krlo

//         int col = 1;
//         while(col<=row){
//             cout<<col<<" ";
//             col++;
//         }

//         int start = row-1;
//         while(start){
//             cout<<start<<" ";
//             start = start - 1;
//         }


    
//         cout<<endl;
//         row++;
//     }
//     return 0;
// }






// // important question hai agar koi pattern ki symmetry print krani hai to usi code ko niche dubara lokhdo same is question ki tarah
// // QUESTION 30
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int row=1;
//     while (row<=n){

//         //print 1st triangle 
//         for(int col=1; col<=n-row+1; col++){
//             cout<<col<<" ";
//         }


//         // print 2nd triangle
//         for(int col=row-1; col>0; col--){
//             cout<<"* ";
//         }


//         // print 3rd triangle
//         for(int col=row-1; col>0; col--){
//             cout<<"* ";
//         }

        
//         //print 1st triangle 
//         for(int col=1; col<=n-row+1; col++){
//             cout<<col<<" ";
//         }


//         cout<<endl;
//         row++;
//     }
    
//     return 0;
// }