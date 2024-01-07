#include<bits/stdc++.h>
using namespace std;
class complex1{
    public:
    int real;
    int img;
      
       complex1(){
         real=1;
         img=1;
       }
       complex1(int x){
         real=0;
         img=x;
       }
       complex1(int a,int b){
         real=a;
         img=b;
       }
       complex1 sum(complex1 o1,complex1 o2){
            complex1 temp;
            temp.real=o1.real+o2.real;
            temp.img=o1.img+o2.img;
            return temp;
       }
       void show(){
          cout<<"after adding of two complex number"<<endl;
          cout<<real<<"+"<<img<<"i"<<endl;
       }

};
int main()
{
   // calling default constructor
  complex1 c1;
  complex1 c2;
  //  using c3 for adding  and showing
  complex1 c3;
  c3=c3.sum(c1,c2);
   c3.show();
   // calling one argument constructor
  complex1 c4(3);
  complex1 c5(7);
  //  using c3 for adding  and showing
  complex1 c6;
  c6=c6.sum(c4,c5);
  c6.show();
  // calling two argument constructor
  complex1 c7(5,6);
  complex1 c8(1,2);
  complex1 c9;
  c9=c9.sum(c7,c8);
   c9.show();
   return 0;
}
