#include <iostream>
#include <math.h>
using namespace std;
int main(){
int a=1;
string d[3];
cout<<"enter name"<<endl;
for (int i = 0; i < 3; i++)
{
    cout<<a+" . ismi gir"<<endl;
    cin>>d[i];
    a++;
}

for (int i = 0; i < 3; i++)
{
    cout<<d[i]<<endl;
}


return 0;
}