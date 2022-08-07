#include <iostream>

using namespace std;
int n1,n2;
int gcd(int n1,int  n2){
int ans=min(n1,n2);
while(ans>0){
    if(n1%ans==0 && n2%ans==0){
        break;
    }
    ans--;
}
return ans;
}
int main(){
    int a;
    int b;
    cin>>a>>b;
    cout<<"gcd is equal to "<<gcd(a,b)<<endl;
    return 0;
}
