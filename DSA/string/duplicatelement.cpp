
//    formal method of finding duplicate element

// #include<iostream>
// using namespace std;
// int main()
// {

//     char s[]="nitinn";
//     int t=0; 
//     int length=0;
//     int p=0;

//     while(s[t]!='\0')
//     {
//         length++;
//         t++;
//     }
//     for(int i=0; s[i]!='\0'; i++)
//     {
//         int count=1;
//         if(s[i]!=0)
//         {
//         for(int j=i+1; s[j]!='\0'; j++)
//         {
//             if(s[j]==s[i])
//             {
//                 s[j]=0;
//                 count++;
//             }
//         }
//         if(count>1)
//         {
//             cout<<s[i]<<" ->repeat -"<<count<<" times"<<endl;
//         }
//         }
//     }
    
    
    
    
//     return 0;

// }

// finding duplicate element using Hash Map

// #include<iostream>
// using namespace std;
// int main()
// {

//     char s[]="nitinn";
//     int t=0; 
//     int length=0;
//     int p=0;

//     while(s[t]!='\0')
//     {
//         length++;
//         t++;
//     }
    
//     int H[26]={0};

//     for(int i=0; s[i]!='\0'; i++)
//     {
//         H[s[i]-97]++;
//     }

//     for(int i=0; i<26; i++)
//     {
//         if(H[i]>1)
//         {
//             cout<<(char)(i+97)<<" repeat "<<H[i]<<"-times"<<endl;
//         }
//     }
    
    
    
    
//     return 0;

// }


//     find duplicate element using bitwise operator

#include<iostream>
using namespace std;
int main()
{

    char s[]="nitinn";
    int t=0; 
    int length=0;
    int p=0;

    while(s[t]!='\0')
    {
        length++;
        t++;
    }
    
    long long int k=1,h=0;

    for(int i=0; s[i]!='\0'; i++)
    {
        k=1;
        k=k<<(s[i]-97);

        if(k&h>0)
        {
            cout<<s[i]<<" is duplicate element :"<<endl;
        }
        else
        {
            h=k|h;
        }
    }

    
    
    
    
    return 0;

}