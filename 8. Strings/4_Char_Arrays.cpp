// CHARACTER ARRAYS


// // TAKING INPUT AND PRINTING OUTPUT
// #include<iostream>
// using namespace std;

// // reverse function needed length of a string
// void reverse(char name[], int n){
//     int s = 0;
//     int e = n-1;
//     while(s<e){
//         swap(name[s++], name[e--]);
//     }
// }

// int getlength(char name[]){
//     int count = 0;
//     for(int i=0; name[i] != '\0'; i++){
//         count++;
//     }
//     return count;
// }

// int main(){
//     char name[20];

//     cout<<"Enter your name : ";
//     cin>>name;
//     // name[2] = '\0';

//     cout<<"Your name is "<<name<<endl;

//     int len = getlength(name); 
//     cout<<"Length : "<<len<<endl;

//     reverse(name, len);
//     cout<<"Your name is "<<name<<endl;


//     return 0;
// }





// // Convert Uppercase to Lowercase
// #include<iostream>
// using namespace std;

// char toLowerCase(char ch){
//     if(ch >= 'a' && ch <= 'z'){
//         return ch;
//     }
//     else{
//         char temp = ch - 'A' + 'a';
//         return temp;
//     }
// }


// // Convert Lowercase to Uppercase
// char toUpperCase(char ch){
//     if(ch >= 'A' && ch <= 'Z'){
//         return ch;
//     }
//     else{
//         char temp = ch - 'a' + 'A';
//         return temp;
//     }
// }

// int main(){
//     char name[20];

//     cout<<"Enter your name : ";
//     cin>>name;

//     cout<<"Your name is "<<toLowerCase(name[1])<<endl;
//     cout<<"Your name is "<<toUpperCase(name[1])<<endl;

//     return 0;
// }
