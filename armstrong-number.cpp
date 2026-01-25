#include <iostream>
using namespace std;

int main(){

    int n,i=0;
    long sum=0;
    int digits[20];
    cout<<"enter the number: ";
    cin>>n;
    int copy=n;

    while(n>0){

        digits[i]=n%10;
        n=n/10;
        
        i++;
    }

    for(int j=0;j<i;j++){
        sum=sum+(digits[j]*digits[j]*digits[j]);
    }

    if(sum==copy){
        cout<<"yes its an armstrong number!";
    }
    else{
        cout<<"its not an armstrong number";
    }

    return 0;
}