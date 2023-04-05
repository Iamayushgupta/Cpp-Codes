#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    int mas[] = {1, 3, 3, 5, 1, 2, 4, 1};
    size_t count = sizeof(mas) / sizeof(mas[0]);

    size_t best = 0;
    int best_index = 0;
    unordered_set<int> unique;
    for (int i = 0; i < count; i++)
    {
        while (unique.find(mas[i]) != unique.end())
        {
            unique.erase(mas[i - unique.size()]);
        }
        unique.insert(mas[i]);
        if (unique.size() > best)
        {
            best = unique.size();
            best_index = i - best + 1;
        }
    }

    cout << "Index = " << best_index << " Length = " << best << endl;
}