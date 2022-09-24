// // 1st program
// #include<iostream>
// #include "Hero.cpp" // is file ko include krne ke baad ab hame is program me class ko dobara nhi likhna padega
// using namespace std;   // isi tarah hm kisi bhi class ko khi bhi use kr skte h bs file ko include krke

// // class Hero{

// //     //properties
// //     int health;
// //     int age;
// // };

// int main(){
//     // creation of Objects
//     Hero Ramesh;
//     cout<<"size is "<<sizeof(Ramesh)<<endl;

//     return 0;
// }



// // 2nd program  (Object Creation and data access)
// #include<iostream>
// using namespace std;

// class Hero{

//     //properties
//     public:
//     int health;
//     char level;

//     void print(){
//         cout<<level<<endl;    
//     }
// };

// int main(){
//     // creation of Objects
//     Hero Ramesh;
//     Ramesh.health = 70;
//     Ramesh.level = 'A';

//     cout<<"Health is "<<Ramesh.health<<endl;
//     cout<<"level is "<<Ramesh.level<<endl;  
//     return 0;
// }




// // 3rd program    (Getter or Setter)
// // getter or setter ki help se hm kisi bhi private member ko access kr skte hai

// #include<iostream>
// using namespace std;

// class Hero{

//     //properties
//     private:
//     int health;

//     public:
//     char level;

//     int gethealth(){
//         return health;
//     }

//     char getlevel(){
//         return level;
//     }

//     void sethealth(int h){
//         health = h;
//     }

//     void setlevel(char ch){
//         level = ch;
//     }

// };

// int main(){
//     // creation of Objects
//     Hero Ramesh;
//     Ramesh.sethealth(70);  // setter ka use h ki indirectly private member ko access krna or new value set kr dena
//     Ramesh.level = 'A';
    
//     cout<<"Health is "<<Ramesh.gethealth()<<endl;  // getter ka use h ki indirectly private member ko access krna
//     cout<<"level is "<<Ramesh.level<<endl;  
//     return 0;
// }





// // 4th program   (Static or Dynamic Allocation)
// #include<iostream>
// using namespace std;

// class Hero{

//     //properties
//     private:
//     int health;

//     public:
//     char level;

//     int gethealth(){
//         return health;
//     }

//     char getlevel(){
//         return level;
//     }

//     void sethealth(int h){
//         health = h;
//     }

//     void setlevel(char ch){
//         level = ch;
//     }

// };

// int main(){
    
//     // // Static Allocation
//     // Hero ramesh;
//     // ramesh.sethealth(80);
//     // ramesh.level = 'B';
//     // cout<<"Level is "<< ramesh.level<<endl;
//     // cout<<"Health is "<< ramesh.gethealth()<<endl;


//     // // Dynamically[1] Allocation
//     // Hero *b = new Hero;
//     // (*b).level = 'A';
//     // (*b).sethealth(70);
//     // cout<<"Level is "<<(*b).level<<endl;
//     // cout<<"Health is "<<(*b).gethealth()<<endl;

//     // Dynamically[2] Allocation Alternate writing method 
//     Hero *b = new Hero;
//     b->level = 'A';
//     b->sethealth(70);
//     cout<<"Level is "<<b->level<<endl;
//     cout<<"Health is "<<b->gethealth()<<endl;
//     return 0;
// }






// // 5th program     (parameterised Constructor)
// #include<iostream>
// using namespace std;

// class Hero{

//     //properties
//     private:
//     int health;

//     public:
//     char level;

//     // Hero(){
//     //     cout<<"Constructor called"<<endl;
//     // }

//     // parameterised Constructor
//     Hero(int health){
//         cout<<"this -> "<<this<<endl;
//         this -> health = health;
//     }

//     Hero(int health, char level){
//         cout<<"this -> "<<this<<endl;
//         this -> health = health;
//         cout<<"this -> "<<this<<endl;
//         this -> level = level;
//     }

//     int gethealth(){
//         return health;
//     }

//     char getlevel(){
//         return level;
//     }

//     void sethealth(int h){
//         health = h;
//     }

