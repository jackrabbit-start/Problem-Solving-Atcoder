#include <bits/stdc++.h>
using namespace std;

string S;
int arr[50] = {0,};
int checking;
vector<int> starting;
vector<int> starting2;
vector<int> finish;
int number;
int main(){
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    cin >> S;
    checking = 0;
    for(int i = 0 ; i < S.length();i++){
        if(S[i] == '('){
            starting.push_back(i);
            starting2.push_back(i);
        }
        else if(S[i] == ')'){
            int point = starting2.back();
            starting2.pop_back();
            int t = finish.size();
            for(int j = i-1; j >= point+1; j--){
                if(S[j] == ')'){
                    auto iter = find(finish.begin(), finish.end() , j);
                    int a = iter - finish.begin();
                    j = starting[a];
                }
                else if(S[j] != '(' && S[j]!= ')') arr[(int)(S[j]-97)] = 0;
            }
            finish.insert(finish.begin(),i);
        }
        else{
            if(arr[(int)(S[i]-97)] > 0){
                cout <<"No";
                return 0;
            } 
            arr[(int)(S[i]-97)] += 1;;
        }
        
    }
    cout << "Yes";

    return 0;
}