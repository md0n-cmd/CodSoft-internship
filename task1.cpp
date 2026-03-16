#include<iostream>
#include<random>
using namespace std;
void faah(int a){
    int x,at=1;
    cout<<"guess the number between 0 and 100\n";
    cin>>x;
    while(x!=a)
    {
        at++;
        if(x>a){ 
            cout<<"high";
        
    if(x-a<=5)cout<<" and close\n";
    else cout<<"\n";
}
else if(x<a){cout<<"low";
    if(a-x<=5)cout<<" and close\n";
    else cout << "\n";
}
cin>>x;}
cout<<"correct and took "<<at<<" attempts\n";
}
int main(){
random_device rd;
mt19937 gen(rd());
uniform_int_distribution<> dis(0, 100);
int y=dis(gen);
faah(y);

return 0;
}
