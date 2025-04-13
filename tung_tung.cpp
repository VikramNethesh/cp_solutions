#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        string p,s;
        cin>>p;
        cin>>s;
        vector<string> p_subs;
        vector<string> s_subs;
        char current = p[0];
        string store = "";
        for( char letter:p){
            if(letter==current){
                store+=current;
            }else{
                p_subs.push_back(store);
                current = letter;
                store = "";
                store+=letter;
            }
        }
        p_subs.push_back(store);

        current = s[0];
        store = "";
        for( char letter:s){
            if(letter==current){
                store+=current;
            }else{
                s_subs.push_back(store);
                current = letter;
                store = "";
                store+=letter;
            }
        }
        s_subs.push_back(store);
        int p_length = p_subs.size();
        int s_length = s_subs.size();
        if(p_length!=s_length){
            cout<<"NO"<<'\n';
            continue;
        }
        bool flag = true;
        for(int i=0;i<p_length;i++){
            if(p_subs[i][0]!=s_subs[i][0] || 2*p_subs[i].size() < s_subs[i].size()||p_subs[i]>s_subs[i]){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<'\n';
        }else{
            cout<<"NO"<<'\n';
        }
    }
}
