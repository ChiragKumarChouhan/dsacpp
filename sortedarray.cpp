 #include<iostream>
 using namespace std;
 
 int main(){
     int arr[100],n,size;
     cout<<"enter the size of array:";
     cin>>size;
     cout<<"enter the array:";
     for(int i = 0;i<size;i++){
         cin>>arr[i];
         
     }
     
     for(int i = 0;i<size;i++){
         if(arr[i]!=arr[i-1]){
             cout<<arr[i]<<" ";
             
             
         }
         }
     
     return 0;
     
 }