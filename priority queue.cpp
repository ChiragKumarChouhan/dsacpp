#include<iostream>
#include<vector>
#include<stack>
#include<queue>

using namespace std;
int main(){
    priority_queue<int> s;
    s.push(12);
     s.push(11);
      s.push(10);
       s.push(9);
        s.push(8);


while(!s.empty())
{
    cout<<s.front()<<" ";//1,12,13,14,15
    s.pop();


}
cout<<endl;
return 0;
}
