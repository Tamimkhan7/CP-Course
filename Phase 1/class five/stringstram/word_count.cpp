#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

class Graph {
public:
    int vertices;
    vector<vector<int>> adjList;

    Graph(int V) : vertices(V), adjList(V) {}

    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    void dfs(int start, vector<bool>& visited) {
        stack<int> s;
        s.push(start);
        visited[start] = true;

        while (!s.empty()) {
            int current = s.top();
            s.pop();
            cout << current << " ";

            for (int neighbor : adjList[current]) {
                if (!visited[neighbor]) {
                    s.push(neighbor);
                    visited[neighbor] = true;
                }
            }
        }
    }

    void bfs(int start, vector<bool>& visited) {
        queue<int> q;
        q.push(start);
        visited[start] = true;

        while (!q.empty()) {
            int current = q.front();
            q.pop();
            cout << current << " ";

            for (int neighbor : adjList[current]) {
                if (!visited[neighbor]) {
                    q.push(neighbor);
                    visited[neighbor] = true;
                }
            }
        }
    }
};

int main() {
    // Create a sample graph
    Graph graph(6);
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(1, 4);
    graph.addEdge(2, 5);

    vector<bool> visited(graph.vertices, false);

    cout << "DFS traversal of graph starting from node 0: ";
    graph.dfs(0, visited);
    cout << endl;

    fill(visited.begin(), visited.end(), false); // Reset visited array

    cout << "BFS traversal of graph starting from node 0: ";
    graph.bfs(0, visited);
    cout << endl;

    return 0;
}
