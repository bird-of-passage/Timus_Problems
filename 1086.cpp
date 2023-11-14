#include<bits/stdc++.h>
using namespace std;

const int N = 1000000;
bool sieve[N+1];
vector<int>ds;
void createSieve(){
    // int cnt = 0;
    for(int i=2; i<=N; i++){
        sieve[i] = true;
    }

    for(int i=2; i*i<=N; i++){
        if(sieve[i] == true){
            for(int j = i*i ; j<=N; j+=i){
                sieve[j] = false;
            }
        }
    }

    for(int i=2; i<=N; i++){
        if(sieve[i] == true){
            ds.push_back(i);
            // cnt++;
        }
    }

    // cout<<cnt<<endl;
    

    //5 * 10^6
    // int limit = 5*1000000;
    // int cnt = 0;
    // int size = 1;
    // for(int i = 2;;i++){
    //     if(sieve[i] == true){
    //         cnt++;
    //     }
    //     if(cnt == limit){
    //         size = i;
    //         break;
    //     }
    // }
    // cout<<size<<endl;
}



int main(){
    
    createSieve();
    
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<ds[n-1]<<endl;
    }
    
}

