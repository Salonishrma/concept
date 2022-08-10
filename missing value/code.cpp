/*#include <iostream>
using namespace std;
int missing_value(int array[], int n){
int temp;
temp=((n+1)*(n+2)/2);
for(int i=0;i<n;i++)
    temp=temp-array[i];
    return temp;
}
int main(){
    int n;
    cin>>n;
    int array[n-1];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"missing number is equal to "<<missing_value(array,5);
    return 0;
}*/
#include"bits/stdc++.h"
using namespace std;

int main()
{
    long long int n;
    int arr[1000000];
    cin >> n;
    long long int sum=(n*(n+1)/2);
    long long int total=0;
    for(int i=0;i<n-1;i++)
    {    
        cin>>arr[i];
        total+=arr[i];
    }
    cout<<sum-total<<endl;
    return 0;
}
