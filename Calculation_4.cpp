#includestdio.h
#includemath.h
#define PI 3.1415927
int main()
{
    double r = 0.0;
    while (scanf(%lf, &r) != EOF)
    {
        printf(%.3lfn, 4.0  PI  pow(r, 3)  3);
    }
    return 0;
}