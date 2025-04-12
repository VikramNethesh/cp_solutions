#include <bits/stdc++.h>
using namespace std;

int main(){
    long int test,n,m,k;
    cin>>test;
    for(long int t=0; t<test; t++){
        cin>>n>>m>>k;
        for(long int i=1;i<=m;i++){
            long int avail_cols = (m/(i+1))*i + m%(i+1);
            if(avail_cols*n>=k){
                cout<<i<<'\n';
                break;
            }
        }
    }
    return 0;
}
