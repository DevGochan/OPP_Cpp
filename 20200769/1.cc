#include <iostream>
#include <climits>
#include <algorithm>

const int MAX_N = 100;
int terrain[MAX_N][MAX_N], visited[MAX_N][MAX_N], n;
int maxRegionSize = INT_MIN;
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

void exploreRegion(int y, int x) {
    for (int i = 0; i < 4; i++) {
        int nx = dx[i] + x;
        int ny = dy[i] + y;
        if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
        if (visited[ny][nx] == -1) continue;
        visited[ny][nx] = -1;
        exploreRegion(ny, nx);
    }
}

int main() {
    std::cin >> n;

    for (int y = 0; y < n; y++) {
        for (int x = 0; x < n; x++) {
            std::cin >> terrain[y][x];
        }
    }

    for (int currentHeight = 0; currentHeight <= 100; currentHeight++) {
        for (int y = 0; y < n; y++) {
            for (int x = 0; x < n; x++) {
                if (currentHeight >= terrain[y][x]) {
                    visited[y][x] = -1;
                } else {
                    visited[y][x] = 0;
                }
            }
        }

        int currentRegionSize = 0;

        for (int x = 0; x < n; x++) {
            for (int y = 0; y < n; y++) {
                if (visited[y][x] == 0) {
                    visited[y][x] = -1;
                    currentRegionSize++;
                    exploreRegion(y, x);
                }
            }
        }

        maxRegionSize = std::max(maxRegionSize, currentRegionSize);
    }

    std::cout << maxRegionSize;

    return 0;
}
