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
        scanf("%d%d", &a, &b);/*number of problems in two computers*/
        printf("Case %d: %d\n", i, a + b);/*summation of problems*/

    }
    return 0;
}
