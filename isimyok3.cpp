#include <iostream>
#include <string>
using namespace std;
int main(){

    string u,p;
    cout<<"enter username"<<endl;
    getline(cin, u);
    
    while(u.length()>>8)
    {
        cout<<"enter username"<<endl;
        getline(cin, u);
    }
    cout<<"enter pw"<<endl;
    getline(cin, p);

if (p=="12345")
{
cout<<"ur in"<<endl;
}

else{
    cout<<"ur not in";
}
    return 0;
}