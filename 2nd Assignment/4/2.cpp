#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter the String :: ";
    cin>>s;
    
    for(int i=0;i<s.length()/2;i++){
        swap(s[i],s[s.length()-i-1]);
    }
    
    cout<<"The Reversed String is :: "<<s;



    return 0;
}