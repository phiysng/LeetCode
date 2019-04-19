#include<cstdio>
#include<cmath>
#include<climits>
#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>
#include<functional>

using namespace std;

int main()
{
    //char c;
    unordered_map<char, int> map;
    string s;
    cin >> s;
    for(char c : s){
        if (map.find(c) == map.end()) {
            map[c] = 1;
        }
        else {
            map[c]++;
        }
    }
    // P A T e s t
    vector<char> alpha{'P', 'A', 'T', 'e', 's', 't'};
    for (char c : alpha) {
        if (map.find(c) == map.end()) map[c] = 0;
    }
    while (true) {
        bool all_empty = true;
        for (char c : alpha) {
            if (map[c] > 0) {
                all_empty = false;
                map[c]--;
                printf("%c", c);
            }
        }
        if (all_empty)
            goto end;
    }
    end:
    printf("\n");

    return 0;
}