#include<iostream>
#include<cmath>

using namespace std;
int main(){
    int dtob = 0;
    int num,binary,i;
    cout<<"num=";
    cin>>num;
    
for(i=0;num>0;i++){
    binary = num%2;
    num = num/2;
    dtob+=binary*pow(10,i); //in C++ the ^ symbol doesn’t mean power — it’s bitwise XOR.
}
cout<<dtob;
return 0;
}


//8*********************************
//binary to decimal

#include<iostream>
#include<cmath>

using namespace std;
int main(){
    int btod = 0;
    int num,binary,i;
    cout<<"num=";
    cin>>num;
    
for(i=0;num>0;i++){
  
        
    
    binary = num%10;
    num = num/10;
    btod+=binary*pow(2,i); //in C++ the ^ symbol doesn’t mean power — it’s bitwise XOR.
    
    
}
cout<<btod;
return 0;
}