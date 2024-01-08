#include<bits/stdc++.h>
using namespace std;
class demo{
    int data;
    public:
     demo(){};
      demo(int a){
        cout<<"default constructor is called"<<endl;
        data=a;
      }
       demo(demo &obj){
         cout<<"copy constructor"<<endl;
          data=obj.data;
       }
       virtual ~demo(){
            cout<<" base class virtual destructor will never called because of virtual"<<endl;
       }
};
class child: public demo{
     public:
    
    ~child(){
        cout<<"Because of virtual destructor in base class child class destructor called"<<endl;
    }
};
int main()
{     
    demo a(7);
    demo b(a);
     child o1;
     demo *ptr;
     ptr=&o1;
    
   return 0;
}
