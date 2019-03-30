#include <bits/stdc++.h>
using namespace std;

int sortFunction(const void *a, const void *b)
{
    int intOne = *((int*)a);
    int intTwo = *((int*)b);

    if (intOne < intTwo)
    {
        return -1;
    }
    if (intOne == intTwo)
    {
        return 0;
    }

    return 1;    
}

int main () {
    int n;
    cin >> n;
    int rating[n];

    for (int i = 0 ; i < n ; ++i)
        cin >> rating[i];
    
    int count = 0;
    int diff = 0;
    
    qsort((void*)rating, n, sizeof(rating[0]), sortFunction);

    for (int i = 0 ; i < n ; i += 2) {
        diff = rating[i+1] - rating[i];
        count += diff;
    }

    cout << count << endl;

    return 0;
}