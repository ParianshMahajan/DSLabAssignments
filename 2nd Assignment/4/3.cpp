#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter the String :: ";
    cin>>s;
    int n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            s.erase(s.begin()+i,s.begin()+i+1);
            i--;
        }
    }
    
    cout<<"The Reversed String is :: "<<s;



    return 0;
}