#include <iostream>
using namespace std;

struct Graph {
    int vertex;
    bool** edge;
};
Graph G;

void makeGraph(Graph& G, int vertex)
{
    G.vertex = vertex;
    G.edge = new bool*[vertex];
    for (int i=0; i<vertex; i++) {
        G.edge[i] = new bool[vertex];
        for (int j=0; j<vertex; j++)
            G.edge[i][j] = false;
    }
}

void addEdge(Graph& G, int i, int j)
{
    G.edge[i][j] = true;
    G.edge[j][i] = true;
}

void traversal(Graph G)
{
    cout<<"# : ";
    for (int i=0; i<G.vertex; i++) {
        cout<<i<<" ";
    }
    cout<<endl<<"---";
    for (int i=0; i<G.vertex; i++) {
        cout<<"--";
    }
    cout<<endl;
    for (int i=0; i<G.vertex; i++) {
        cout<<i<<" : ";
        for (int j=0; j<G.vertex; j++)
            cout<<G.edge[i][j]<< " ";
        cout<<endl;
    }
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

    traversal(G);
}