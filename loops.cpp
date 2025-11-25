//print n numbers 
#include<iostream>
using namespace std;
int main(){
    int i ,n;
    cout<<"enter n :";
    cin>>n;
    for(i=0;i<=n;i++){
        cout<<" \n"<<i;
        
    }
    return 0;
}

//sum of numbers from 1 to n 


#include<iostream>
using namespace std;
int main(){
    int i ,n;
    cout<<"enter n :";
    cin>>n;
    int sum = 0;
    
    for(i=1;i<=n;i++){
        
        sum= sum + i;
        
        
    }
            cout<<"sum is : "<<sum ;

    return 0;
}

//sum of all odd number from 1 to N 
#include<iostream>
using namespace std;

int main(){
    int   i , n ;
    int sum = 0;
    cout<<"N:";
    cin>>n;
    for(i=0;i<=n;i++){
        if(i%2!=0){
            
sum = sum+i;
        }
        

    }
    cout<<"sum of odd number from 1 to N:"<<sum;
    return 0 ;
}

// sum of even number from 1 to N
#include<iostream>
using namespace std;

int main(){
    int   i , n ;
    int sum = 0;
    cout<<"N:";
    cin>>n;
    for(i=0;i<=n;i++){
        if(i%2==0){
            
sum = sum+i;
        }
        

    }
    cout<<"sum of even number from 1 to N:"<<sum;
    return 0 ;
}

// check prime or not 

#include<iostream>
using namespace std;

int main(){
    int i,n;
    cout<<"enter an number:";
    cin>>n;
    for(i=2;i<=n-1;i++){
        if(n%1==0){
            cout<<"number is not prime";
        }else{
            cout<<"number is not prime";
        }
    }
    return 0;
}