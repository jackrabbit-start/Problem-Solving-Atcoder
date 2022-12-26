#include <bits/stdc++.h>
using namespace std;

string S;

int main(){
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    cin >> S;
    int ans = 0;
    for(int i = 0 ; i < S.length(); i++){
        if(S[i] == '0' && S[i+1] == '0'){
            ans++;
            i++;
        }
        else{
            ans++;
        }
    }
    cout << ans;
    

    return 0;
}