#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter the size of the array (Rows and collumns respectively):: ";
    cin>>m;
    cin>>n;
    int arr[m][n];


    int sumrow[m];
    int sumcol[n];

    cout<<"Enter the elements of the array :: "<<endl;
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            sum+=arr[i][j];
        }
        sumrow[i]=sum;
    }
    





    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum+=arr[j][i];
        }
        sumcol[i]=sum;
    }

    cout<<endl<<endl<<"The matrix is :: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }



    cout<<"The sum of rows are respectively ::  ";
    for(int i=0;i<m;i++){
        cout<<sumrow[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    cout<<"The sum of collumns are respectively ::  ";
    for(int i=0;i<n;i++){
        cout<<sumcol[i]<<" ";
    }
    cout<<endl;


    return 0;
}