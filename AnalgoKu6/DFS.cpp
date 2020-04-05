#include <iostream>
#include <list>
using namespace std;

struct Graph {
    int vertex;
    list<int>* edge;
};
Graph G;

void makeGraph(Graph& G, int vertex)
{
    G.vertex = vertex;
    G.edge = new list<int>[vertex];
}

void addEdge(Graph& G, int i, int j)
{
    G.edge[i].push_back(j);
}

void traversal(Graph G)
{
    for (int i=0; i<G.vertex; ++i)
    {
        cout<<"\n vertex "<<i<<"\n head";
        for (auto x : G.edge[i])
            cout<<" -> "<<x;
        cout<<endl;
    }
}

void DFSUtil(int v, bool visited[])
{
    visited[v] = true;
    cout<<v<<" ";

    for (list<int>::iterator i = G.edge[v].begin(); i != G.edge[v].end(); ++i)
        if(!visited[*i])
            DFSUtil(*i, visited);
}

void DFS(Graph G, int s)
{
    bool *visited = new bool[G.vertex];
    for (int i=0; i<G.vertex; i++)
        visited[i] = false;
    
    for (int i=0; i<G.vertex; i++)
        if (visited[i] == false)
            DFSUtil(i, visited);
}

int main()
{
    makeGraph(G, 8);
    
    addEdge(G, 0, 1);
    addEdge(G, 0, 2);

    addEdge(G, 1, 0);
    addEdge(G, 1, 2);
    addEdge(G, 1, 3);
    addEdge(G, 1, 4);

    addEdge(G, 2, 0);
    addEdge(G, 2, 1);
    addEdge(G, 2, 4);
    addEdge(G, 2, 6);
    addEdge(G, 2, 7);

    addEdge(G, 3, 1);
    addEdge(G, 3, 4);
    
    addEdge(G, 4, 1);
    addEdge(G, 4, 2);
    addEdge(G, 4, 3);
    addEdge(G, 4, 5);

    addEdge(G, 5, 4);
    
    addEdge(G, 6, 2);
    addEdge(G, 6, 7);

    addEdge(G, 7, 2);
    addEdge(G, 7, 6);

    cout<<"DFS starting from vertex 0\n";
    DFS(G,0);
}