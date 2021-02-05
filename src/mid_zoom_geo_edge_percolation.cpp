#include <iostream>
#include "graph.cpp"
using namespace std;

int main()
{
    cout << "STARTING EXPERIMENTATION: EDGE PERCOLATIONS ON A RANDOM GEOMETRIC GRAPH" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << "||||||||||||||||||||||||||||||||" << endl;
        cout << "GRAPH SEED NUMBER " << i << endl;
        cout << "||||||||||||||||||||||||||||||||" << endl;
        srand(i);
        double q = 0.7;
        while(q <= 1.0)
        {
            Graph gridtest(500,0.2);
            gridtest.edge_percolation(q);
            q += 0.05;
            cout << "--------------------" << q << endl;
        }
    }

    cout << "END OF EXPERIMENTATION: EDGE PERCOLATIONS ON A RANDOM GEOMETRIC GRAPH" << endl;
}
