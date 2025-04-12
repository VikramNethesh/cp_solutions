#include <bits/stdc++.h>
using namespace std;
int main(){
    long int t,n,target;
    cin>>t;
    for(long int i=0;i<t;i++){
        cin>>n>>target;
        long int strength[n];
        for(long int j=0;j<n;j++){
            cin>>strength[j];
        }
        sort(strength,strength+n);
        long int count = 0;
        long int j = n-1;
        while(j>=0){
            if(strength[j]>=target){
                count++;
                j--;
            }else {
                long int k=1;
                while(j>=0){
                    if(strength[j]*k>=target){
                        count++;
                        j--;
                        break;
                    }else{
                        j--;
                        k++;
                    }
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
