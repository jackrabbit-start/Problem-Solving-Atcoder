#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;


int N;

int main(){
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    cin >> N;
    for(int i = N ; i >= 0 ; i--){
        cout << i << "\n";
    }

    return 0;
}