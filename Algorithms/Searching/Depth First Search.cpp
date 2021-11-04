// Algorithm - Depth First Search

// Algorithm Steps:

// 1. Create a recursive function that takes the index of the node and a visited array.
// 2. Mark the current node as visited and print the node.
// 3. Traverse all the adjacent and unmarked nodes and call the recursive function with the index of the adjacent node.


#include <iostream>
#include <vector>
#include <list>
#include <map>

using namespace std;

class Graph
{
public:
	map<int, bool> visited;
	map<int, list<int>> adj;

	// function to add an edge to graph
	void addEdge(int v, int w);

	// DFS traversal of the vertices
	// reachable from v
	void DFS(int v);
};

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w); // Add w to v’s list.
}

void Graph::DFS(int v)
{
	// Mark the current node as visited and
	// print it
	visited[v] = true;
	cout << v << " ";

	// Recur for all the vertices adjacent
	// to this vertex
	list<int>::iterator i;
	for (i = adj[v].begin(); i != adj[v].end(); ++i)
		if (!visited[*i])
			DFS(*i);
}


int main()
{
	// Create a graph given in the above diagram
	Graph g;
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 2);
	g.addEdge(2, 0);
	g.addEdge(2, 3);
	g.addEdge(3, 3);

	cout << "Following is Depth First Traversal"
	     " (starting from vertex 2) \n";
	g.DFS(2);

	return 0;
}


// Time complexity: O(V + E), where V is the number of vertices and E is the number of edges in the graph.
// Space Complexity: O(V). Since an extra visited array is needed of size V.
