#include<iostream>
using namespace std;

bool prime(int n ){
    bool prime = true;
    for(int i = 2;i<=n-1;i++){
        if(n%i==0){
            prime = false;
            break;
        }
        
        }
                    return prime;

    }
    


int main(){
    cout<<prime(4);
    return 0;
}

//use right return type