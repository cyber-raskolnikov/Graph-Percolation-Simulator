#include <set>
#include <map>
#include <random>
#include <iostream>
#include <time.h>
#include "disjointset.cpp"
using namespace std;

typedef pair<double,double> Node;
typedef pair<Node,Node> Edge;

class Graph
{
    private:
        set<Node> nodes;
        set<Edge> edges;

    public:
        //Constructors

            //non-random grid graph constructor
            Graph(int n) {
                Node aux_matrix[n][n];

                // grid node generation
                for (double i = 0.0; i < n; i+=1.0) {
                    for (double j = 0.0; j < n; j+=1.0) {
                        aux_matrix[(int) i][(int) j] = addNode(i,j);
                    }
                }

                //grid edges generation
                for (int i = 0; i < n; ++i) {
                    for (int j = 0; j < n; ++j) {
                        //if we are not in the last column
                        //add rightwards edge
                            if (j != n-1) {
                                addEdge(aux_matrix[i][j],aux_matrix[i][j+1]);
                            }

                        //if we are not in the last row
                        //add downwards edge
                        if (i != n-1) {
                            addEdge(aux_matrix[i][j],aux_matrix[i+1][j]);
                        }
                    }
                }
            }

            //random geometric graph constructor
            //needs to ensure connectivity and randomness on edges
            Graph(int n, double r) {
              Node aux_array[n];
              for (int i = 0; i < n; i++) {
                  aux_array[i] = make_pair(-1,-1);
              }
              //nodes generation
              for(int i = 0; i < n; ++i) {
                while(aux_array[i].first == -1) { //avoiding repeated nodes
                  double rand_x = rand() / double(RAND_MAX);
                  double rand_y = rand() / double(RAND_MAX);
                  aux_array[i] = addNode(rand_x,rand_y);
                }
              }
              //edges generation
              for(int i = 0; i < n; ++i) {
                for(int j = 0; j < n; ++j) {
                  if(i != j) {
                    //Node aux_node1 = *it1;
                    //Node aux_node2 = *it2;
                    if(calculateEuclidianDistance((aux_array[i]),(aux_array[j])) <= r) {
                      addEdge(aux_array[i],aux_array[j]);
                    }
                  }
                }
              }
              int connected_components = get_connected_components();
              if(connected_components == 1)
                cout << 1 << endl;
              else
                cout << 0 << endl;
            }

        //Getters

            void print_connected_components() {
                DSForest forest;
                forest.set_to_forest(nodes);
                forest.edges_form_forest(edges);
                //cout << nodes.size() << " NODES ; " << edges.size() << " EDGES" << endl;
                cout << forest.get_conected_components() << endl;//<< " CONNECTED COMPONENTS" << endl;
            }

            int get_connected_components() {
                DSForest forest;
                forest.set_to_forest(nodes);
                forest.edges_form_forest(edges);
                return forest.get_conected_components();
            }

        //Methods
            void node_percolation(double q) {
                for(auto it = nodes.begin(); it != nodes.end();) {
                    double rand_num= rand() / double(RAND_MAX);
                    if (rand_num < q) {
                        Node aux = *it;
                        removeNodeDependencies(aux);
                        it = nodes.erase(it);
                    }
                    else
                        ++it;
                }
                //cout << "PERCOLATING NODES at " << q << " probability" << endl;

                print_connected_components();
            }

            void edge_percolation(double q) {
                for(auto it = edges.begin(); it != edges.end();) {
                    double rand_num= rand() / double(RAND_MAX);
                    if (rand_num < q) {
                        it = edges.erase(it);
                    }
                    else
                        ++it;
                }
                //cout << "PERCOLATING EDGES at " << q << " probability" << endl;

                print_connected_components();
            }

            void printInternals() {
                cout << "NODES:" << endl;
                for(auto it = nodes.begin(); it != nodes.end(); it++) {
                    cout << "xCoord: " << (*it).first << " | yCoord: " << (*it).second << endl;
                }

                cout << "EDGES:" << endl;
                for(auto it = edges.begin(); it != edges.end(); it++) {
                    cout << "xCoord: " << (*it).first.first << " | yCoord: " << (*it).first.second
                    << "  GOES TO  "
                    << "xCoord: " << (*it).second.first << " | yCoord: " << (*it).second.second << endl;
                }
            }

    private:
        Node addNode(double xCoord, double yCoord) {
            Node newnode = make_pair(xCoord,yCoord);

            if (nodes.find(newnode) != nodes.end())
                return make_pair(-1,-1);

            nodes.insert(newnode);

            return newnode;
        }

        bool addEdge(Node& node1, Node& node2) {
            Edge newedge;
            if (node1 > node2)
                newedge = make_pair(node2,node1);
            else
                newedge = make_pair(node1,node2);

            //Edge newedge_mirror = make_pair(node2,node1);

            if (edges.find(newedge) != edges.end())
                return false;

            edges.insert(newedge);

            return true;
        }

        void removeNodeDependencies(Node& node1) {

            for(auto it = edges.begin(); it != edges.end();) { //CAN BE IMPROVED NOT TO BE O(N)
                if ((*it).first == node1 or (*it).second == node1) {
                    it = edges.erase(it);
                }
                else {
                    ++it;
                }
            }
        }

        void removeEdge(Edge& edge1) {
            edges.erase(edge1);
        }

        double calculateEuclidianDistance(Node& node1, Node& node2)
        {
          double x = node1.first - node2.first;
          double y = node2.second - node2.second;
          double res;
          res = pow(x,2) + pow(y,2);
          res = sqrt(res);
          return res;
        }

        //bool is valid edge
        //bool is valid node
        //double euclidean distance


};
