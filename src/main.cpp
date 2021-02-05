#include <iostream>
#include "graph.cpp"
using namespace std;

int main()
{
    cout << "testing" << endl;
    srand(time(NULL));
    double q = 0.0;
    while(q <= 0.2)
    {
        Graph geotest(100,q);
        //gridtest.printInternals();
        //gridtest.node_percolation(q);
        //gridtest.printInternals();
        q += 0.01;
        cout << "--------------------" << endl;
    }
    cout << "test ends" << endl;
}
