#include <iostream>
#include "graph.cpp"
using namespace std;

int main()
{
    cout << "STARTING EXPERIMENTATION: NODE PERCOLATIONS ON A GRID GRAPH" << endl;
    for (int i = 1; i <= 10; i++)
    {
        cout << "||||||||||||||||||||||||||||||||" << endl;
        cout << "GRAPH SEED NUMBER " << i << endl;
        cout << "||||||||||||||||||||||||||||||||" << endl;
        srand(i);
        double q = 0.0;
        while(q <= 1.05)
        {
            //cout << q << ": ";
            Graph gridtest(32);
            gridtest.node_percolation(q);
            q += 0.05;
        }
    }

    cout << "END OF EXPERIMENTATION: NODE PERCOLATIONS ON A GRID GRAPH" << endl;
}
