#include <bits/stdc++.h>
using namespace std;


//used the editorial here, no shame. Main thing is to learn here. 

int f (int x, int y, int n, int m) {
    if ((x == 1 || x == n) && (y == 1 || y == m)) return 2;  // Corner case
    if (x == 1 || x == n || y == 1 || y == m) return 3;      // Edge case (but not corner)
    return 4;  // Inside the grid, away from boundaries
} 


int main() {
    int T;  
    cin >> T; 

    while (T--) {
        int n, m;  
        int x1, y1, x2, y2; 
        
        
        cin >> n >> m >> x1 >> y1 >> x2 >> y2;

        int result1 = f(x1, y1, n, m);
        int result2 = f(x2, y2, n, m);

        cout << min(result1, result2) << endl;
    }

    return 0;
}