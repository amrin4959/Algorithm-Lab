#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    int totalnode, node1, node2, i, j, weight ;
    int adjmatrix[10][10] = {0} ;

    ifstream input("input.txt");

    if(input.is_open())
    {
        cout << "Opened" << endl ;

        input >> totalnode ;
        while(input >> node1>> node2 >> weight)
        {
            adjmatrix[node1][node2] = weight ;
            adjmatrix[node2][node1] = weight ;
        }

        ofstream output("output.txt");

        if(output.is_open())
        {
            cout << "Created" << endl ;

            for(i=1; i<=totalnode; i++)
            {
                for(j=1; j<=totalnode; j++)
                    output << adjmatrix[i][j] << " " ;

                output << endl ;
            }
        }
        else
            cout << "Not Created" << endl ;
    }
    else
        cout << "Not Opened" << endl ;
}
