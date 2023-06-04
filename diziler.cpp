#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
srand(time(NULL));
int n=rand()%3;
cout<<"tas=0, kagit=1, makas=2"<<endl;
int a;
int sb=0;
int sc=0;
while(true){
    cin>>a;
if(a==n){
    cout<<"tie"<<endl;
    if(sb==3 || sc==3){
             cout<<sc<<endl;
        cout<<sb<<endl;
    break;
}
}
else if(n==1 && a==2){
cout<<"u win "<<endl;
sb++;
if(sb==3 || sc==3){
         cout<<sc<<endl;
        cout<<sb<<endl;
    break;
}}
else if(n==0 && a==1){
cout<<"u win"<<endl;
sb++;
if(sb==3 || sc==3){
     cout<<sc<<endl;
        cout<<sb<<endl;
    break;
}
}
else if(n==2 && a==0){
cout<<"u win"<<endl;
sb++;
if(sb==3 || sc==3){
          cout<<sc<<endl;
        cout<<sb<<endl;
    break;
}
}
 else{
    cout<<"u lost"<<endl;
    sc++;
    if(sb==3 || sc==3){
        cout<<sc<<endl;
        cout<<sb<<endl;
    break;
}
 }
}
cout<<n<<endl;
    return 0;
}