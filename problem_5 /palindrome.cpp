#include <iostream>
#include <string>

using namespace std; 

int main() {
    string a = "radar";
    string rev;
    
    for (int i = a.length()-1; i >= 0; i--) {
        rev += a[i];
    }
    
    if (rev == a) {
        cout << "palindrome" << endl;
    }
    else {
        cout << "not palindrome" << endl;
    }

    return 0;
}
