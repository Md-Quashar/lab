#include<bits/stdc++.h>
using namespace std;
class demo{
    protected:
    int data;
    public:
     demo(){};
       virtual ~demo(){
            cout<<" base class virtual destructor will called after the child class destructor because of virtual"<<endl;
       }
};
class child: public demo{
     public:
      child(int a){
        cout<<"default constructor is called"<<endl;
        data=a;
      }
      child(child &obj){
         cout<<"copy constructor"<<endl;
          data=obj.data;
       }
    
    ~child(){
        cout<<"Because of virtual destructor in base class child class destructor called first"<<endl;
    }
};
int main()
{     
    demo a;
    child o1(7);
    child o2(o1);
     demo *ptr;
     ptr=&o1;
     delete ptr;
    
   return 0;
}
