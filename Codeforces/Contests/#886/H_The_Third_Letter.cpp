#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Edge {
    int to;
    long long weight;
};

bool BFS(int start, vector<bool> &visited, vector<long long>& pos, const vector<vector<Edge>> &adj) {
    queue<int> q;
    
    q.push(start);
    visited[start] = true;
    pos[start] = 0;

    while(!q.empty()) {
        int u = q.front();
        q.pop();

        for(auto edge : adj[u]) {
            int v = edge.to;
            long long w = edge.weight;

            if(!visited[v]) {
                visited[v] = true;
                pos[v] = pos[u] + w;
                q.push(v);
            } else {
                if(pos[v] != pos[u] + w) {
                    return false;
                }
            }
        }
    }
    return true;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<Edge>> adj(n+1);
    vector<bool> visited(n + 1, false);
    vector<long long> pos(n + 1, 0);

    for(int i = 0; i < m; ++i) {
        int a, b;
        long long d;
        cin >> a >> b >> d;
        adj[b].push_back({a, d});
        adj[a].push_back({b, -d});
    }
    bool possible = true;
    
    for(int i = 1; i <= n; ++i) {
        if(!visited[i]) {
            if(!BFS(i, visited, pos, adj)) {
                possible = false;
                break;
            }
        }
    }

    if(possible) cout << "YES\n";
    else cout << "NO\n";


}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) solve();

    return 0;
}