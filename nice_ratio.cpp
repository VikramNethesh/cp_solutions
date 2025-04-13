#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int test,n;
    cin>>test;
    int n_vals[test];
    for(int i=0;i<test;i++){
        cin>>n_vals[i];
    }
    int prime_slots= *max_element(n_vals,n_vals+test);
    vector<bool> primes(prime_slots+1,true);
    primes[0]=false;
    primes[1]=false;
    for(int i=2;i<=prime_slots;i++){
        if(primes[i]){
            for(int j=i+i;j<prime_slots;j++){
                if(primes[j]){
                    primes[j]=false;
                }
            }
        }
    }
    for(int n:n_vals){
        int count=0;
        for(int a=1;a<n;a++){
            for(int b=a+1;b<=n;b++){
                if(primes[(a*b)/pow(gcd(a,b),2)]){
                    count++;
                }
            }
        }
        cout<<count<<'\n';
    }
    return 0;
}
