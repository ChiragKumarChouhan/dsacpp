//bitwise and
#include<iostream>
using namespace std;

int andOperation(int a,int b ){
    return (a&b);
}

int main(){ 
    cout<<andOperation(4,8)<<endl;
        cout<<andOperation(8,16)<<endl;
    cout<<andOperation(8,8)<<endl;
    cout<<andOperation(23,8)<<endl;
    cout<<andOperation(43,5568)<<endl;
   

    return 0;
}

//***bitwise or */

//bitwise or

#include<iostream>
using namespace std;

int orOperation(int a,int b ){
    return (a|b);
}

int main(){ 
    cout<<orOperation(4,8)<<endl;
    cout<<orOperation(8,16)<<endl;
    cout<<orOperation(8,8)<<endl;
    cout<<orOperation(23,8)<<endl;
    cout<<orOperation(43,5568)<<endl;
   

    return 0;
}

//left shift operator

//bitwise and
#include<iostream>
using namespace std;

int lshiftOperation(int a,int b ){
    return (a<<b);
}

int main(){ 
    cout<<lshiftOperation(4,8)<<endl;
    cout<<lshiftOperation(8,16)<<endl;
    cout<<lshiftOperation(8,8)<<endl;
    cout<<lshiftOperation(23,8)<<endl;
    cout<<lshiftOperation(43,5568)<<endl;
   

    return 0;
}

//bitwise XOR

#include<iostream>
using namespace std;

int xorOperation(int a,int b ){
    return (a ^ b); // bitwise XOR
}

int main(){ 
    cout << xorOperation(4,8) << endl;
    cout << xorOperation(8,16) << endl;
    cout << xorOperation(8,8) << endl;
    cout << xorOperation(23,8) << endl;
    cout << xorOperation(43,5568) << endl;
    return 0;
}


// bitwise right shift 

#include<iostream>
using namespace std;

int RshiftOperation(int a, int b) {
    return (a >> b); // Right shift
}

int main() { 
    cout << RshiftOperation(4, 8) << endl;
    cout << RshiftOperation(8, 16) << endl;
    cout << RshiftOperation(8, 8) << endl;
    cout << RshiftOperation(23, 1) << endl;
    cout << RshiftOperation(43, 1) << endl;
    return 0;
}
