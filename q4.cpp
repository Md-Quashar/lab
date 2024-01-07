#include<bits/stdc++.h>
using namespace std;
class pattern{
  int n;
  public:
     pattern(){
        cout<<"enter no of lines"<<endl;
        cin>>n;
     }
     void print(){
            for(int i=n;i>=1;i--){
                for(int k=i;k<n;k++){
                    cout<<" ";
                }
                for(int j=2*i-1;j>=1;j--){
                    cout<<"*";
                }
                 for(int k=i;k<n;k++){
                    cout<<" ";
                }
                cout<<endl;
            }
     }
};
int main()
{
    pattern obj;
    obj.print();
    
   return 0;
}
