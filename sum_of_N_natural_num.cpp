#include<iostream>
using namespace std;
int main(){
    int n=10;
    int sum=0;

    for (int i = 1; i <=n; i++)
    {
        sum=sum+i;// or also use formula = n(n+1)/2;
    }

    cout<<"Sum of First 5 num : "<<sum;
    
}