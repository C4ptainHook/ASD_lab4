#include "Graph.h"

 Graph::Graph(int vertises)
 {
    v = vertises;
    adj = vector<vector<int>>(v, vector<int>(v, 0));
 }
Graph::Graph() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(0,1);
    uniform_int_distribution<int> dist1(2,10);
    v=dist1(gen);
    adj = vector<vector<int>>(v, vector<int>(v, 0));
    for (int i = 0; i < v; ++i) {
        for (int j = 1; j < v; ++j) {
            if(dist(gen)==1) {
                adj[i][j] = 1;
                adj[j][i] = 1;
            }
        }
    }
}
void Graph::addEdge(int x,int y)
{
    adj[x][y] = 1;
    adj[y][x] = 1;
}
ostream& operator<<(ostream& os, const Graph& _graph) {
    os<<"  ";
    for (int i = 0; i < _graph.v; ++i) {
        os<<i<<" ";
    }
    os<<endl;
    for (int i = 0; i < _graph.v; ++i) {
        os<<i<<" ";
        for (int j = 0; j < _graph.v; ++j) {
            os<<_graph.adj[i][j]<<" ";
        }
        os<<endl;
    }
    return os;
}
// Function to perform BFS on the graph
void bfs(int start, Graph& _graph)
{
    vector<bool> visited(_graph.adj.size(), false);
    vector<int> q;
    q.push_back(start);

    // Set source as visited
    visited[start] = true;

    int vis;
    cout<<"\nResult:[";
    while (!q.empty()) {
        vis = q[0];

        // Print the current node
        cout << vis << " ";
        q.erase(q.begin());

        // For every adjacent vertex to the current vertex
        for (int i = 0; i < _graph.adj[vis].size(); i++) {
            if (_graph.adj[vis][i] == 1 && (!visited[i])) {
                q.push_back(i);
                visited[i] = true;
            }
        }
    }
    cout<<"]";
}

