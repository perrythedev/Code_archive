#include <bits/stdc++.h>
using namespace std;

#define int long long

namespace genTest {
    mt19937 rng((int)std::chrono::steady_clock::now().time_since_epoch().count());

    int rnd(int l, int r) {
        return uniform_int_distribution<int>(l, r)(rng);
    }

    // Hàm tạo ký tự ngẫu nhiên trong đoạn [l, r]
    char ch(char l = 'A', char r = 'Z') {
        return (char)uniform_int_distribution<int>(l, r)(rng);
    }

    // Hàm tạo chuỗi ngẫu nhiên có độ dài `len`, từ ký tự trong đoạn [l, r]
    string str(int len, char l = 'A', char r = 'Z') {
        string result;
        for (int i = 0; i < len; i++) {
            result += ch(l, r);
        }
        return result;
    }

    // Hàm tạo vector ngẫu nhiên chứa các số trong khoảng [l, r]
    vector<int> vec(int len, int l, int r) {
        vector<int> result(len);
        for (int i = 0; i < len; i++) {
            result[i] = rnd(l, r);
        }
        return result;
    }

    // Hàm tạo dãy không giảm
    vector<int> nonDecSeq(int n, int l, int r) {
        vector<int> seq;
        int prev = rnd(l, r);
        seq.push_back(prev);

        for (int i = 1; i < n; i++) {
            int curr = rnd(prev, r);
            seq.push_back(curr);
            prev = curr;
        }

        return seq;
    }

    // Hàm tạo dãy không tăng
    vector<int> nonIncSeq(int n, int l, int r) {
        vector<int> seq;
        int prev = rnd(l, r);
        seq.push_back(prev);

        for (int i = 1; i < n; i++) {
            int curr = rnd(l, prev);
            seq.push_back(curr);
            prev = curr;
        }

        return seq;
    }

    // Hàm tạo vector ngẫu nhiên chứa các phần tử từ một vector
    template <typename T>
    vector<T> vec(int len, const vector<T>& elements) {
        if (elements.empty()) throw invalid_argument("Elements vector is empty");
        vector<T> result(len);
        for (int i = 0; i < len; i++) {
            result[i] = elements[rnd(0, elements.size() - 1)];
        }
        return result;
    }

    // Hàm tạo hoán vị ngẫu nhiên của các số từ 1 đến n
    vector<int> perm(int n) {
        vector<int> v(n);
        iota(v.begin(), v.end(), 1);
        shuffle(v.begin(), v.end(), rng);
        return v;
    }

    // Hàm quá tải: Xáo trộn các phần tử trong một vector đã cho
    template <typename T>
    vector<T> perm(vector<T> v) {
        shuffle(v.begin(), v.end(), rng);
        return v;
    }

    // Hàm in vector ra màn hình
    template <typename T>
    void print(const vector<T>& v) {
        for (const T& element : v) {
            cout << element << " ";
        }
        cout << "\n";
    }
} // namespace genTest


signed main(signed argc, char* argv[]) {
    // TEST[id]/... nhằm để chia subtask
    int id = atoi(argv[1]);
    cout << id << "\n";
    cout << genTest::rnd(1, 1e9) << ' ' << genTest::rnd(1, 1e9) << endl;
    return 0;
}
