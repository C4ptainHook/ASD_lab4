
#include "cmake-build-debug/Graph.h"
//BFS algorithm
int main()
{

//    Graph first_graph(5);
//    first_graph.addEdge(0,1);
//    first_graph.addEdge(0,2);
//    first_graph.addEdge(1,3);
    Graph first_graph;
    cout<<first_graph;
    bfs(1, first_graph);

}