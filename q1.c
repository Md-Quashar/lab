#include<bits/stdc++.h>
using namespace std;
 class circle{
      protected:
       float radius2;
    private:
      float radius;
    public:
   float radius1;
       void set(float x)
    {
       radius=x;
      }
      float get(){
       return radius*radius*3.14;
      }
 };
 class circle_child: protected circle{
         public:
          void set(float y){
            radius2=y;
          }
           float get(){
       return radius2*radius2*3.14;
      }
 };
int main()
{
    circle obj;
    obj.radius1=2.3;
   cout<<"demonstrating public mode"<<endl;
    cout<<"Area of circle is "<<(3.14*obj.radius1*obj.radius1)<<endl;
  // accessing public data member with any abstraction
    cout<<"demonstrating private mode"<<endl;
      obj.set(2.3);// accessing private data member with the help of member function
    cout<<"Area of circle is "<<obj.get()<<endl; 
     cout<<"demonstrating protected mode"<<endl;
     circle_child obj1;  // object of child class who derived in protected mode from circle
     obj1.set(2.3);  // calling member fun of chlid class with the help of overriding
     cout<<"Area of circle is "<<obj1.get()<<endl; 
   return 0;
}
