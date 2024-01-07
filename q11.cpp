#include<bits/stdc++.h>
using namespace std;
class demo{
    public:
     void _reverse(int &n){
        int rev=0;
        int rem=0;
         int temp=n;
        while(temp>0){
            rem=temp%10;
            rev=rev*10+rem;
            temp=temp/10;
        }
         cout<<"after reversing the number will be"<<endl;
         cout<<rev<<endl;
     }
     void check_prime(int n){
        int cnt=0;
        for(int i=1;i*i<=n;i++){
            if(n%i==0) {
                cnt++;
            if(n/i!=i) {
                cnt++;
            }
            }
        }
         if(cnt==2){
            cout<<n<< " is prime number"<<endl;
         }
         else cout<<n<< " is not prime number"<<endl;
     }
      void calculate(int n,char ch){
        if(ch=='r'){
            _reverse(n);
           
        }
        else if(ch=='p'){
            check_prime(n);
        }
        else cout<<"not a valid argument"<<endl;
      }
};
int main()
{
    demo obj;
    obj.calculate(123456,'r');
    obj.calculate(4,'p');

   return 0;
}
