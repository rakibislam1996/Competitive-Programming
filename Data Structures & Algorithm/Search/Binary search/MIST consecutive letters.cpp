#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, case_num = 0;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        set < int > segments;

        for (int i = 0; i < (int) s.size(); i++)
        {
            if (i == 0)
            {
                segments.insert(i);
            }
            else if (s[i] != s[i - 1])
            {
                segments.insert(i);
            }
        }

        segments.insert(s.size());

        printf("Case %d:\n", ++case_num);;
        int q;
        cin >> q;
        for (int loop = 0; loop < q; loop++)
        {
            int type;
            int i;
            scanf("%d%d", &type, &i);

            if (type == 1)
            {
                auto it = segments.lower_bound(i);

                if ( (*it) > i)
                {
                    it--;
                }

                int left = *it;
                int right = *(++it);
                int ans = right - left;
                printf("%d\n", ans);
            }
            else
            {
                segments.insert(i);
                segments.insert(i + 1);
            }
        }
    }

//  double en = clock();
//  cerr << (en - st) / CLOCKS_PER_SEC << endl;

    return 0;
}
