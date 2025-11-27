 #include<iostream>
 using namespace std;
 int main(){
     int n,m,i,j;
     n=5;
        for(i=1;i<=n;i++)
                 for(j=1;j<=m;j++){
         m= 5;
             cout<<"*";
         }
         cout<<endl;
         return 0;
     }
    

// // ***************

#include<iostream>
using namespace std;

int main(){
int i , j , n,m;
cout<<"enter n:";
cin>>n;
cout<<"enter m:";
cin>>m;

for(i=1;i<=n;i++){
    for(j=1;j<=m;j++){
    cout<<""<<j;
    }
cout<<endl;
}
return 0;
}

//*************** 

#include<iostream>
using namespace std;

int main(){
int i , j , n,m;
cout<<"enter n:";
cin>>n;

for(i=1;i<=n;i++){
    char ch = 'A';
    

    for(j=1;j<=n;j++){
    cout<<ch;
    ch = ch+1;
    }
cout<<endl;
}
return 0;
}

//****************
 #include<iostream>
using namespace std;

int main(){
int i , j , n,m;
cout<<"enter n:";
cin>>n;
int num=1;

for(i=1;i<=n;i++){
   
   
    

    for(j=1;j<=n;j++){
    cout<<num;
    num = num+1;
    }
cout<<endl;
}
return 0;
}

//************ */

#include<iostream>
using namespace std;

int main(){
int i , j , n,m;
cout<<"enter n:";
cin>>n;


for(i=0;i<n;i++){
    
    

    for(j=0;j<1+i;j++){
  cout<<"*";
    }
cout<<endl;
}
return 0;
}


//******************* 

//backword loop

#include<iostream>
using namespace std;

int main(){
int i , j , n,m;
cout<<"enter n:";
cin>>n;
int num = 0;

for(i=0;i<n;i++){
    
//   char ch = 'A'+i;

    for(j=1+i;j>=1;j--){
         num = num +1;
  cout<<""<<j;
  
    }
cout<<endl;
}
return 0;
}


//************************* */

#include<iostream>
using namespace std;

int main(){
int i , j , n,m;
cout<<"enter n:";
cin>>n;
// int num = 0;
char ch = 'A';

for(i=0;i<n;i++){
 

   for(j = i; j >= 0; j--){
 ch = 'A' + j;
  cout<<""<<ch;
  
    }
cout<<endl;
}
return 0;
}

//*** FOR INVERTED USE (n-1) */

//pyramind traingle 
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int i,j,k,s;
    int num = 0;
    for(i=0;i<=n;i++){
        for(s=0;s<=n-i-1;s++){
        cout<<" ";
        }
        for(j=1;j<=i+1;j++){
            cout<<j;
            
        }
            for(int k = i;k>=1;k--){
                cout<<k;
                
            }
                    cout<<endl;

            }
        

    
    return 0;
}


//hollow diamond structer 

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int i,j,k;
    int n= 4;
    for(i=0;i<n;i++){
        for(j=1;j<=n-i-1;j++){
            cout<<" ";
            
        }
        cout<<"*";
        if(i!=0){
        for(k=1;k<=2*i-1;k++){
            cout<<" ";
        }
        cout<<"*";
        }
        cout<<endl;
    }
    for(int t=0;t<n-1;t++){
        for(int y = 1;y<=t+1;y++){
            cout<<" ";
        }
        cout<<"*";
        if(t!=n-2){
        for(int w=1;w<=3-(2*t);w++){
            cout<<" ";
            
        }
        cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}

//*******************butterfly pattern*********************** */

#include <iostream>
using namespace std;

int main() {
    int i, j, n = 4;

    // Top half
    for(i = 0; i < n - 1; i++) {
        for(j = 1; j <= i + 1; j++) {
            cout << "*";
        }

        for(int t = 1; t <= 2 * (n - i - 1); t++) {
            cout << " ";
        }

        for(j = 1; j <= i + 1; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // Middle full line
    for(j = 1; j <= 2 * n; j++) {
        cout << "*";
    }
    cout << endl;

    // Bottom half
    for(i = n - 2; i >= 0; i--) {
        for(j = 1; j <= i + 1; j++) {
            cout << "*";
        }

        for(int t = 1; t <= 2 * (n - i - 1); t++) {
            cout << " ";
        }

        for(j = 1; j <= i + 1; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
