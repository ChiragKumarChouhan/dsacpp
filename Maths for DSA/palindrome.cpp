#include<iostream>
using namespace std;

string palindrome(int n ){
int rev=0;
int temp=n;
 while (n > 0) {
        int dig = n % 10;
        rev = rev * 10 + dig;
        n = n / 10;
    }

if(rev==temp){
    return "number is palindrome";
}else{
    return "not palindrome";
}
}
int main(){
    int n =353;
    cout<<palindrome(n)<<endl;
    return 0;
}
