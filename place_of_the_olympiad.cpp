#include <bits/stdc++.h>
using namespace std;

int main(){
    long int test,n,m,k;
    cin>>test;
    for(long int t=0; t<test; t++){
        cin>>n>>m>>k;
        long int cols_needed = k/n;
        if(k%n!=0){
            cols_needed++;
        }
        long int free_cols = m-cols_needed;
        long int max_bench = cols_needed/(free_cols+1);//If there is one free column then it can split the needed columns into 2, if two free cols then 3 parts and so on thats why I have used (free_cols+1)
        if(cols_needed%(free_cols+1)!=0){
            max_bench++;
        }
        cout<<max_bench<<'\n';
    }
    return 0;
}
