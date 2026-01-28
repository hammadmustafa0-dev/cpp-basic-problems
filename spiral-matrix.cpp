//PRINTS MATRIX ELEMENTS IN A SPIRAL WAY

#include <iostream>
#include <iomanip>
using namespace std;


int main(){


    int col,row,arr[20][20];

                
    cout<<"enter the number of rows: ";
    cin>>row;
    cout<<"enter number of coloumns: ";
    cin>>col;


    int srow=0,erow=row-1,scolumn=0,ecolumn=col-1;                  //srow ---> starting row , erow ----> ending row


    for(int a=0;a<row;a++){
        for(int b=0;b<col;b++){
            cout<<"enter the value in ["<<a<<"]["<<b<<"]";
            cin>>arr[a][b];
        }
    }


    cout<<"matrix: "<<endl;

    for(int c=0;c<row;c++){
        for(int d=0;d<col;d++){
            cout<<setw(2)<<arr[c][d]<<" ";
        }
        cout<<endl;
    }

    cout<<"\n";

    cout<<"output in spiral way: "<<endl;
    cout<<"\n";

    while(srow<=erow && scolumn<=ecolumn){


        for(int i=scolumn;i<=ecolumn;i++){
            cout<<arr[srow][i]<<" ";
        }

        for(int j=srow+1;j<=erow;j++){
            cout<<arr[j][ecolumn]<<" ";
        }


        if(srow<erow){

            for(int k=ecolumn-1;k>=scolumn;k--){
            cout<<arr[erow][k]<<" ";
            }

        }

        if(scolumn<ecolumn){

            for(int l=erow-1;l>=srow+1;l--){
            cout<<arr[l][scolumn]<<" ";
            }

        }

        srow++; erow--; scolumn++;ecolumn--;


    }


    return 0;
}