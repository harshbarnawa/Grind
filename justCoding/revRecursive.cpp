#include <iostream>
using namespace std;

int revF(int num,int rev = 0) {
    if (num == 0)
        return rev;
    return revF(num / 10, rev * 10 + num % 10);
}

int main() {
    int num;
    cin >> num;

    int revd = revF(num);

    cout << "Reversed: " << revd << endl;
    cout << (num == revd)?"Pallindrome":"Not Palindrome";

    return 0;
}