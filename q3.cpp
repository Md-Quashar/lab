#include<bits/stdc++.h>
using namespace std;
class Number_list{
    public:
      void create_array(){
          int n;
          cout<<"enter the size of array"<<endl;
          cin>>n;
          int *ptr= new  int(n);
          cout<<"enter elements in array"<<endl;
          for(int i=0;i<n;i++){
            cin>>ptr[i];
          }
          sort(ptr,n);
      }
      void sort(int ptr[],int n){
        for(int i=0;i<n;i++){
            int j=i;
            while(j>0&&ptr[j]<ptr[j-1]){
                swap(ptr[j],ptr[j-1]);
                j--;
            }
        }
        cout<<"the maximum of the array  "<<ptr[n-1]<<endl;
         cout<<"the minimum of the array  "<<ptr[0]<<endl;

      }
}obj;
int main()
{
    obj.create_array();
   return 0;
}
