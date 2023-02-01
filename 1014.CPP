#include<bits/stdc++.h>
using namespace std;

/* Function to get product of digits */
long long getProduct(long long n)
{
    long long product = 1;
 
    while (n != 0)
    {
        product = product * (n % 10);
        n = n / 10;
    }
 
    return product;
}

int main(){
    
    long long n; cin>>n;

    if(n==0) cout<<"10\n";
    else if(n>=1 && n<=9) cout<<n<<endl;
    else if(n>=10){
        long long q = (n/2) * (n/2);
        long long Q = getProduct(q);

        if(q==Q) cout<<q;
        else cout<<"-1"<<endl;
        
    }
    
    return 0;
}

