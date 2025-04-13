#include <bits/stdc++.h>
using namespace std;
int main(){
    double test,n,m,l,r;
    cin>>test;
    for(int t=0;t<test;t++){
        cin>>n>>m>>l>>r;
        int l1 = (int) ceil((l/n*m));
        int r1 = (int)ceil((r/n*m));
        cout<<l1<<' '<<r1<<'\n';
    }
    return 0;
}
