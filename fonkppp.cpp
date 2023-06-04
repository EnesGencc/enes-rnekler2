#include <iostream>
using namespace std;
int tt(int a);

int main(){
int a;
while (true)
{
cout<<"sayi gir"<<endl;
cin>>a;
cout<<tt(a)<<endl;
}

    return 0;
}
int tt(int a){
    int t=0;
    for (int i = 0; i <= a; i++)
    {
        t=t+i;
    }
   int f=1;
    return t*f;
}