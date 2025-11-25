#include<iostream>
using namespace std;

void printdig(int n ){
    while(n!=0){
        int dig=n%10;
        cout<<dig<<endl;

        n=n/10;
    }
}
int main (){
    int n =2006;
    printdig(n);
    return 0;
}
