// The minimum total distance occurs when
// the friends meet at the median of the three points.
// The median is the middle value when the points are sorted in ascending order.

// Here's how you can calculate the minimum total distance:

// Sort the three points, x1, x2, and x3, in ascending order.

// Calculate the median of the three points. If the number of points is odd, the median is the middle value.
//  If the number of points is even, the median is the average of the two middle values.

// Calculate the total distance each friend has to travel to reach the median point. The total distance for
//  each friend is the absolute difference between their current location and the median point.

// Sum up the total distances for all three friends to get the minimum total distance they have to travel to meet.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x[3];
    for (int i = 0; i < 3; i++)
        cin >> x[i];
    sort(x, x + 3);
    int sum = 0;
    sum += abs(x[0] - x[1]) + abs(x[2] - x[1]);
    cout << sum << endl;
    return 0;
}