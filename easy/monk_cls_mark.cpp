#include <bits/stdc++.h>
using namespace std;
int main() {
	long long n;
	cin >> n;
	map<int, multiset<string>> m;

	while(n--){
		string name;
		int mark;
		cin >> name >> mark;
		m[mark].insert(name);
	}

	auto current_it = --m.end();
	while(true){
		auto &students = (*current_it).second;
		int marks = (*current_it).first;
		for(auto s: students){
			cout << s << " " << marks << endl;
		}
		if(current_it == m.begin()) break;
		current_it--;
	}
    return 0;
}