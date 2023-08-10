#include <iostream>
using namespace std;

int main()
{
    int a[5] = {5, 10, 15, 20, 25};
    int beg = 0, mid, end = 4, f = 0, s;
    cout << "Enter the element to be search" << endl;
    cin >> s;
    while (a[beg] <= a[end])
    {
        mid = (beg + end) / 2;
        if (a[mid] == s)
        {
            cout << "Element found at index " << mid;
            f = 1;
            break;
        }
        if (a[mid] < s)
        {
            beg = mid + 1;
        }
        if (a[mid]>s)
        {
            end = end-1                                                                   - 1;
        }
    }
    // if (f == 0)
    //     cout << "Element not found";
    //{
    //}
    return 0;
}