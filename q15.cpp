#include<bits/stdc++.h>
using namespace std;
class complex1{
    int real;
    int img;
    public:
        complex1(){};
        complex1(int x,int y){
         real=x;
         img=y;
       }
        void show(){
            cout<<"after adding two complex number with the help of friend fun"<<endl;
            cout<<real<<"+"<<img<<"i"<<endl;
        }
        friend complex1 add_complex(complex1 o1,complex1 o2);
};
 complex1 add_complex(complex1 o1,complex1 o2){
      complex1 temp;
       temp.real=o1.real+o2.real;
       temp.img=o1.img+o2.img;
        return temp;
 }
int main()
{
   complex1 obj1(3,4);
   complex1 obj2(2,3);
   complex1 obj3;
    obj3= add_complex(obj1,obj2);
    obj3.show();
    
    
   return 0;
}
