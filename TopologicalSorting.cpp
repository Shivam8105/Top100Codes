#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void dfs(int node, vector<bool> &visited, stack<int> &st, vector<vector<int>> &adj) {
    visited[node] = true;

    for (int neighbor : adj[node]) {
        if (!visited[neighbor])
            dfs(neighbor, visited, st, adj);
    }

    st.push(node); // push after visiting all neighbors (postorder)
}

void topologicalSort(int V, vector<vector<int>> &adj) {
    vector<bool> visited(V, false);
    stack<int> st;

    for (int i = 0; i < V; i++) {
        if (!visited[i])
            dfs(i, visited, st, adj);
    }

    cout << "Topological Sort (DFS): ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main() {
    int V = 6;
    vector<vector<int>> adj(V);

    // Sample DAG:
    adj[5].push_back(2);
    adj[5].push_back(0);
    adj[4].push_back(0);
    adj[4].push_back(1);
    adj[2].push_back(3);
    adj[3].push_back(1);

    topologicalSort(V, adj);
    return 0;
}
