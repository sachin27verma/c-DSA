#include<iostream>
using namespace std;
struct student
{
    string name;
    int roll_no;
    string admission_no;
    char division;

};
int main()
{

struct student s1[100];

cout<<"Enter the name"<<endl;
cin>>s1[0].name;
cout<<"Enter the Roll-no :"<<endl;
cin>>s1[0].roll_no;
cout<<"Enter the Admission-no"<<endl;
cin>>s1[0].admission_no;
cout<<"Enter the division"<<endl;
cin>>s1[0].division;
cout<<endl;
cout<<s1[0].name<<endl;
cout<<s1[0].roll_no<<endl;
cout<<s1[0].admission_no<<endl;
cout<<s1[0].division<<endl;




    return 0;
}