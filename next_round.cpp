#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,k_score=1;
    cin>>n>>k;
    int scores[n];
    for(int i=0;i<n;i++){
        cin>>scores[i];
        if(i==k-1){
            k_score = max(scores[i],1);
        }
        if(scores[i]<k_score){
            cout<<i;
            return 0;
        }
    }
    cout<<n;
    return 0;
}
