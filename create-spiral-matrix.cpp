/*creating a 4x4 spiral matrix

1  2  3  4
12 13 14 5
11 16 15 6
10 9  8  7

exact this one

*/





#include <iostream>
#include <iomanip>
using namespace std;


int main(){


    int arr[4][4];

    int srow=0,erow=3,scol=0,ecol=3;

    int x=1;
    while(srow<erow){


        for(int i=scol;i<=ecol;i++){
            arr[srow][i]=x;
            x++;
        }

        for(int j=srow+1;j<=erow;j++){
            arr[j][ecol]=x;
            x++;
        }

        for(int k=ecol-1;k>=scol;k--){
            arr[erow][k]=x;
            x++;
        }

        for(int l=erow-1;l>srow;l--){
            arr[l][scol]=x;
            x++;
        }

        srow++;erow--;scol++,ecol--;

    }


    for(int a=0;a<=3;a++){
        for(int b=0;b<=3;b++){
            cout<<setw(2)<<arr[a][b]<<" ";
        }
        cout<<endl;
    }






    return 0;
}