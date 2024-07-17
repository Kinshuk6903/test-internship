#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> list = {10, 20, 5, 25, 15};
    int maxElement = list[0];

    for (int i = 1; i < list.size(); i++){
        if (list[i] > maxElement) {
            maxElement = list[i];
        }
    }

    cout << "The maximum element in the list is: " << maxElement << endl;

    return 0;
}
