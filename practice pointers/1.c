int *ptr = 0;
int a = 10;
*ptr = a;
cout << *ptr << endl;


char b[] = "xyz";
char *c = &b[0];
cout << c << endl;


#include <iostream>
using namespace std;
int main()
{ 
  char *ptr; 
  char Str[] = "abcdefg";
  ptr = Str;
  ptr += 5;
  cout << ptr;
  return 0;
}


#include <iostream>
using namespace std;
int main()
{
  float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
  float *ptr1 = &arr[0];
  float *ptr2 = ptr1 + 3;
  cout<<*ptr2<<" ";
  cout<< ptr2 - ptr1;
  return 0;
}

void square(int *p){
 int a = 10;
 p = &a;
 *p = (*p) * (*p);
}

int main(){
 int a = 10;
 square(&a);
 cout << a << endl;
}

#include<iostream>
using namespace std;
void swap (char *x, char *y) 
{
  char *t = x;
  x = y;
  y = t;
}

int main()
{
   char *x = "geeksquiz";
   char *y = "geeksforgeeks";
   char *t;
   swap(x, y);
   cout<<x << " "<<y;
   t = x;
   x = y;
   y = t; 
   cout<<" "<<x<< " "<<y;
   return 0;
}

int a = 10;
int *p = &a;
int **q = &p;
int b = 20;
*q = &b;
(*p)++;
cout << a << " " << b << endl;


int f(int x, int *py, int **ppz) {
    int y, z;
    **ppz += 1;
    z = **ppz;
    *py += 2;
    y = *py;
    x += 3;
    return x + y + z;
}

int main() {
    int c, *b, **a;
    c = 4;
    b = &c;
    a = &b;
    cout << f(c, b, a);
    return 0;
}

