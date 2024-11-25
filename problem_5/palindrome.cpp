#include <iostream>
#include <string>

using namespace std; 

int main() {
    string a; 
    string rev;
    
    cout << "enter string : ";
    cin >> a;
    
    for (int i = a.length()-1; i >= 0; i--) {
        rev += a[i];
    }
    
    if (rev == a) {
        cout << a << " is palindrome" << endl;
    }
    else {
        cout << a << " is not palindrome" << endl;
    }

    return 0;
}
