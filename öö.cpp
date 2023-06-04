#include<iostream>
using namespace std;
int main(){
    int x, t=0;
    cout<<"enter number"<<endl;
    cin>>x;
    while (t<101)
    {
        t+=x;
        x++;
    }

    cout<<t<<endl;

    return 0;
}
