#include <iostream>
using namespace std;
int main(){

int d[3]={1,2,3};
int t=0;

for (int i = 0; i < 3; i++)
{
    t+=d[i];
}
cout<<"toplam ="<<t;
cout<<"ortalama eaittir = "<<t/3;


    return 0;
}