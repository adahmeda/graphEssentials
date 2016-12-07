#include <unistd.h>
#include <vector>

using namespace std;

template <class T>;

class Node {
  public:
    Node(int id, T value){
      this->id = id;
      this->value = value;
    }

    int get_id(){
      return this->id;
    }

    T get_value(){
      return this->value;
    }

    void set_value(T value){
      this->value = value;
    }

  private:
    int id;
    T value;
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

    }

    vector<Node> neighbors (int x){
      return
    }

    void add (int x, int y){

    }

    void delete (int x, int y){

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
    vector<vector<int>> adjacency_list;
}
