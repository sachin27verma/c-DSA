#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
for(int i=1; i<=t; i++)
{
int n;
cin>>n;
char a[n];
int b[n];
for(int i=0; i<n; i++)
{
    b[i]='A';
}
cin>>a;
int count=0;
for(int i=0; i<n; i++)
{
  for(int j=0; j<n; j++)
  {
      if(a[i]!=b[j])
      {
          b[j]=a[i];
          count++;
      }
  }

}
if(count>2)
{
     cout<<"Case #"<<i<<":" <<a<<endl;   
}
}
return 0;
}