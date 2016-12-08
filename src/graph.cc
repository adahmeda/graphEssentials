#include <unistd.h>
#include <vector>

using namespace std;

template <class T>;


struct node{
   int id;
   T value;
};

struct node_wrapper{
  node* data;
  vector<edge> neighbors;
}

struct edge {
  int node_id;
  int wheight;
}

class Graph {
  public:
    Graph(){}

    Graph(int size, double density=1){
      bool **graph;
      srand(time(0));
      graph = new bool*[size]
      for(int i = 0; i < size; ++i)
        graph[i] = new bool[size]
      for (int i=0; i< size; ++i)
        for (int j = i; j < size; ++j)
          if (i == j)
            graph[i][j]=false;
          else
            graph[i][j] = graph[j][i] = (prob() < density)
    }

    ~Graph(){

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

    bool is_connected(){
      int old_size = 0, c_size = 0;
      bool* close = new bool[size];
      bool* open = new bool[size];
      while(c_cize < size){
        for (int i = 0; i < size; ++i)
          old_size = c_size;
          if (open[i] && (close[i] == false)){
            close[i] = true;
            c_size++;
          }
          for (int j = 0; j < size; ++j)
            open[j] = open[j] || graph[i][j]
      }
      if (c_size == size)
        return true;
      if (old_size == c_size)
        return false;
    }

  private:
    int edges
    vector<node_wrapper> adjacency_list;
}
