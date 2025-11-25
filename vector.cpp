// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector> // declaration of vector
using namespace std;

int main() {
vector<int> vec; // intalitaion
cout<<"size of: "<<vec.size()<<endl; // size function
vec.push_back(25);
vec.push_back(45);
vec.push_back(35); // push back func(for every push size of vector increase )
vec.pop_back(); // in pop back no need  to declare value because its already know its last value 
cout<<"after push back size of: "<<vec.size()<<endl;
    

for(int val: vec){ // using for loop for vector 
    cout<<val<<endl;
}
cout<<vec.front()<<endl;
cout<<vec.back()<<endl;

    return 0;
}

// size capacity concept 

#include <iostream>
#include<vector> // declaration of vector
using namespace std;

int main() {
vector<int> vec;

vec.push_back(0);
vec.push_back(1);
vec.push_back(2);
vec.push_back(3);
vec.push_back(4);

cout<<"size: "<<vec.size()<<endl;
cout<<"capacity: "<<vec.capacity();

return 0;
}

// linear search 
// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

int main() {
vector<int> vec;
int size , target;
cout<<"enter the size of array: ";
cin>>size;
cout<<"enter the element in array: ";
for(int i=0;i<size;i++){
            int value;
        cin >> value;
        vec.push_back(value);

}
 cout << "Enter element to search: ";
    cin >> target;
    
for(int i=0;i<size;i++){
    if(vec[i]==target){
        cout<<"target got it at the position of  :"<<i<<endl;
        return 0;
    }
}
cout<<"element not found" ;
    return 0;
}