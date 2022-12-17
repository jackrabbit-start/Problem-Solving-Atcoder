#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;


vector<long long int> graph[300000];
long long int visited[300000];
vector<pair<long long int, long long int>> v;
long long int counte[300000][2];
long long int DP[300000][2];
long long n_graph;

long long int N, M;
long long int check;
long long int black;
long long int white;
long long int ans;
void DFS(long long int now){
    for(long long int i = 0; i < graph[now].size(); i++){
        long long int next = graph[now][i];
        if(!visited[next]){
            if(visited[now] == 1){
                visited[next]= 2;
                white++;
                DFS(next);
            }
            else{
                visited[next] = 1;
                black++;
                DFS(next);
            }

        }
        else{
            if(visited[next] == visited[now]){
                check = 0;
                return;
            }           
        }
    }
}
void DFS2(long long int now){
    if(now == n_graph){
        ans = max(ans, (DP[now-1][0]*(N-DP[now-1][0])));
        return;
    }
    DP[now][0] = DP[now-1][0] + v[now].first;
    DFS2(now+1);
    DP[now][0] = DP[now-1][0] + v[now].second;
    DFS2(now+1);
}


int main(){
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    cin >> N >> M;
    ans = 0;
    n_graph = 0;
    check = 1;
    for(long long int i = 0 ; i < M ; i++){
        long long int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for(long long int i = 1; i <= N; i++){
        black = 1;
        white = 0;
        if(!visited[i]){
            visited[i] = 1;
            DFS(i);
            counte[n_graph][0] = black;
            counte[n_graph][1] = white;
            if(black>white) v.push_back(make_pair(black,white));
            else v.push_back(make_pair(white,black));
            n_graph++;
        }
    }
    sort(v.begin(),v.end(), greater<>());
    if(check == 0) {cout << "0\n";}
    else{
        
        DP[0][0] = v[0].first;
        DP[0][1] = v[0].second;
        for(long long int i = 1 ; i < n_graph; i++){
            if(((DP[i-1][0]+v[i].first) * (DP[i-1][1]+v[i].second)) > ((DP[i-1][0]+v[i].second)*(DP[i-1][1]+v[i].first))){
                DP[i][0] = DP[i-1][0] + v[i].first;
                DP[i][1] = DP[i-1][1] + v[i].second;
            }
            else{
                DP[i][0] = DP[i-1][0] + v[i].second;
                DP[i][1] = DP[i-1][1] + v[i].first;
            }
        }

        //cout << DP[n_graph-1][0] << " " <<DP[n_graph-1][1] << " "<< n_graph<<"\n";
        cout << DP[n_graph-1][0]*DP[n_graph-1][1]-M <<"\n";
    }
    
    return 0;
}