// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std ;
int main() {
    
    int size , arr[100];
    cout<<"enter the size of array : ";
    cin>>size;
    cout<<"enter the array :" ;
    for(int i=0;i<size;i++){
        cin>>arr[i];
        
    }
    cout<<"revers array";
    for(int i=size-1;i>=0;i--){ //reverse loop
        cout<<arr[i]<<" ";
        
    }
    return 0;
}

// sum of array

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std ;
int sum(int arr[100],int size){
    int total=0;
    for(int i=0;i<size;i++){
         total =  total +arr[i];

    }
   return total;
}
int main() {
    
    
    int size , arr[100];
   
    cout<<"enter the size of array : ";
    cin>>size;

    cout<<"enter the array :" ;
    for(int i=0;i<size;i++){
        cin>>arr[i];
        
    }
    
//   for(int i=0;i<size;i++){
//       sum = sum + arr[i];
//       product = product * arr[i];
//   }
//   cout<<sum<<endl;
  
//   cout<<product;
    cout << sum(arr, size) ;
        return 0;
    }

    //uniqe array 

    // Online C++ compiler to run C++ program online
#include <iostream>
using namespace std ;


int main() {
    
    
    int size , arr[100];
   
    cout<<"enter the size of array : ";
    cin>>size;

    cout<<"enter the array :" ;
    for(int i=0;i<size;i++){
        cin>>arr[i];
        
    }
    
for(int i=0;i<size;i++){
    if(arr[i]!=arr[i+1]){
        cout<<arr[i];
    }
    
}

  
cout<<endl;
    
        return 0;
    }


