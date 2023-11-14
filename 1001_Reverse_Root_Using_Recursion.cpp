#include<bits/stdc++.h>
using namespace std;

// The recursion stack acts as a "reverse storage" for the numbers,
// so the last input is the first one to be processed.
void processInputs(){
    long long num;
    if(cin>>num){
        processInputs();
        cout<<setprecision(4)<<fixed<<sqrt(num)<<'\n';
    }
}

int main(){

    processInputs();

    return 0;
}