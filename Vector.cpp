#include <iostream>
#include <vector>
using namespace std;

class Init {
    int x;
    vector<float> v;

public:
    Init() {
        cout << "Enter size of array: " << endl;
        cin >> x;
        v = vector<float>(x, 0.0f);  // initialize vector after reading x
    }

    void modify() {
        cout << "Enter the index to modify: " << endl;
        int i;
        cin >> i;
        if (i >= 0 && i < v.size()) {
            cout << "Enter the number you want to replace with: " << endl;
            cin >> v[i];
        } else {
            cout << "Invalid index\n";
        }
    }

    void multi(int m) {
        for (float &val : v) {
            val *= m;
        }
    }

    void display() {
        cout << "Array contents: ";
        for (float val : v) {
            cout << val << " ";
        }
        cout << endl;
    }
};

int main() {
    Init i;
    i.modify();
    i.multi(5);
    i.display();
    return 0;
}

