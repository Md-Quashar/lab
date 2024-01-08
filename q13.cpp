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
     void operator >> (string s){
          
          int ind = s.find(':');
          string hours = s.substr(0,ind);
          s = s.substr(ind+1);
         
          hour = stoi(hours);
          int ind2 = s.find(':');

          string mini = s.substr(0,ind2);
          
          min = stoi(mini);
          s = s.substr(ind2+1);
          
          sec= stoi(s);

      }
        friend ostream& operator<<(ostream& os, user_time& t) {
        os<<"Time in format(hh:mm:ss) -> "<<t.hour<<":"<<t.min<<":"<<t.sec<<endl;
        return os;
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
            // return(hour==obj.hour&&min==obj.min&&sec==obj.sec)
      }
      user_time operator+(user_time obj){
           user_time temp;
           temp.sec=sec+obj.sec;
           int esce=temp.sec/60;
           temp.sec%=60;
            temp.min=min+obj.min+esce;
          int emin=temp.min/60;
          temp.min%=60;
           temp.hour+=hour+obj.hour+emin;
          
           return temp;
      }
     
 };
int main()
{
    user_time obj;
    user_time obj1;
    user_time obj2;
      obj1>>"10:50:50";
      obj2>>"10:50:50";
      cout<<obj1;
      cout<<obj2;
      cout<<"checking both timing are equal or not"<<endl;
      cout<<(obj1==obj2)<<endl;
    obj=obj1+obj2;
      cout<<obj;

    
       
   return 0;
}
