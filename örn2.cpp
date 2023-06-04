#include<iostream>
using namespace std;
int main(){
    int mn,ob,oc,toplam;

    cout<<"enter a two digit number"<<endl;
    cin>>mn;

    ob=mn/10;
    oc=mn-(10*ob);

    toplam=ob+oc;
    cout<<toplam<<endl;

    return 0;
}