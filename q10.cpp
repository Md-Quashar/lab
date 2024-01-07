#include <bits/stdc++.h>
using namespace std;
class volume
{
    float a;
    float l;
    float h;
    float b;
    float r;

public:
    float cube(float a)
    {
        return (a * a * a);
    }
    float cuboid(float l, float b, float h)
    {
        return (l * b * h);
    }
    float cone(float r, float h)
    {
        return ((3.14 * r * r * h) / 3);
    }
    float cylinder(float r, float h)
    {
        return (3.14 * r * r * h);
    }
    float sphere(float r)
    {
        return ((4 * 3.14 * r * r * r) / 3);
    }
};
int main()
{
    volume obj;
    cout << "<--------------choose any one---------------->"<<endl;
    cout << "1.volume of cube" << endl;
    cout << "2.volume of cuboid" << endl;
    cout << "3.volume of cone" << endl;
    cout << "4.volume of cylinder" << endl;
    cout << "5.volume of sphere" << endl;
    char ch;
    float r1;
    float h1;
    float a1;
    float l1;
    float b1;
    while (1)
    {
         cout << "enter your choice" << endl;
         int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "enter side of cube" << endl;
             cin>>a1;
            cout <<"volume of cube " <<obj.cube(a1) << endl;
            break;
        case 2:
            cout << "enter length,breath,heigth" << endl;
            cin >> l1 >> b1 >> h1;
            cout <<"volume of  cuboid " << obj.cuboid(l1, b1, h1)<<endl;
            break;
        case 3:
            cout << "enter radius and heigth" << endl;
            cin >> r1 >> h1;
            cout <<"volume of cone " << obj.cone(r1, h1)<<endl;
            break;
        case 4:
            cout <<"enter radius and heigth "<< endl;
            cin >> r1 >> h1;
            cout <<"volume of cylinder "<< obj.cylinder(r1, h1)<<endl;
            break;
        case 5:
            cout << "enter radius" << endl;
            cin >> r1;
            cout <<"volume of sphere " <<obj.sphere(r1)<<endl;
            break;
        default:
            cout << " not a valid option" << endl;
        }
        cout << "press any to continue ans press s to stop" << endl;
        cin >> ch;
        if (ch == 's') {
            cout<<"thank you"<<endl;
            break;
        }
            
    }
   
    return 0;
}
