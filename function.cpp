#include<iostream>
using namespace std;

void printhello(){//name of the function 
    cout<<"hello\n";// task of the function 
}

int main(){
    printhello();// function call
    return 0;
}

//******************* */

//sum of two number using function

#include<iostream>
using namespace std;

int sum (int a , int b){
    int sum = a + b;
    return sum;
}

int main(){
    
cout<<sum(10,15);
    
    return 0;
}

//*******minimum of two number */

#include<iostream>
using namespace std;

int mintwo(int a, int b){ // parameters
    if(a>b){
        return b;
    }else{
        return a;
    }
}

int main(){
    cout<<mintwo(10,15)<<endl;  //arguments 
    cout<<mintwo(12,2)<<endl;
    cout<<mintwo(4554,0);
    return 0;
}
    
//sum of number from 1 to N

#include<iostream>
using namespace std;
// function
int sum(int n){
    int sum =0;
    int i;
    for( i=1;i<=n;i++){
        sum = sum +i;
    }
    return sum;
}
//main body
int main(){
    cout<<sum(3);
    return 0;
}
    
//factorial

#include<iostream>
using namespace std;
// function
int fact(int n){
    int fact =1;
    int i;
    for( i=1;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}
//main body
int main(){
    cout<<fact(3)<<endl;
    cout<<fact(20);
    return 0;
}
    
