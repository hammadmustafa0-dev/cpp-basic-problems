//add elements of an array based on following rules:

//program starts adding elements from start.
//when it encounters first ocurrence of the number '1' , it should stop adding elements.
//when programs encounter another '1' , it again starts adding elements
//note:dont add the '1's



#include <iostream>
using namespace std;


int main(){


    int count=0,sum=0;

    int arr[10]={4,2,3,1,5,6,1,7,8,9};

    for(int i=0;i<10;i++){

        if(arr[i]==1){
            count++;
        }

        if(count%2==0 && arr[i]!=1){
            sum+=arr[i];
        }


    }

    cout<<"array: ";

    for(int j=0;j<10;j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    cout<<"sum: "<<sum<<endl;





    return 0;
}