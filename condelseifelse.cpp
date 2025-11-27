#include<iostream>
using namespace std;
int main(){
    int percentage;
    cout<<"enter your percentage";
    cin>> percentage;
    if(percentage>=90){
        cout<<"A";

    }else if(percentage>=80&&percentage<90){
        cout<<"B";
    }else{
        cout<<"C";
    }
    return 0;
}
