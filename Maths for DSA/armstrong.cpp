#include<iostream>
using namespace std;

bool isarm(int n ){
    int copy=n;
    int sumofcubes=0;
    while(n!=0){
        int dig=n%10;
        sumofcubes+=(dig*dig*dig);
        n=n/10;
    }
    return sumofcubes==copy;
}
int main(){
    int n =153;
    if(isarm(n)){
        cout<<"armstrong"<<endl;
    }else{
        cout<<"not a armstrong"<<endl;
    }
    return 0;
}
