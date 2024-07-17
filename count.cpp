#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 3, 4, 6, 9, 10, 12, 15, 18, 20};
    int size = sizeof(arr)/sizeof(arr[0]);
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 3 == 0) {
            count++;
        }
    }
    cout << "The count of multiples of 3 in the array is: " << count << endl;
    return 0;
}
