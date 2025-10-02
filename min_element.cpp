//min_element in stl
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {7, 2, 9, 4, 1};

    auto it = min_element(v.begin(), v.end());

    cout << "Min element: " << *it << endl; // 9
    cout << "Index: " << distance(v.begin(), it) << endl; // 2    return 0;
}

/* output

Min element: 1
Index: 4

  */
