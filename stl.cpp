#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;

int main(){
    // deque<int> d={1,2,3,4,5,6};
    // for(int val:d){
    //     cout<<val<<" ";

    // }
    // cout<<endl;
    pair<int,int>p1={3,5};
pair<char,int>p2={'a',1};
cout<<p1.first<<endl;
cout<<p1.second<<endl;

    return 0;
}
//pair

#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;
int main(){
    vector<pair<int,int>> vec={{1,2},{2,3},{3,4}};
    vec.push_back({4,5});//extra addition in the pair
vec.emplace_back(4,5);//in-place objects create

// push_back inserrt a extra pair in to the existing pair
// other hand emplace_back do not need to have any pre existing pair it is make a new pair by itself
    for(auto p:vec){
        cout<<p.first<<" "<<p.second<<endl;
    }
}
