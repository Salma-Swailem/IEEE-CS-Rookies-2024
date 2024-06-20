#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    float k;

    cin >> n >> m >> k;

    vector<pair<string, int>> skill;


    for (int i = 0; i < n; i++) {
        string name;
        int value;
        cin >> name >> value;
        value *= k;

        if (value >= 100) {
            skill.push_back(make_pair(name, value));
        }
    }

    for (int i = 0; i < m; i++) {
        string name;
        cin >> name;

        auto it = find_if(skill.begin(), skill.end(),
            [name](const auto& p) {
                return p.first == name;
            }
        );
        if (it == skill.end()) {
            skill.push_back(make_pair(name, 0));

        }
    }

    sort(skill.begin(), skill.end());

    cout << skill.size() << endl;
    for (const auto& s : skill) {
        cout << s.first << " " << s.second << endl;
    }


    return 0;
}