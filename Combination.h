#ifndef COMBINATION_H
#define COMBINATION_H

namespace C
{
    class Combination
    {
        public:
            int calculate(int n, int r);

        private:
            unsigned long long int fact(int x);
    };
}

#endif