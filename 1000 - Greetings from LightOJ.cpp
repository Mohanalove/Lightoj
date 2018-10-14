                                        /********Author**********
                                        Muhammad Ali Mohan
                                        DUET(Dhaka University Of Engineering & Technology)
                                        Dept: CSE
                                        E-mail: duetcsemohan@gmail.com*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, a, test, b;

    scanf("%d", &test);
    for(i = 1; i<= test; i++)
    {
        scanf("%d%d", &a, &b);
        printf("Case %d: %d\n", i, a + b);

    }
    return 0;
}
