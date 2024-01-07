#include<bits/stdc++.h>
using namespace std;
 class user_time{
      int hour;
    int min;
    int sec;
    public:
     user_time(){
        hour=0;
        min=0;
        sec=0;
     }
      void operator>>(user_time obj){
            cout<<"enter your time in hours,min,sec format"<<endl;
            cin>>hour>>min>>sec;
      }
      void operator<<(user_time obj){
        cout<<"your time is"<<endl;
          cout<<hour<<" "<<min<<" "<<sec<<endl;
      }
       bool operator==(user_time obj){
           if(hour==obj.hour){
                if(min==obj.min){
                    if(sec==obj.sec){
                        return true;
                    }
                    else return false;
                }
                else return false;
           }
            else return false;
      }
      user_time operator+(user_time obj){
           user_time temp;
           temp.sec=sec+obj.sec;
           if(temp.sec>=60){
              temp.min++;
              temp.sec=temp.sec-60;
           }
            temp.min+=min+obj.min;
           if(temp.min>=60){
              temp.hour++;
              temp.min=temp.min-60;
           }
           temp.hour+=hour+obj.hour;
          
           return temp;
      }
      void show(){
        cout<<hour<<" "<<min<<" "<<sec<<endl;
      }
 };
int main()
{
    user_time obj;
    user_time obj1;
    user_time obj2;
      obj1>>obj;
      obj2>>obj;
      obj1<<obj;
      obj2<<obj;
      cout<<"checking both timing are equal or not"<<endl;
      cout<<(obj1==obj2)<<endl;
    obj=obj1+obj2;
      obj<<obj;

    
       
   return 0;
}
