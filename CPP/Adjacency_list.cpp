#include <vector>
#include <list>

class Graph {
private:
    int V; // Number of vertices
    std::vector<std::list<std::pair<int, int>>> adjList; // First int for vertex, second for weight

public:
    Graph(int vertices) : V(vertices), adjList(vertices) {}

    void addEdge(int u, int v, int weight = 1) {
        adjList[u].push_back(std::make_pair(v, weight));
        adjList[v].push_back(std::make_pair(u, weight)); // Remove for directed
    }

    // Add other methods as needed
};