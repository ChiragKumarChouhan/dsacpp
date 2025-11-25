#include<iostream>
#include <cstring>
using namespace std;

int main(){
    char str[]={'a','b','c','d','\0'};
    cout<<str<<endl;
    cout<<strlen(str)<<endl; // consonant pointers
    cout<<"enter chat array: "; // dont give any space
    cin.getline(str,100 ,'$');
    // cin>>str; remove in if you use *cin.getline(dtr,len,delim?)
    cout<<"output: "<<str<<endl;

    char str2[12];
    cout<<"enter char array:";
    cin.getline(str2,12);
    // for(char ch:str2){
    //     cout<<ch<<" ";

    // }
    int len=0;
    for(int i=0;str[i]!='\0';i++){
    len++; //also count space
    }
    cout<<len;
    cout<<endl;

    //addtion of two string
    string str1="chirag";
    string str2="kumar";
    string str3="chouhan";
    string str4 = str1+str2+str3;// called concatenation
    cout<<(str1==str2)<<endl;
       cout<<(str1<=str2)<<endl;// work acc to english alphanets position
    cout<<str4<<endl;
    // lenght function
    cout<<str.length()<<endl;

    //using alteration loop

    string king ="virat kohli";
    for(int i=0;i<str.length();i++){
    cout<<str[i]<<" ";

    }
    cout<<endl;

  //reverse of a string
  string goat="ms dhoni";
  for(int i=0;i<string.length();i++){
    for(int j=string.length()-1;j>i;j--){
    swap(goat[i],goat[j]);

    }

  }
 cout<<goat<<endl;
    return 0;
}
