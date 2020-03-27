#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, q; // n=number of rows q=number of queries
    cout << "Please input number of rows and number of queries: " << endl;
    cin >> n >> q;
    vector<int> a[n]; // vectors are used because they are dynamic in mememory
    int k;

    for (int i = 0; i < n; i++)
    {
        cin >> k;
        for (int j = 0; j < k; j++) // creeate two vectors one inside the other vector
        {
            int value;
            cin >> value;
            a[i].push_back(value); // puts values in a vector 
        }
    }
     for (int v = 0; v < q; v++)
    {
        cout << "Please enter two values spaced to find value:  ";
        int a_i, j;
        cin >> a_i >> j; // give the location that you desire
        cout << "value: "<<a[a_i][j] <<endl; // prints out value that you desire based on given location
    }
    return 0;
}