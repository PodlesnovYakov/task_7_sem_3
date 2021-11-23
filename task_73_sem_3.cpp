#include <iostream>
#include <map>
using namespace std;

int main() {
    multimap <double, int> mp;
    int n,k;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> k;
        mp.emplace(k, i);
    }
    while (mp.size() != 1) {
        pair<double, int> it = *mp.begin();
        mp.erase(mp.begin());
        pair<double, int> iter = *mp.begin();
        mp.erase(mp.begin());
        cout << min(it.second, iter.second) << " " << max(it.second, iter.second) << endl;
        n++;
        mp.emplace(it.first + iter.first / 2, n);
      
    }
    return 0;
}
