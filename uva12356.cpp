#include <bits/stdc++.h>
/*
    Sarowar Hossain Bhuyain
    City University,Pnathapath,Dhaka,Bangladesh;

    Hacker Rank-Sarowar Hossain
    Uva-sarowar75856
    URI-SAROWAR_BHUYAIN
    Toph-sarowar_hsb

*/

using namespace std;

long int s[5000000], l[5000000], r[5000000];
int main()
{

    long int n, b, i, j, le, ri;
    while (scanf("%ld %ld", &n, &b) == 2 && (n != 0 && b != 0))
    {
        for (i = 0; i <= n; i++)
        {
            s[i] = i;
            l[i] = i - 1;
            r[i] = i + 1;
        }
        for (i = 1; i <= b; i++)
        {
            scanf("%ld %ld", &le, &ri);
            if (l[le] <= 0)
                printf("* ");
            else
                printf("%ld ", l[le]);

            if (r[ri] > n)
                printf("*\n");
            else
                printf("%ld\n", r[ri]);

            r[l[le]] = r[ri];
            l[r[ri]] = l[le];
        }
        printf("-\n");
    }
    return 0;
}
