#include <vector>

class Graph {
private:
    int V; // Number of vertices
    std::vector<std::vector<int>> adjMatrix;

public:
    Graph(int vertices) : V(vertices), adjMatrix(vertices, std::vector<int>(vertices, 0)) {}

    void addEdge(int u, int v, int weight = 1) { // weight = 1 for unweighted graphs
        adjMatrix[u][v] = weight;
        adjMatrix[v][u] = weight; // For undirected graph. Remove this for directed graph.
    }

    // Other methods like printGraph, etc., can be added here
};

