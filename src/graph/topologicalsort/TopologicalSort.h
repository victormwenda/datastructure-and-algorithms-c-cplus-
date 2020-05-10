//
// Created by RLIGAYE on 5/8/2020.
//

#ifndef CPP_DS_ALGORITHMS_TOPOLOGICALSORT_H
#define CPP_DS_ALGORITHMS_TOPOLOGICALSORT_H
#pragma once
#include<vector>
#include "Graph.h"

using namespace std;

class TopologicalSort {
private:
    vector<int> tSortIndegree;
    vector<int> &sortedList; // List that will contain sorted elements
    Graph graph;
    int n;
public:
    TopologicalSort(Graph const &graph, vector<int> &sortedList,int n);
    bool doTopologicalSort();
    vector<int> getSortedList() const {return sortedList;};
    ~TopologicalSort(void);

};


#endif //CPP_DS_ALGORITHMS_TOPOLOGICALSORT_H
