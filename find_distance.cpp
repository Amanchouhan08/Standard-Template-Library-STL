#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {5, 10, 15, 20, 25};

    int target = 20;
    auto it = find(v.begin(), v.end(), target);

    cout<<distance(v.begin(), it); // return index

    return 0;
}
