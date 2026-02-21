
#include <iostream>
#include <utility>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <unordered_set>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    pair<int, int> p = {1, 2};
    cout << p.first << p.second << endl;

    pair<int, int> arr[] = {{1, 1}, {2, 2}, {3, 3}};
    cout << arr[0].first << arr[0].second << endl;

    vector<int> v;
    v.push_back(1);
    cout << v.front() << v.back() << endl;
    cout << v[0] << endl;

    vector<pair<int, int>> vp;
    vp.push_back({1, 1});

    cout << vp[0].first << vp[0].second << endl;

    vector<int>::iterator it = v.begin();
    cout << *(it) << endl;

    vector<int>::iterator it = v.end();
    vector<int>::reverse_iterator it = v.rbegin();
    vector<int>::reverse_iterator it = v.rend();

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << endl;
    }

    for (auto it : v)
    {
        cout << it << endl;
    }

    v.erase(v.begin());
    v.insert(v.begin(), 10);

    v.size();
    v.pop_back();

    v.clear();

    cout << v.empty() << endl;

    list<int> ls;
    stack<int> s;
    queue<int> q;
    priority_queue<int> pq;

    // unique and ordered -- tree structure
    set<int> st;

    auto it = st.find(3);

    auto it1 = st.lower_bound(2);
    auto it2 = st.upper_bound(3);

    // ordered with duplicte values allowed
    multiset<int> ms;

    unordered_set<int> us;

    map<int, int> mp;

    mp[1] = 2;
    mp.insert({0, 0});

    for (auto it : mp)
        cout << it.first << it.second << endl;

    sort(v.begin(), v.end());
    sort(v.begin(), v.end(), greater<int>());

    pair<int, int> arr2[] = {{1, 2}, {2, 1}, {4, 1}};
    sort(arr2, arr2 + 3, comp);

    return 0;
}

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    else if (p1.second == p2.second)
        if (p1.first > p2.first)
            return true;
        else
            return false;
    else
        return true;
}