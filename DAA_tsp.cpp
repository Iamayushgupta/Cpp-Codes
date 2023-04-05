#include <bits/stdc++.h>

using namespace std;

int TSP(int V, int graph[][20], int s)
{
    vector<int> vertex;
    for (int i = 0; i < V; i++)
        if (i != s)
            vertex.push_back(i);
    int min_path = INT_MAX;
    do
    {
        int current = 0;
        int k = s;
        for (int i = 0; i < vertex.size(); i++)
        {
            current += graph[k][vertex[i]];
            k = vertex[i];
        }
        current += graph[k][s];
        min_path = min(min_path, current);
        //cout << min_path << "\n";
    } while (next_permutation(vertex.begin(), vertex.end()));
    return min_path;
}
int main()
{
    int V;
    cout << "Enter number of cities"
         << "\n";
    cin >> V;
    int graph[20][20];
    cout << "Enter values row by row"
         << "\n";
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            cin >> graph[i][j];
        }
    }
    int s = 0;
    cout << TSP(V, graph, s) << "\n";
    return 0;
}



