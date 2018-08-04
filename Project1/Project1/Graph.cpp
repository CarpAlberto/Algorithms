#include "forward.h"

struct vertex {
	
	typedef pair<int, vertex*> ve;
	vector<ve> adj;
	string name;
	vertex(string s) 
		: name(s) {}
};

class graph
{
public:
	typedef map<string, vertex *> vmap;
	vmap work;
	void addvertex(const string&);
	void addedge(const string& from, const string& to, double cost);
	void DepthFirstR(const std::string& node,std::vector<string>& visited)
	{
		visited.push_back(node);
		std::cout << node << std::endl;
		for (auto& item : work) {
			if (std::find(visited.begin(), visited.end(), item.first) != visited.end()) {
				DepthFirstR(item.first, visited);
			}
		}
	}
	void DepthFirst(const std::string& node, std::vector<string>& visited)
	{
		std::vector<string> v;
		DepthFirst(node, v);
	}
};

void graph::addvertex(const string &name)
{
	vmap::iterator itr = work.find(name);
	if (itr == work.end())
	{
		vertex *v;
		v = new vertex(name);
		work[name] = v;
		return;
	}
	std::cout << "\nVertex already exists!";
}

void graph::addedge(const string& from, const string& to, double cost)
{
	vertex *f = (work.find(from)->second);
	vertex *t = (work.find(to)->second);

	pair<int, vertex *> edge = make_pair(cost, t);
	f->adj.push_back(edge);
}

class Graph2 {

	int V; // Count vertices
	std::list<int> * adj; // afijacen list



	void DFsR(int v, bool visited[])
	{
		visited[v] = true;
		std::cout << v;
		auto children = adj[v];
		for (auto& item : children) {
			if (!visited[item]) {
				DFsR(item, visited);
			}
		}
	}
public:
	Graph2(int v) : V(v)
	{
		adj = new std::list<int>[V];
	}
	void addEdge(int v, int w)
	{
		adj[v].push_back(w);
	}
	
	void DFS(int v) {

		bool* visited = new bool[V];
		for (int i = 0; i < V; i++) {
			visited[i] = false;
		}
		DFsR(v, visited);
	}

	void BFS(int v) {
		
		bool* visited = new bool[V];
		for (int i = 0; i < V; i++) {
			visited[i] = false;
		}

		std::queue<int> _queue;
		_queue.push(v);
		while (!_queue.empty()) {

			auto item = _queue.front(); _queue.pop();
			visited[item] = true;
			std::cout << item;
			auto children = adj[item];

			for (auto& item : children) {
				if (!visited[item]) {
					_queue.push(item);
				}
			}
		}
	}
	
	void TopologicalSort()
	{
		stack<int> Stack;

		// Mark all the vertices as not visited
		bool *visited = new bool[V];
		for (int i = 0; i < V; i++)
			visited[i] = false;
	}


};


void BuildGraphDF()
{
	Graph2 g(4);
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 2);
	g.addEdge(2, 0);
	g.addEdge(2, 3);
	g.addEdge(3, 3);

	cout << "Following is Depth First Traversal"
		" (starting from vertex 2) \n";
	g.DFS(2);

	g.BFS(2);
}