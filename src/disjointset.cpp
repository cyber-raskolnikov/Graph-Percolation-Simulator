#include <map>
#include <set>
#include <iterator>
#include <iostream>
using namespace std;

typedef pair<double,double> Node;
typedef pair<Node,Node> Edge;

class DSForest
{
private:
    struct DSNode
    {
    public:
            Node data;
            Node mother;
            int size;

            DSNode()
            {
                data = make_pair(0,0);
                mother = data;
                size = 1;
            }

            DSNode(Node &newdata)
            {
                data = newdata;
                mother = data;
                size = 1;
            }

            bool operator<(const DSNode &right) const
            {
                return this->data < right.data;
            }

            bool operator==(const DSNode &right) const
            {
                return this->data == right.data;
            }
    };

    map<Node,DSNode> forest;

public:
    DSForest()
    {
    }


    void make_set(Node &graphnode)
    {
        DSNode treenode(graphnode);
        forest[graphnode] = treenode;
    }

    Node find_set(DSNode &treenode)
    {
        if (treenode.mother != treenode.data)
            treenode.mother = find_set(forest.at(treenode.mother));
        return treenode.mother;
    }

    void setunion(DSNode &n1, DSNode &n2)
    {
        if ((forest.at(n1.mother)).size >= (forest.at(n2.mother)).size)
        {
            (forest.at(n1.mother)).size += (forest.at(n2.mother)).size;
            n2.mother = n1.mother;
            n2.size = forest.at(n2.mother).size;
        }
        else
        {
            (forest.at(n2.mother)).size += (forest.at(n1.mother)).size;
            n1.mother = n2.mother;
            n1.size = forest.at(n1.mother).size;
        }
    }

    void set_to_forest(set<Node> &nodes)
    {
        for (set<Node>::iterator it = nodes.begin(); it != nodes.end(); it++)
        {
            Node aux = *it;
            make_set(aux);
        }
    }

    void edges_form_forest(set<Edge> &edges)
    {
        for (set<Edge>::iterator it = edges.begin(); it != edges.end(); it++) {
            auto it1 = forest.find((*it).first);
            auto it2 = forest.find((*it).second);

            if (it1 != forest.end() and it2 != forest.end()) {
                if (find_set(it1->second) != find_set(it2->second))
                    setunion(it1->second,it2->second);
            }
            else
                cout <<"BAD KEYS!!!" << endl;
        }
    }

    int get_conected_components()
      {
        set<Node> aux;
        for(auto it = forest.begin(); it != forest.end(); it++)
        {
          aux.insert((*it).second.mother);
        }

        return aux.size();

      }

};
