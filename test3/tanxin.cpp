#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>arr(n);
    for (int i = 0; i < n;i++)
    {
        cin >> arr[i];
    }
    int step=0;
    int current=0;
    int next=0;

    for (int i = 0; i < n - 1;i++)
    {
        next = max(next, i + arr[i]);
        if(i==current)
        {
            step++;
            current = next;
            if (current > n - 1)
                break;
        }
    }
    cout << step;
}