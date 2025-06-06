//cannot show output
#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<tuple<int, int, int>> buildings;
    int start, height, end;
    
    // Read the input
    while (cin >> start >> height >> end) {
        buildings.push_back({start, height, end});
    }

    // We will use a map to track the height at each x-coordinate.
    map<int, int> heightMap;

    // Record the heights of the buildings in the heightMap.
    for (const auto& building : buildings) {
        tie(start, height, end) = building;
        for (int i = start; i < end; ++i) {
            heightMap[i] = max(heightMap[i], height);
        }
    }

    // Variables to track the last height and x-coordinate.
    int prevHeight = 0;
    int prevX = 0;

    // Output the skyline.
    for (const auto& [x, h] : heightMap) {
        if (h != prevHeight) {
            if (prevX != 0) {
                cout << prevX << " " << prevHeight << " ";
            }
            cout << x << " " << h << " ";
            prevHeight = h;
            prevX = x;
        }
    }

    // Finally, we append the ending with 0.
    cout << prevX << " 0\n";

    return 0;
}

