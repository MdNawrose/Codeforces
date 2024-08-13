#include <bits/stdc++.h>
using namespace std;
int main(){
 
    string n, pi="314159265358979323846264338327" ;
 
    int t, count=0;
 
    cin>>t;
 
    for(int i=0; i<t; i++){
        cin>>n;
        for(int j=0; j<n.size(); j++){
            if(n.at(j)==pi.at(j)){
                count++;
            }
            else{
                break;
            }
        }
        cout<<count<<endl;
        count=0;
    }
 
    return 0;
 
}
