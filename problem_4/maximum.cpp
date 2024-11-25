#include <iostream>

using namespace std; 

int main() {
    int arr[] = {10, 15, 32, 55, 18};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    
    for(int i = 0; i<n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    
    cout << "maximum : " << max << endl;
    return 0;
}
