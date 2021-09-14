// EXERCISE 1

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int biggestTable(vector<vector<char>>& grid) {
        // Put code here
        int offices = -1;
        return offices;
    }
};

int main() 
{
    // Parsing input here
    int rows, columns;

    cin >> rows;
    cin >> columns;

    vector<vector<char>> vect(rows);

    for (int i = 0; i < rows; i++) {
        vect[i] = vector<char>(columns);
        for (int j = 0; j < columns; j++) {
            cin >> vect[i][j]; 
        }
    }

    Solution solution;
    cout << solution.biggestTable(vect);

    return 0;
}


https://stackoverflow.com/questions/15705490/find-largest-area-in-2d-array-in-c





// EXERCISE 2

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int minimumConcat(string initial, string goal) {
        // Code Here
        return 0;
    }
};

int main() 
{
    // Parsing input here
    string initial, goal;

    cin >> initial;
    cin >> goal;

    Solution solution;
    cout << solution.minimumConcat(initial, goal);

    return 0;
}