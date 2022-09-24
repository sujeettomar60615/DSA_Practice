// // STRING METHODS
// // QUESTION 1  CONVERT INTO UPPERCASE AND LOWERCASE LETTERS
// // QUESTION 2  FORM THE BIGGEST NUMBER FROM THE NUMERIC STRING
// // QUESTION 3  MAXIMUM TIME OCCUR CHARCTER
// // QUESTION 4  Compression of strings







// // STRING METHODS
// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){

//     string str = "adsjgfythfbvhjbe";

//     // Convert into Upper Case

//     for(int i=0; i<str.size(); i++){
//         if(str[i] >= 'a' && str[i] <= 'z'){
//             str[i] -= 32;
//         }
//     }
//     cout<<str<<endl;
   
   
//    // Convert into Lower Case

//     for(int i=0; i<str.size(); i++){
//         if(str[i] >= 'A' && str[i] <= 'Z'){
//             str[i] += 32;
//         }
//     }
//     cout<<str<<endl;
//     return 0;
// }






// // QUESTION 1 CONVERT INTO UPPERCASE AND LOWERCASE LETTERS
// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){

//     string s = "sujeetsinghtomar";
    
//     transform(s.begin(),s.end(),s.begin(),::toupper);
//     cout<<s<<endl;
    
    
//     transform(s.begin(),s.end(),s.begin(),::tolower);
//     cout<<s<<endl;
//     return 0;
// }








// // QUESTION 2  FORM THE BIGGEST NUMBER FROM THE NUMERIC STRING
// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){

//     string s = "5627468";
    
//     sort(s.begin(),s.end(), greater<int>());
//     cout<<s<<endl;
    
//     return 0;
// }






// // QUESTION 3  MAXIMUM TIME OCCUR CHARCTER
// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
//     string s = "wnuifrugrgfgfffggffcsdn";
//     int freq[26];

//     for(int i=0; i<26; i++){
//         freq[i] = 0;
//     }

//     for(int i=0; i<s.size(); i++){
//         freq[s[i]-'a']++;
//     }

//     char ans = 'a';
//     int maxF = 0;

//     for(int i=0; i<26; i++){
//         if(freq[i] > maxF){
//             maxF = freq[i];
//             ans = i+'a';
//         }
//     }

//     cout<<ans<<endl;
//     cout<<maxF<<endl;

//     return 0;
// }








// // QUESTION 4  Compression of strings
// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
//     string s = "tkcbbkygtgdshjgfffffdsjh";
//     int n = s.size();
//     // Delete repeating element

//     int ans[100];
//     ans[0] = s[0];
//     int count = 1;
//     for(int i=1; i<n; i++){
//         if(s[1] != s[i-1]){
//             ans[count] = s[i], count++;
//         }
//     }

//     cout<<ans<<endl;
//     return 0;
// }