#include<iostream>
using namespace std;
string isprime(int n){
    for(int i=0;i*i<=n;i++){
        if(n*i==0){
            return "notprime";
        }
    }
    return "prime";
}
int main(){
    int n=42;
    cout<<isprime(n)<<endl;
    return 0;
}
