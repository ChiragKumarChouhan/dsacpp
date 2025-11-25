#include<iostream>

using namespace std;

int main(){
    // arithmetic operators
int a = 77;
int b = 878;

int sum = a+b;
int dif = a-b;
int multi = a*b;

cout<<"sum= "<<sum<<endl;
cout<<"dif= "<<dif<<endl;
cout<<"multi= "<<multi<<endl;

// relational operators

cout<<(3<5)<<endl;
cout<<(3>5)<<endl;
cout<<(3<=5)<<endl;
cout<<(3<=3)<<endl;
cout<<(5==5)<<endl;

// logical operators 

cout<<(3<5) || (5<1);
cout<<(3<5) && (5>1);

return 0;

}