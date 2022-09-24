// PRIME OR NOT 
// REVERSE NUMBER
// ALBHABET OR NOT
// swapping two numbers without third variable
// LEAP YEAR OR NOT
// ARMSTRONG NUMBER OR NOT
// GCD/HCF  AND  LCM




// PRIME OR NOT

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     bool prime = true;
//     cout<<"Enter the value of n : "<<endl;
//     cin>>n;
//     for(int i=2; i<n; i++){
//         if(n%i==0){
//             prime = false;
//         }
//         else{
//             prime = true;
//         }
//     }
//     if(prime = true){
//         cout<<"n is a prime number"<<endl;
//     }
//     else{
//         cout<<"n is not prime"<<endl;
//     }
// }



// UNKNOWN QUESTION [NOT IDENTIFIED NAME OF QUESTION]

// #include<iostream>
// using namespace std;
// int main(){
//     // char str[100];
//     // cin>>str;
//     // cout<<str;

//     int n1,n2;
//     cin>>n1>>n2;
//     int count = 0;
//     for(int i=n1; i<n2; i++){
//         count = 0;
//         for(int j=2; j<i; j++){
//             if(i%j==0){
//                 count++;
//                 break;
//             }
//         }
//         if(count==0){
//             cout<<i<<endl;
//         }

//     }
//     return 0;
// }



// REVERSE NUMBER

// #include<iostream>
// using namespace std;
// int main(){
//     int num, rev=0,rem;
//     cin>>num;
//     while(num!=0){
//         rem = num%10;
//         rev = rev*10 +rem;
//         num = num/10;
//     }
//     cout<<rev<<endl;
//     return 0;
// }



// ALBHABET OR NOT

// #include<iostream>
// using namespace std;
// int main(){
//     char ch;
//     cin>>ch;
//     if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
//         cout<<ch<<" is an alphabet";
//     }
//     else{
//         cout<<ch<<" is not a alphabet";
//     }
//     return 0;
// }




// swapping two numbers without third variable
// a=a+b;
// b=a-b;
// a=a-b;





// LEAP YEAR OR NOT

// #include<iostream>
// using namespace std;
// int main()
// {
//         int year;

//         cout<<"\n Enter Year : ";
//         cin>>year;

//         if((year%4==0) && (year%100!=0))
//         {
//                 cout<<"\n This is a Leap Year";
//         }
//         else if(year%100==0)
//         {
//                 cout<<"\n This is not a Leap Year";
//         }
//         else if(year%400==0)
//         {
//                 cout<<"\n This is a Leap Year";
//         }
//         else
//         {
//                 cout<<"\n This is not a Leap Year";
//         }
//         return 0;
// }






// ARMSTRONG NUMBER OR NOT

// #include<iostream>
// using namespace std;
// int main(){
//     int num,orig,rem,ans = 0;
//     cin>>num;
//     orig = num;
//     while(num>0){
//         rem = num%10;
//         ans += rem*rem*rem;
//         num = num/10;
//     }

//     if(orig == ans){
//         cout<<"It is a Armstrong number";
//     }
//     else{
//         cout<<"it is not armstrong number";
//     }
//     return 0;
// }





// GCD/HCF  AND  LCM

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b, x, y, temp, hcf, lcm;
//     cout << "\n Enter Two Numbers : \n";
//     cin >> x >> y;
//     a = x;
//     b = y;
//     while (b != 0)
//     {
//         temp = b;
//         b = a % b;
//         a = temp;
//     }
//     hcf = a;
//     lcm = (x * y) / hcf;
//     cout << "\n HCF : " << hcf << "\n";
//     cout << "\n LCM : " << lcm << "\n";
//     return 0;
// }



