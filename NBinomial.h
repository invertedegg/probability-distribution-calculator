#ifndef NBINOMIAL_H
#define NBINOMIAL_H

namespace NB
{
    class NBinomial
    {
    public:
        double getDataExact();
        double calculate(int x, int n, double p);
    };
}
#endif