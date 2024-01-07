#include<bits/stdc++.h>
using namespace std;
class year{
   int y;
   public:
     year(){
        cout<<"enter any year"<<endl;
        cin>>y;
     }
     ~year(){
        if(y%4==0)cout<<"its leap year"<<endl;
        else cout<<"not a leap year"<<endl;
     }
};
int main()
{
  year obj;
   return 0;
}
