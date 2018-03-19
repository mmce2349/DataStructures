//
//  Graph.hpp
//  DataStructures
//
//  Created by Mcentire, Mitchell on 3/19/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Graph_hpp
#define Graph_hpp

#include <set>
#include <queue>
#include <assert.h>
using namespace std;
template<class Type>
class Graph
{
private:
    static const int MAXIMUM = 20;
    bool adjacencyMatrix [MAXIMUM][MAXIMUM];
    int weightCostMatrix [MAXIMUM][MAXIMUM];
    Type graphData[MAXIMUM];
    int vertexCount;
    void depthFirstTraversal(Graph<Type> & graph, int vertex, bool markedVertices[]);
public:
    Graph();
    void addVertex(const Type& value);
    
    void addEdge(int source, int target);
    void addEdgeUndirected(int source, int target);
    void addEdgeCost(int source, int target);
    
    void removeEdge(int source, int target);
    void removeEdgeUndirected(int source, int target);
    void removeEdgeCost(int source, int target);
    
    Type& operator [] (int vertex);
    Type operator [] (int vertex) const;
    int size() const;
    
    bool hasUndirectedConnection(int source, int target)const;
    bool areConnected(int source, int target)const;
    std::set<int> neightbors(int vertex) const;
    
    void depthFirstTraversal(Graph<Type> & graph, int vertex);
    void breadthFirstTraversal(Graph<Type> & graph, int vertex);
    int costTraversal(Graph<Type> & graph, int vertex);
    
};

template<class Type>
const int Graph<Type>:: MAXIMUM;

template<class Type>
Graph<Type> :: Graph()
{
    
    this->vertexCount = 0;
}
//We can't delete things
template<class Type>
int Graph<Type> :: size() const
{
    return vertexCount;
}

template<class Type>//side into vertex
Type& Graph<Type> :: operator[](int vertex)
{
    assert(vertex < vertexCount);
    return graphData[vertex];
}
template<class Type>
Type Graph<Type> :: operator[](int vertex) const
{
    assert(vertex < vertexCount);
    return graphData[vertex];
}
template<class Type>
void Graph<Type> :: addVertex(const Type& value)
{
    assert(vertexCount < MAXIMUM);
    int newVertexNumber = vertexCount;
    vertexCount;
    
    for(int otherVertexNumber = 0; otherVertexNumber < vertexCount; otherVertexNumber)
    {
        adjacencyMatrix[otherVertexNumber][newVertexNumber] = false;
        adjacencyMatrix[newVertexNumber][otherVertexNumber] = false;
    }
    graphData[newVertexNumber] = value;
}
template<class Type>
void Graph<Type>:: removeEdge(int source, int target)
{
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    adjacencyMatrix[source][target] = false;
}
template<class Type>
void Graph<Type> :: removeEdgeUndirected(int source, int target)
{
    assert(source >= 0 && source < vertexCount && target >= 0 && target < vertexCount);
    adjacencyMatrix[source][target] = false;
    adjacencyMatrix[target][source] = false;
}


#endif /* Graph_hpp */
