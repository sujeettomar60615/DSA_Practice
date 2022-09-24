// // Question 1 Program to check if a number is even or odd.
// // Question 2 Program to find maximum, minimum among two numbers.
// // Question 3 Program to find the maximum among three numbers.
// // Question 4 Program to check if a triangle is scalene, isosceles or equilateral.
// // Question 5 Program to check if an alphabet is a vowel or a consonant.
// // Question 6  shopping with neha & rashmi





// // Question 1 Program to check if a number is even or odd.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     if(n%2==0){
//         cout<<n<<" is a Even Number\n";
//     }
//     else{
//         cout<<n<<" is a Odd Number\n";
//     }
//     return 0;
// }


// // Question 2 Program to find maximum, minimum among two numbers.
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     if(a>b){
//         cout<<a<<" is a Maximum Number\n";
//         cout<<b<<" is b Minimum Number\n";
//     }
//     else{
//         cout<<b<<" is b Maximum Number\n";
//         cout<<a<<" is a Minimum Number\n";
//     }

//     return 0;
// }



// // Question 3 Program to find the maximum among three numbers.
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cin>>a>>b>>c;
    
//     if(a>b){
//         if(a>c){
//             cout<<a<<endl;
//         }
//         else{
//             cout<<c<<endl;
//         }
//     }
//     else{
//         if(b>c){
//             cout<<b<<endl;
//         }
//         else{
//             cout<<c<<endl;
//         }
//     }

// return 0;
// }



// // Question 4 Program to check if a triangle is scalene, isosceles or equilateral.
// #include<iostream>
// using namespace std;
// int main(){
//     int sideA,sideB,sideC;
//     cin>>sideA>>sideB>>sideC;
    
//     if(sideA == sideB && sideA == sideC && sideB == sideC){
//         cout<<"Triangle ABC is a Equilateral Triangle\n";
//     }
//     else if(sideA == sideB || sideA == sideC || sideB == sideC){
//         cout<<"Triangle ABC is a Isosceles Triangle\n";
//     }
//     else{
//         cout<<"Triangle ABC is a Scalene Triangle\n";  
//     }

// return 0;
// }



// // Question 5 Program to check if an alphabet is a vowel or a consonant.
// #include<iostream>
// using namespace std;
// int main(){
//     char c;
//     cout<<"Enter an Alphabet : ";
//     cin>>c;
//     int isLowercaseVowel,isUppercaseVowel;
//     isLowercaseVowel = (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
//     isUppercaseVowel = (c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
   
//     if(isLowercaseVowel || isUppercaseVowel){
//         cout<<c<<" is a Vowel";
//     } 
//     else{
//         cout<<c<<" is a Consonant";
//     }
   
//     return 0;
// }




// // Question 6  shopping with neha & rashmi
// #include<iostream>
// using namespace std;
// int main(){
//     int savings;
//     cin>>savings;

//     if(savings>5000){
//         if(savings>10000){
//             cout<<"Roadtrip with Neha";
//         }
//         else{
//             cout<<"Shopping with Neha";
//         }
//     }
//     else if(savings>2000){
//         cout<<"Go with Rashmi\n";
//     }
//     else{
//         cout<<"Go with Friends\n";
//     }

//     return 0;
// }