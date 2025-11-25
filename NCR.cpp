#include<iostream>
using namespace std;

int ncr(int n,int r){
    int fact = 1; 
    int dr = 1;
    int wa = 1;
    for(int i=1;i<=n;i++){
         fact = fact*i;
    }
    for(int i =1;i<=r;i++){
         dr = dr*i;
    }
    int  a = n-r;
    for(int i = 1;i<=a;i++){
         wa = wa*i;
    }
    return fact /(dr*wa);
}
int main(){
    cout<<ncr(12, 2)<<endl;
    cout<<ncr(1, 1)<<endl;
    return 0;
}


