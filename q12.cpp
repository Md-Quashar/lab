#include<bits/stdc++.h>
using namespace std;
class demo{
    string s;
    public:
       demo(){}
        demo(string x){
            s=x;
        }
        demo operator+(demo obj){
          demo a;
          a.s= s.append(obj.s);
         return a;
       }
       void print(){
          cout<<s<<endl;
       }
};
int main()
{
    demo obj1(" happy ");
    demo obj2(" brithday ");
    demo obj3;
    obj3=obj2+obj1;
    obj3.print();

   return 0;
}
