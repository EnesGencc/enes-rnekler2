#include<iostream>
using namespace std;
int main(){
    int n,ort,s=0,t=0;

    while(s<3){
        cout<<"enter grade ig"<<endl;
        cin>>n;
        t+=n;
        s++;
    }

ort=t/3;
cout<<ort;
/*
    cout<<"enter exam no 1"<<endl;
    cin>>x;
    cout<<"enter exam no 2"<<endl;
    cin>>y;
    cout<<"enter exam no 3"<<endl;
    cin>>z;

    ort=(x+y+z)/3;
    cout<<ort<<endl;
*/
    return 0;
}