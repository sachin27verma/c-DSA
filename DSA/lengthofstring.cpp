// length of string

// #include<iostream>
// using namespace std;
// int main()
// {

//     char s[]="sachin";
//     int i=0;
//     while(s[i]!='\0')
//     {
//         i++;

//     }
//     cout<<"length of string is :"<<i;
//     return 0;

// }

// ##########      changing the cases of string 

// #include<iostream>
// using namespace std;
// int main()
// {

//     char s[]="sachin";

//     for(int i=0; s[i]!='\0';i++)
//     {
//           s[i]=s[i]-32;
//     }

//     cout<<s;

// }

//      ######### counting words and vowels in string

// perfect code for counting no of words(having multiple white space)

// #include<iostream>
// using namespace std;
// int main()
// {

//     char s[]="how      are           u";
//     int vcount=0;
//     int vspace=0;
//     int vconstonent=0;
//     for(int i=0; s[i]!='\0'; i++)
//     {
//         if(s[i]=='a'|| s[i]=='e'||s[i]=='i'|| s[i]=='o'||s[i]=='u'||s[i]=='A'|| s[i]=='E'||s[i]=='I'|| s[i]=='O'||s[i]=='U')
//         {
//          vcount++;   
//         }
//         else if(s[i]==' ')
//         {
//             int j=i+1;
//             while(s[j]==' ')
//             {
//                 j++;
//                 i++;
//             }
//             vspace++;
        
//         }
//         else if(!(s[i]>=65 && s[i]<=90)|| !(s[i]>=97 && s[i]<=122))
//         {
//             vconstonent++;
//         }
//     }
//     cout<<"no of vowel is "<<vcount<<endl;
//     cout<<"no of consonent is "<<vconstonent<<endl;
//     cout<<"no of word is "<<vspace+1<<endl;
//     return 0;

// }

//   ** validate an string 

// #include<iostream>
// using namespace std;
// int main()
// {

//     char s[]="575";
    
//     for(int i=0; s[i]!='\0'; i++)
//     {
//         if(!(s[i]>=65 && s[i]<=90 ) && !(s[i]>=97 && s[i]<=122) && !(s[i]>=48 && s[i]<=57))
//         {
//             cout<<"not valid";
//             break;
//         }
//         else{
//             cout<<"valid";
//         }
       
//     }
    
//     return 0;

// }

    //     Reversing a string


// #include<iostream>
// using namespace std;
// void swap(char *p,char *d)
// {
//     char t=*p;
//     *p=*d;
//     *d=t;
// }
// int main()
// {

//     char s[12]="sachin";
//     int length=0;
//     int t=0;
//     while(s[t]!='\0')
//     {
//         length++;
//         t++;
//     }
//     int i,j;
//     for(i=0, j=length-1; i<=j; i++,j--)
//     {
//         swap(&s[i],&s[j]);
        
//     }
//     s[length]='\0';

//     cout<<s<<endl;
    
    
//     return 0;

// }


//  cheaking palindrome


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
    for(int i=0, j=length-1; i<=j; i++,j--)
    {
        if(s[i]!=s[j])
        {
            cout<<"not palindrome";
          p++;
            break;
        }
    }
    if(p==0)
    {
        cout<<"palindrome";
    }
    
    
    
    return 0;

}