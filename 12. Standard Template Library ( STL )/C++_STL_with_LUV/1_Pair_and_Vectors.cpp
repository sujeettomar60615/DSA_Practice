// // PAIRS in STL
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
    
//     pair<int, string> p;
//     // // p = make_pair(2, "abc");
//     // p = {2, "abcd"};
//     // pair<int, string> &p1 = p;
//     // p1.first = 3;
//     // cout<<p.first<<" "<<p.second<<endl;

//     // int a[] = {1,2,3};
//     // int b[] = {2,3,4};
//     // pair<int, int> p_array[3];
//     // p_array[0] = {1,2};
//     // p_array[1] = {2,3};
//     // p_array[2] = {3,4};
//     // swap(p_array[0], p_array[2]);

//     // for(int i=0; i<3; ++i){
//     //     cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
//     // }

// }








// // VECTORS in STL
// #include<bits/stdc++.h>
// using namespace std;

// void printvec(vector<int> v){
//     cout<<"size : "<<v.size()<<endl;
//     for(int i=0; i<v.size(); i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     // vector<int> v;
//     // int n;
//     // cin>>n;
//     // for(int i=0; i<n; i++){
//     //     int x;
//     //     cin>>x;
//     //     v.push_back(x);
//     // }


//     vector<int> v(10, 3);
//     v.push_back(7);
//     printvec(v);
//     v.pop_back();
//     printvec(v);



//     vector<int> v2 = v;
//     v2.push_back(5);
//     printvec(v);
//     printvec(v2);
// }