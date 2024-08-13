#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    string s;
    int t, n, d;
 
    cin>>t;
 
    while(t--){
        cin>>n>>d>>s;
        string str=to_string(d);
        int i;
        for(i=0; i<n; i++){
            if(s[i]<str[0]){
                break;
            }
        }
        cout<<s.insert(i, str)<<endl;
    }
 
    return 0;
 
}
