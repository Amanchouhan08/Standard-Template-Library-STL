//max_element in stl
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {7, 2, 9, 4, 1};

    auto it = max_element(v.begin(), v.end());

    cout << "Max element: " << *it << endl; // 9
    cout << "Index: " << distance(v.begin(), it) << endl; // 2    return 0;
}

/* output

Max element: 9
Index: 2

*/
