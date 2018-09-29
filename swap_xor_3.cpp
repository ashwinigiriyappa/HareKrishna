
#include  <iostream><iostream>
using namespace std;
int main(void)
{
 int a,b;
 cout<<"Enter a integer" <<endl;
 cin>>a;
 cout<<"\n Enter b integer"<<endl;
 cin>>b;

  a = a^b;
  b = a^b;
  a = a^b;

  cout<<" a= "<<a <<"   b="<<b<<endl;
  return 0;
}
