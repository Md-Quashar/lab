#include<bits/stdc++.h>
using namespace std;
class swapp{
    int x;
    int y;
    public:
        friend void _swap(int n1,int n2);
};
 void _swap(int &n1,int &n2){
     n1=n1^n2;
     n2=n1^n2;
     n1=n1^n2;
    
 }
int main()
{
    swapp obj;
    cout<<"enter two numbers"<<endl;
    int x;
    int y;
    cin>>x>>y;
   _swap(x,y);
   cout<<x<<endl;
   cout<<y<<endl;

   return 0;
}
