#ifndef BINOMIAL_H
#define BINOMIAL_H

namespace B{
    class Binomial
    {
    public:
        double getDataExact();
        double getDataCumulative();
        double calculate(int x, int n, double p);
        double cumulative(int x, int n, double p, bool t);
    };
}
#endif