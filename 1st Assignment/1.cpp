#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array :: ";
    cin>>n;
    int arr[n];

    cout<<"Enter the elements of the array :: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    map<int,bool> m1;

    for(int i=0;i<n;i++){
        if(m1[arr[i]]==true){
            for(int j=i;j<n-1;j++){
                arr[j]=arr[j+1];
            }
            arr[n-1]=-1;
        }
        else{
            m1[arr[i]]=true;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}