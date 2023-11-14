#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<long long>v;
    long long n;
    while(cin>>n){ // alt of EOF in C : reading input until there is no more input available.
        v.push_back(n);
    }

    for(int i = v.size()-1; i>=0; i--){
        cout<<setprecision(4)<<fixed<<sqrt(v[i])<<'\n';
    }
}