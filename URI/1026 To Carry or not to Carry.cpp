#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned int x, y , sum, carry;
    while(scanf("%u%u",&x,&y)!=EOF)
    {
        sum = x ^ y;
        carry = x & y;
        while (carry != 0) {
            carry = carry << 1;
            x = sum;
            y = 0;
            sum = x ^ y;
            carry = x & y;
        }
        printf("%u\n", sum);

    }
    return 0;
}

