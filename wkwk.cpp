#include<iostream>
using namespace std;
int main(){
    int a,t;

    while (true)
    {
        cout<<"enter 0"<<endl;
        cin>>a;

        if(a==0){
            break;
        }
        t+=a;
    }
    cout<<t<<endl;
    cout<<"u entered 0"<<endl;
}