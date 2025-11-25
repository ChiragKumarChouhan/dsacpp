#include<iostream>
#include<vector>
#include<stack>
#include<queue>

using namespace std;
int main(){
    queue<int> s;
    s.push(1);
     s.push(12);
      s.push(13);
       s.push(14);
        s.push(15);


while(!s.empty())
{
    cout<<s.front()<<" ";//1,12,13,14,15
    s.pop();


}
cout<<endl;
return 0;
}
