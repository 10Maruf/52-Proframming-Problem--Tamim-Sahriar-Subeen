// Out of circle
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        double h, k, r, x, y;
        scanf("%lf %lf", &h, &k);
        scanf("%lf", &r);
        scanf("%lf %lf", &x, &y);

        double temp = sqrt(pow((h - x), 2) + pow((k - y), 2));
        if (temp <= r)
        {
            printf("The point is inside the circle\n");
        }
        else
            printf("The point is not inside the circle\n");
    }

    return 0;
}
