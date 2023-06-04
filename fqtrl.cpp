#include <iostream>
using namespace std;

int asal(int a);

int main(){
    int a;

    while(true){
    cout<<"enter num"<<endl;
    cin>>a;
    cout<<asal(a)<<endl;
    }

    return 0;
}
int asal(int a){
int b=a-1;
    for (int i = b; i >1; i--)
    {
        if(a%i==0){
            cout<<"asal degil"<<endl;
        }
        else{
cout<<"asal"<<endl;
        }
    }
    return a;
}