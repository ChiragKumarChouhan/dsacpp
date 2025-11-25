#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string,int>m;
    multimap<string,int>a;
    a.emplace("tev",100);
     a.emplace("tev",100);
      a.emplace("tev",100);
       a.emplace("tev",100);
        a.emplace("tev",100);
    m["tv"]=100;
    m["laptop"]=100;
    m["headphones"]=120;
    m["watch"]=50;
    m.emplace("camera",25);
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
       //sort by itself
    }
     for(auto p:a){
        cout<<p.first<<" "<<p.second<<endl;
       //sort by itself
    }
}
//key always should be uniqe

//other map

//unorderd_map


