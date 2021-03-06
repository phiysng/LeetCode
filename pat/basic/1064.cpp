#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdio>
#include <functional>
#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;
int friend_num(int n)
{
    int t = 0;
    while (n) {
        t += n % 10;
        n /= 10;
    }
    return t;
}
int main()
{
    int n;
    cin >> n;
    unordered_set<int> set;

    for (int i = 0; i < n; ++i) {
        int t;
        cin >> t;
        set.insert(friend_num(t));
    }
    vector<int> res;
    for (int i : set) {
        res.push_back(i);
    }
    sort(res.begin(), res.end());
    printf("%d\n", res.size());
    for (int i = 0; i < res.size() - 1; ++i) {
        printf("%d ", res[i]);
    }
    printf("%d\n", res[res.size() - 1]);
    return 0;
}
