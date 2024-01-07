#include<bits/stdc++.h>
using namespace std;
class string1{
   string s;
    public:
       string1(string a){
          s=a;
       }
       void display(){
         cout<<s<<endl;
       }
        void join(string1 o1,string1 o2){
           cout<<(o1.s).append(o2.s)<<endl;
             cout<<o1.s+o2.s<<endl;
       }
};
int main()
{
  string1 obj("new ");
  string1 obj1("year");
  obj.display();
  obj1.display();
  obj.join(obj,obj1);

  
   return 0;
}
