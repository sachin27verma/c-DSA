#include <iostream>
using namespace std;
int countSpecialNumbers(int n) {
        
        int A[5]={-1,-1,-1,-1,-1};
       
      static int act=0;
        for(int i=1; i<=n; i++)
        {
            int temp=i;
             int count=1;
             int p=0;
            while(temp>0)
            {
                A[p]=temp%10;
                temp=temp/10;
               
             
                p++;
            }
            for(int k=0; k<p; k++)
                {
                  for(int j=k+1; j<p; j++)
                  {
                    if(A[j]==A[k])
                    {
                        count++;
                    }
                  } 
                }
            
            if(count>1)
            {
                act++;
            }
            
           
        }
        
        return (n-act);
        
    }
int main() {
   
cout<<countSpecialNumbers(111);
    return 0;
}