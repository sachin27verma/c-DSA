#include <iostream>
using namespace std;
struct rectangle
{
    int length;
    int bredth;
};
void change(struct rectangle r)
{
    r.length = 12;
    cout << r.length << endl;
}
void changelb(struct rectangle *r,int l=18,int k=16)
{
    r->length=l;
    cout<<r->bredth<<endl<<r->length<<endl;
}

int main()
{
    struct rectangle r = {10, 4};
    
    change(r);
    cout << r.length << endl;
    changelb(&r,r.length,r.bredth);
    cout<<r.length<<endl<<r.bredth<<endl;
    return 0;
}