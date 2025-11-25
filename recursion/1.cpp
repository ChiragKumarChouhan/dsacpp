#include<iostream>
using namespace std;

int nums(int n){
    if(n==1){
        return 1;
    }else{
        cout<<n<<endl;
        return nums(n-1);
    }
}


int main(){
    int n =8;
    cout<<nums(n)<<endl;
    return 0;
}
