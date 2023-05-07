#ifndef LAB_ASD_GRAPH_4_GRAPH_H
#define LAB_ASD_GRAPH_4_GRAPH_H

#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<random>

using namespace std;

class Graph {
    int v;
    vector<vector<int>> adj;
public:
     Graph(int);
     Graph();
     void addEdge(int,int);
   friend void bfs(int,Graph&);
   friend ostream& operator<<(ostream&, const Graph&);
};

#endif //LAB_ASD_GRAPH_4_GRAPH_H
