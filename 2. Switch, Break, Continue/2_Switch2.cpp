// 1. CALCULATOR
// 2. HOW MANY NOTES IN RUPEE




// // 1. CALCULATOR
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"Enter the value of a : "<<endl;
//     cin>>a;
//     cout<<"Enter the value of b : "<<endl;
//     cin>>b;

//     // int operation;
//     // cout<<"Choose number Which operation you want to done : "<<endl;
//     // cout<<"1. Multiply"<<endl;
//     // cout<<"2. Divide"<<endl;
//     // cout<<"3. Addition"<<endl;
//     // cout<<"4. Subtraction"<<endl;
//     // cout<<"5. Modulo"<<endl;
//     // cin>>operation;

//     char op;
//     cout<<"Which operation you want to perform : "<<endl;
//     cin>>op;

//     switch (op){
//     case '*':
//         cout<<a*b<<endl;
//         break;
//     case '/':
//         cout<<a/b<<endl;
//         break;
//     case '+':
//         cout<<a+b<<endl;
//         break;
//     case '-':
//         cout<<a-b<<endl;
//         break;
//     case '%':
//         cout<<a%b<<endl;
//         break;
//     default:
//     cout<<"Please enetr a valid operation ! ";
    
//     }
//     return 0;
// }




// // 2. HOW MANY NOTES IN RUPEE
// // How to find How many types of notes
// // ek doubt hai ki ye question switch se kese hoga

// #include<iostream>
// using namespace std;
// int main(){
//     int amount;
//     cout<<"Enter total amount : "<<endl;
//     cin>>amount;

//     if(amount>2000){
//         int ans = amount/2000;
//         cout<<"Notes of 2000 : "<<ans<<endl;
//         amount = amount%2000;
//     }

//     if(amount>500){
//         int ans = amount/500;
//         cout<<"Notes of 500 : "<<ans<<endl;
//         amount = amount%500;
//     }
    
//     if(amount>200){
//         int ans = amount/200;
//         cout<<"Notes of 200 : "<<ans<<endl;
//         amount = amount%200;
//     }

//     if(amount>100){
//         int ans = amount/100;
//         cout<<"Notes of 100 : "<<ans<<endl;
//         amount = amount%100;
//     }

//     if(amount>50){

//         int ans = amount/50;
//         cout<<"Notes of 50 : "<<ans<<endl;
//         amount = amount%50;
//     }

//     if(amount>20){
//         int ans = amount/20;
//         cout<<"Notes of 20 : "<<ans<<endl;
//         amount = amount%20;
//     }

//     if(amount>10){
//         int ans = amount/10;
//         cout<<"Notes of 10 : "<<ans<<endl;
//         amount = amount%10;
//     }

//     if(amount>1){
//         int ans = amount/1;
//         cout<<"Notes of 1 : "<<ans<<endl;
//         amount = amount%1;
//     }

//     return 0;
// }








