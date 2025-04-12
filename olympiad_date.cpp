#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int array[n];
        for(int j=0;j<n;j++){
            cin>>array[j];
        }
        map<int,int> count_log = {{0,3},{1,1},{2,2},{3,1},{5,1}};
        int total_count = 8;
        for(int j=0;j<n;j++){
                if(count_log[array[j]] && count_log[array[j]]>0){
                    count_log[array[j]]--;
                    total_count--;
                    if(total_count==0){
                        cout<<j+1<<endl;
                        break;
                    }
                }
        }
        if(total_count!=0){
            cout<<0<<endl;
        }
    }
    return 0;
}
