#include<bits/stdc++.h>
using namespace std;
class triangle{
    float base;
    float height;
    float a;
    float b;
    float c;
    public:
       float area();
       float perimeter();
       void inputs(){
        cout<<"enter the base and height of a triangle"<<endl;
        cin>>base;
        cin>>height;
        cout<<"enter the three side of triangle"<<endl;
        cin>>a>>b>>c;
       }
       void printing(){
        cout<<"the area of triangle is"<<area()<<endl;
         cout<<"the perimeter of triangle is"<<perimeter()<<endl;
       }
};
 float triangle::area(){
    return (base*height)/2;
 }
 float triangle:: perimeter(){
   return (a+b+c);
 }

int main()
{
    triangle obj;
    obj.inputs();
    obj.area();
    obj.perimeter();
    obj.printing();
   return 0;
}
