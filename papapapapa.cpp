#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){

        srand(time(NULL));
    int n=rand()%100+1;
    int a;

while (true)
{
    cout<<"enter guess"<<endl;
    cin>>a;
     if(a<n){
cout<<"go higher"<<endl;
     }

     else if(a==n){
        cout<<"u win"<<endl;
        break;
     }
     else{
        cout<<"go lower"<<endl;
     }
}


return 0;
}