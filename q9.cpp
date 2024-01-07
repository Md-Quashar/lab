#include<bits/stdc++.h>
using namespace std;
class demo{
    int num;
    public:
      inline int cal(int n){
          return n*n;
      }

};
int main()
{
    demo obj;
    cout<<obj.cal(5);
   return 0;
}
