//fibonaci series
#include<iostream>
using namespace std;

int fib(int n )
{
    if(n==1){
        return 1;

    }else if(n==0){
        return 0;
    }else{
        return fib(n-1)+fib(n-2);
    }
}

int main(){
    int n=4;
    cout<<fib(n)<<" "<<endl;//it gives nth fibonaci number
    for(int i=0;i<n;i++){
        cout<<fib(i)<<" ";
    }
    return 0;
}
