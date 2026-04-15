//word_counter.cpp

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(void) {
	string s;

	// 각 단어와 빈도를 저장하는 맵
	// 입력을 읽으면서 각 단어와 빈도를 저장

	map<string, int> counters;

	while (cin >> s)
		++counters[s];

	// 단어와 빈도를 출력
	for (map<string, int>::const_iterator it = counters.begin();
		it != counters.end(); ++it) {
	
	cout << it->first << "\t" << it->second << endl;
	}
	return 0;
}
