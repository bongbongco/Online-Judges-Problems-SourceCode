#include <iostream>

using namespace std;

int main() {
    int n;
    
    cin >> n;
    for (int i=0; i<n; i++) {
        int m, sum = 0;
        cin >> m;
        for (int j=0; j<m; j++){
            int v;
            cin >> v;
            sum += v;
        }
        cout << sum << '\n';
    }
    return 0;
}
