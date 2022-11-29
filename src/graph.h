#pragma once

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

#include "edge.h"
#include "parser.h"
#include <set>

class Graph {

  public:
    Graph();

    //std::vector<std::string> airports_;
    std::set<std::string> airports_;
    std::map<std::string, std::map<std::string, std::vector<Edge>>> getAdjList() {
      return adj_list_;
    }
    std::vector<std::string> shortestPath(std::string airport1, std::string airport2); //returns the path with least amount of edges between 2 vertices (DOES NOT ACCOUNT FOR STOPS OR ANY WEIGHTS)

  private:
    //maps the source id to a map (adjacent list) of dest id and vector of ways to get there
    std::map<std::string, std::map<std::string, std::vector<Edge>>> adj_list_;
};
