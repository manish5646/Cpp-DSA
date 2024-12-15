#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    int i = 1;
    int count = 1;
    while (i <= n) {       // Iterate 'n' rows
        int j = 1;
        while (j <= n) {   // Print 'n' numbers in each row
            cout << count<<""; // Print the current number
            count++;       // Increment count
            j++;
        }
        cout << endl;      // Move to the next line
        i++;
    }
    return 0;
}
