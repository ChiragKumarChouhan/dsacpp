#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string str;

    cout<<"enter an string"<<endl;
    cin>>str;string swapstr=str;
    for(int i=0;i<str.length();i++){
        for(int j=str.length()-1;j>i;j--){
          swap(swapstr[i],swapstr[j]);
        }
    }
    if(swapstr==str){
        cout<<"string is a palindrome"<<endl;
    }else{
        cout<<"string is not a palindrome"<<endl;
    }
}
