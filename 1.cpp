//pythogorian triplet
#include <iostream>
using namespace std;
bool check(int a,int b, int c){
    int x=max(a,max(b,c));
    int y=min(a,min(b,c));
    int z=a+b+c-x-y;
    if(x*x==y*y+z*z){
        return 1;
    }else {
        return 0;
    }
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if( check(a,b,c)){
        cout<<"pythorgorian tripolet";
    }
    else{
        cout<<"not";
    }
}