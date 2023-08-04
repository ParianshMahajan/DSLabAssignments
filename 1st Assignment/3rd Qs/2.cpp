#include<bits/stdc++.h>
using namespace std;

int main(){
    int m1,n1,m2,n2;
    cout<<"Enter the size of the matrix 1 (Rows and collumns respectively):: ";
    cin>>m1;
    cin>>n1;
    cout<<"Enter the size of the matrix 2 (Rows and collumns respectively):: ";
    cin>>m2;
    cin>>n2;
    int arr1[m1][n1];
    int arr2[m2][n2];

    if(n1!=m2){
        cout<<"Invalid dimensions"<<endl;
        return 0;
    }

    cout<<"Enter the elements of the matrix 1 :: "<<endl;
    for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<endl<<"Enter the elements of the matrix 2 :: "<<endl;
    for(int i=0;i<m2;i++){
        for(int j=0;j<n2;j++){
            cin>>arr2[i][j];
        }
    }
    

    int arr[m1][n2];

    for(int i=0;i<m1;i++){
        for(int j=0;j<n2;j++){
            int sum=0;
            for(int k=0;k<m2;k++){
                sum+=arr1[i][j]*arr2[k][j];
            }
            arr[i][j]=sum;
        }
    }




    cout<<endl<<endl<<"The multiplication matrix is :: "<<endl;
    for(int i=0;i<m1;i++){
        for(int j=0;j<n2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }






    return 0;
}