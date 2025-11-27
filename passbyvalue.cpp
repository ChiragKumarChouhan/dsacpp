#include<iostream>
using namespace std;

void pbv(int x){
     x=2*x;
cout<<"x:"<<x;
}

int main(){

    int x = 5;
    pbv(x);
    cout<<"x:"<<x;
    return 0;
}




//****************************calculate sum of digit of a number */

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int num (int n ){
    int digitsum = 0;
    while(n>0){
        int lastdigit= n%10;
        n = n/10;
        digitsum = lastdigit + digitsum;
        
    }
    return digitsum;
}
int main() {
cout<<num(123)<<endl;
cout<<num(3454)<<endl;
cout<<num(32)<<endl;
cout<<num(10)<<endl;


    return 0;
}