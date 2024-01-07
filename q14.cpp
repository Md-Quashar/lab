#include<bits/stdc++.h>
using namespace std;
class swapp{
    int x;
    int y;
    public:
        friend void _swap(swapp &o);
        void set(){
            cout<<"enter two numbers"<<endl;
            cin>>x>>y;
        }
        void show(){
            cout<<"after swapping"<<endl;
            cout<<x<<endl;
            cout<<y<<endl;
        }
};
 void _swap(swapp &o){
     o.x=o.x^o.y;
     o.y=o.x^o.y;
     o.x=o.x^o.y;
    
 }
int main()
{
    swapp obj;
     obj.set();
   _swap(obj);
   obj.show();

   return 0;
}
