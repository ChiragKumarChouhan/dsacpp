#include<iostream>
using namespace std;

int main(){
    int marks[5] = {2,33,44,55,66};
    // cout<<marks[0]<<endl;
    // cout<<marks[2]<<endl;//access for 2th position 
    // cout<<marks[7];//output 0 because value for 7th postion is not given 
    // array goes 0 to n-1 ->
    int sz = sizeof(marks);
    cout<<sz/sizeof(int)<<endl;
    return 0;
}

//loop in array

#include<iostream>
using namespace std;

int main(){
    int marks[5]= {1,2,3,4,5};
    for(int i = 0 ;i<=4;i++){
        cout<<" "<<marks;
    }
    return 0;
}

//largest and minimum array 



#include <iostream>

using namespace std;

int main() {
int nums[100];
int size;
cout<<"enter the number of element ";
cin>>size;
cout<<"enter the element:";
for(int i =0;i<size;i++){
    cin>>nums[i];
}
int smallest = nums[0];
int largest = nums[0];
for(int i=0;i<size;i++){
    smallest = min(nums[i],smallest);
    largest = max(nums[i],largest);
}

    cout << "Smallest element: " << smallest<<endl;
    cout<<"largest element : "<<largest ;
    return 0;
}