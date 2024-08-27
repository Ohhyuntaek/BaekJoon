#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

bool compare(const string& a, const string& b) {
    if (a.length() == b.length()) {
        return a < b;  // 길이가 같으면 사전순으로 정렬
    }
    return a.length() < b.length();  // 길이가 다르면 길이 기준으로 정렬
}

int main() {
    int N;
    cin >> N;

    set<string> uniqueWords;  // 중복을 제거하기 위해 set 사용
    for (int i = 0; i < N; i++) {
        string word;
        cin >> word;
        uniqueWords.insert(word);
    }

    // set의 내용을 vector로 이동
    vector<string> words(uniqueWords.begin(), uniqueWords.end());

    // 정렬 수행
    sort(words.begin(), words.end(), compare);

    // 정렬된 결과 출력
    for (const auto& word : words) {
        cout << word << '\n';
    }

    return 0;
}
