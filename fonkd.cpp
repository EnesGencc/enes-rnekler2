#include <iostream>
using namespace std;
bool ct(int x);

int main(){
int x;
int tt=0;
int k=0;

for (int i = 0; i < 10; i++)
{
    cin>>x;

if (ct(x))
{
    k=k+x;
}
else{
    tt=tt+x;
}
}

cout<<tt<<endl;
cout<<k<<endl;

    return 0;
}

bool ct(int x){
    if(x%2==0){
        return true;
    }
    else if(x%2==1){
        return false;
    }
}