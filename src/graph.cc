#include <unistd.h>
#include <vector>

using namespace std;

template <class T>;

struct node{
   int id;
   T value;
   vector<edge> neighbors;
};

struct edge {
  int node_id;
  int wheight;
}

class Graph {
  public:
    Graph(int nodes, double density){

    }

    int V (){
      return adjacency_list.size();
    }

    int E (){
      return edges;
    }

    bool adjacent (int x, int y){
      for (Iter iter = this->adjacency_list[x]->neighbors.begin(); iter!=this->adjacency_list[x]->neighbors.end(); ++iter) {
        if ((*iter)->node_id == y)
          return true
      }
      return false
    }

    vector<int> neighbors (int x){

    }

    void add (int x, int y){
      edge e1 = {y, 0};
      edge e2 = {x, 0};
      this->adjacency_list[x]->neighbors.push_back(e1)
      this->adjacency_list[x]->neighbors.push_back(e2)
    }

    void delete (int x, int y){
      for (Iter iter = this->adjacency_list[x]->neighbors.begin(); iter != this->adjacency_list[x]->neighbors.end();) {
          if ((*iter)->node_id == y)
            iter = this->adjacency_list[x]->neighbors.erase(iter);
          else
            ++iter;
      }
      for (Iter iter = this->adjacency_list[y]->neighbors.begin(); iter != this->adjacency_list[y]->neighbors.end();) {
          if ((*iter)->node_id == x)
            iter = this->adjacency_list[y]->neighbors.erase(iter);
          else
            ++iter;
      }
    }

    T get_node_value (int x){

    }

    void set_node_value(int x, T a){

    }

    int get_edge_value(int x, int y){

    }

    void set_edge_value (int x, int y, int v){

    }

  private:
    int edges
    vector<node> adjacency_list;
}
