#include<iostream>
using namespace std;

int main(){
    // sum of number from 1  to n 
    int n ;
    cin>>n;
    int ans = (n*(n+1))/2;
    cout<<ans; // time complexity is O(1);
  return 0;
}

// factorial

int main(){
    int n ;
    int fact=1; // time compliexty is O(n*k) = O(n);
    for(int i=1;i<=n;i++){
        fact+=i;
    // linear time complixty 
    }
    cout<<fact;   
    return 0;
}


// nth fibonachi and kadane's algorithm is also is a linear compliexty 


//n square and cube type of time complexitiy 

int main(){
int n ;
int arr[n];
    for(int i=0;i<n-1;i++){    //loop run two times so the time complexity is n square 
        for(int j =0;j<n-1-i;j++){
         if(arr[i]==arr[j+1]){
           swap(arr[j],arr[j+1]);
         }
        }
    }
}


//similarly for n cube time complexity nested loop runs three time 

// O logn is for binary search / binary search tree