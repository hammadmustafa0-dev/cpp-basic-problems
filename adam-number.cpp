#include <iostream>
using namespace std;

int main(){

    int n,reverse=0,reverse2=0;
    int i=0,j=0;
    int digit;
    long square;
    cout<<"enter the number: ";
    cin>>n;


    //first square then reverse

    square = n*n;
    while(square>0){
        digit=square%10;
        reverse=reverse*10+digit;
        square=square/10;
        i++;
    }

    //first reverse then square


    int digit2;
    while(n>0){

        digit2=n%10;
        reverse2=reverse2*10+digit2;
        n=n/10;


    }

    long sq=reverse2*reverse2;

    if(reverse==sq){
        cout<<"its adam number!";
    }

    else {
        cout<<"its not an adam number!!";
    }

    return 0;
}
