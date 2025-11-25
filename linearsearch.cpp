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
    
     cout<<"enter the number to be search:";
     cin>>n;
     for(int i = 0;i<size;i++){
         if(arr[i]==n){
             cout << "Number found at index " << i << endl;
             cout<<"search complete";
             return 0;

         }
         }

     cout<<"out of range ";
     return 0;

 }