//     void setlevel(char ch){
//         level = ch;
//     }

// };

// int main(){
    
//     // Static Allocation
//     Hero ramesh(10);
//     cout<<"Adress of ramesh "<< &ramesh <<endl;
//     ramesh.gethealth();   

//     // // Dynamic Allocation
//     // Hero *h = new Hero(11);

//     return 0;
// }







// // 6th program   (USE OF COPY CONSTRUCTOR or Deep Copy)
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// class Hero{

//     //properties
//     private:
//     int health;

//     public:
//     char *name;  // Dynamically allocate
//     char level;

//     Hero(){
//         cout<<"Simple Constructor called"<<endl;
//         name = new char[100];
//     }

//     // parameterised Constructor
//     Hero(int health){
//         this -> health = health;
//     }

//     Hero(int health, char level) {
//         this -> level = level;
//         this -> health = health;
//     }

//     // COPY CONSTRUCTOR
//     Hero(Hero& temp){

//         char *ch = new char[strlen(temp.name) + 1];
//         strcpy(ch, temp.name);
//         this->name = ch;

//         cout<<"Copy Constructor Called"<<endl;
//         this->health = temp.health;
//         this->level = temp.level;
//     }

//     void print(){
//         cout<<endl;
//         cout<<"[ Name: "<<this->name<<" ,";
//         cout<<"Health: "<<this->health<<" ,";
//         cout<<"Level: "<<this->level<<" ] ";
//         cout<<endl;
//     }

//     int gethealth(){
//         return health;
//     }

//     char getlevel(){
//         return level;
//     }

//     void sethealth(int h){
//         health = h;
//     }

//     void setlevel(char ch){
//         level = ch;
//     }

//     void setName(char name[]){
//         strcpy(this->name, name);
//     }

// };

// int main(){
    
//     Hero hero1;

//     hero1.sethealth(12);
//     hero1.setlevel('D');
//     char name[7] = "Babbar";
//     hero1.setName(name);
//     hero1.print();


//     Hero hero2(hero1);
//     hero2.print();


//     hero1.name[0] = 'G';
//     hero1.print();

//     hero2.print();
//     return 0;
// }




// // DEFAULT CONSTRUCTOR SHALLOW COPY KRTA HAI OR APNA LIKHA HUA CONSTRUCTOR DEEP COPY KRTA HAI
// // 7th program   ( Use of Default COPY CONSTRUCTOR  or Shallow copy)
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// class Hero{

//     //properties
//     private:
//     int health;

//     public:
//     char *name;  // Dynamically allocate
//     char level;

//     Hero(){
//         cout<<"Simple Constructor called"<<endl;
//         name = new char[100];
//     }

//     // parameterised Constructor
//     Hero(int health){
//         this -> health = health;
//     }

//     Hero(int health, char level) {
//         this -> level = level;
//         this -> health = health;
//     }

//     // // COPY CONSTRUCTOR
//     // Hero(Hero& temp){
//     //     cout<<"Copy Constructor Called"<<endl;
//     //     this->health = temp.health;
//     //     this->level = temp.level;
//     // }

//     void print(){
//         cout<<endl;
//         cout<<"[ Name: "<<this->name<<" ,";
//         cout<<"Health: "<<this->health<<" ,";
//         cout<<"Level: "<<this->level<<" ] ";
//         cout<<endl;
//     }

//     int gethealth(){
//         return health;
//     }

//     char getlevel(){
//         return level;
//     }

//     void sethealth(int h){
//         health = h;
//     }

//     void setlevel(char ch){
//         level = ch;
//     }

//     void setName(char name[]){
//         strcpy(this->name, name);
//     }

// };

// int main(){
    
//     Hero hero1;

//     hero1.sethealth(12);
//     hero1.setlevel('D');
//     char name[7] = "Babbar";
//     hero1.setName(name);
//     hero1.print();


//     // use default copy constructor
//     Hero hero2(hero1);
//     // Hero hero2 = hero1;
//     hero2.print();


//     hero1.name[0] = 'G';
//     hero1.print();

//     hero2.print();

//     return 0;
// }




