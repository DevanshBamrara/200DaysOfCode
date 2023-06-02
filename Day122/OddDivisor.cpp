#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); 
    std::cin.tie(NULL);
    int t;
    std::cin>>t;
    while(t--){
        long long n;
        std::cin>>n;
        if(n%2!=0){
            cout<<"YES\n";
        }
        else{
            int flag = 0;
            while(n>=1){
                n=n/2;
                if(n%2!=0&&n!=1){
                    flag = 1;
                    break;
                }
            }
            if(flag)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
}