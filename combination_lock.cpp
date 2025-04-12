#include <bits/stdc++.h>
using namespace std;
int main(){
    long int t,n;
    cin>>t;
    for(long int i=0;i<t;i++){
        cin>>n;
        if(n%2==0){
            cout<<-1<<endl;
            continue;
        }
        for(long int i=1;i<=n;i+=2){
            if(i+2>n){
                cout<<i;
            } else{
                cout<<i<<' ';
            }
        }
        for(long int i=2;i<=n;i+=2){
            cout<<' '<<i;
        }
        cout<<'\n';
    }
    return 0;
}
