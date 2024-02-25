#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int counter = 1;
    for (int i = 0; i< n; i++) {
        if (arr[i] == counter) {
            cout << i+1<<' ';
            i = -1;
            counter++;
        }
    }
}
