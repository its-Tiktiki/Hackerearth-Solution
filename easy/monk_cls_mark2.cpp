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
		m[-1*mark].insert(name);
	}

	for(auto &marks_students_pr : m){
		auto &students = marks_students_pr.second;
		int marks = marks_students_pr.first;
		for(auto s: students){
			cout << s << " " << -1*marks << endl;
		}
	}
    
    return 0;
}