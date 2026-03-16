#include<iostream>
#include<random>
using namespace std;
void faah(int a){
    int x;
    cout<<"guess the number between 0 and 1000\n";
    cin>>x;
    while(x!=a){if(x>a){ cout<<"high\n";
        
    if(x-a<=5)cout<<"close\n";
}
else if(x<a){cout<<"low\n";
    if(a-x<=5)cout<<"close\n";
}
cin>>x;}
cout<<"correct"<<endl;
}
int main(){
random_device rd;
mt19937 gen(rd());
uniform_int_distribution<> dis(0, 100);
int y=dis(gen);
faah(y);

return 0;
}
