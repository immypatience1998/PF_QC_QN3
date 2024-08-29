#include <iostream>

using namespace std;
int sum_from_to(int first, int last);

int main() {
    int first, last;
    
    cout << "Enter the first integer: ";
    cin >> first;
    cout << "Enter the last integer: ";
    cin >> last;
    int result = sum_from_to(first, last);
    cout << "The sum of integers from " << first << " to " << last << " is " << result << endl;

    return 0;
}
int sum_from_to(int first, int last) {
    if (first > last) {
        int temp = first;
        first = last;
        last = temp;
    }
    int sum = 0;
    for (int i = first; i <= last; ++i) {
        sum += i;
    }
    
    return sum;
}

