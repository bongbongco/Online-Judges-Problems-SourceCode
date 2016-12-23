#include <iostream>
#include <set>

using namespace std;

int main() {
    int n;
    int m;
    int x;
    set<int> s;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        s.insert(x);
    }
    
    scanf("%d", &m);
    
    for (int i = 0; i < m; i ++) {
        scanf("%d", &x);
        printf("%d ", s.count(x));
    }
    printf("\n");
    return 0;
}
