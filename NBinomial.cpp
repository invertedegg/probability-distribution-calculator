#include "NBinomial.h"
#include "Combination.h"
#include <math.h>
#include <iostream>
using namespace std;
using namespace NB;
using namespace C;

// This class contains all the calculations needed 
// to determine the probability, expected value, standard 
// deviation, or varriance of a Negative Binomial Distribution

// Prompt the user to enter relavent numbers
// For Exact Negative Binomials, the user eneters # of successes,
// # of trials, and probability of success
double NBinomial::getDataExact(){
    int x;
    int n;
    double p;

    cout << "# of Trials (n): ";
    cin >> n;
    cout << "# of Successes (x): ";
    cin >> x;
    cout << "Probability of Success (p): ";
    cin >> p;
                
    return calculate(x, n, p);
}

// Calculates exact probability that x amount of successes 
// occur in n amount of trials, given a probability p of success
double NBinomial::calculate(int x, int n, double p){
    Combination c;

    return (c.calculate(n-1, x-1)) * pow(p, (double)x) * pow((1-p), (double)(n-x));
}