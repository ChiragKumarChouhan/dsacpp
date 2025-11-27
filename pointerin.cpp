#include<iostream>
using namespace std;
int main(){
int a = 100;
 int*ptr=&a;
 int**ptr2=&ptr;// FOR SHOWCASE POINTER IN POINTER 
 int **prptr=&ptr;
float price = 100.2;

 cout<< "type of a is "<<&a<<endl;//type of a = 0x61ff08
 cout<<ptr<<endl;//value in pointer = 0x61ff08
cout<<&price<<endl;//VALUE OF &PRICE = 0x61ff04
cout<<"ptr statment"<<ptr2<<endl;
cout<<"parien ptr is "<<prptr;

int arr[]={1,2,3,4,5};
cout<<arr<<endl;//show the adress of array
cout<<*arr<<endl;//indicates 0th place element 
// Online C++ compiler to run C++ program online

 
    int a=100;
    int *ptr=&a;
    cout<<ptr<<endl;//0x7ffef9baf734

    ptr++;
    cout<<ptr;//0x7ffef9baf738
    return 0;
}

#include <iostream>
using namespace std;
int main() {
    int arr[]={3,2,3,4,5};
    int *ptr = arr;
    cout<<(*ptr+1)<<endl;
    cout<<*(ptr+3)<<endl;
    ptr++;
    cout<<*ptr;
    return 0;
}