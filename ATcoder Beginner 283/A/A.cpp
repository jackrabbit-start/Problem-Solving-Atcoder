#include <bits/stdc++.h>
using namespace std;

int A, B;
int main(){
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    cin >> A >> B;
    int ans = 1;
    for(int i = 0 ; i < B; i++){
        ans *= A;
    }
    cout << ans;

    return 0;
}