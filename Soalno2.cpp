#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int apalah = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = apalah;
            }
        }
    }
}

int main() {
    int n;
    cout << "Masukkan jumlah uang yang akan diinputkan: ";
    cin >> n;
    int arr[n];

    cout << "Masukkan nilai nominal uang: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubbleSort(arr, n);

    cout << "Nominal uang setelah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}