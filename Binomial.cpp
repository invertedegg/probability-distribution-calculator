#include "Binomial.h"
#include "Combination.h"
#include <math.h>
#include <iostream>
using namespace std;
using namespace B;
using namespace C;

// This class contains all the calculations needed 
// to determine the probability, expected value, standard 
// deviation, or varriance of a Binomial Distribution

// Prompt the user to enter relavent numbers
// For Exact Binomials, the user eneters # of successes,
// # of trials, and probability of success
double Binomial::getDataExact(){
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

// Prompt the user to enter relavent numbers
// For Cumulative Binomials, the user eneters # of successes,
// # of trials, probability of success, and type of cumulative
double Binomial::getDataCumulative(){
    int x;
    int n;
    double p;
    bool t;

    cout << "# of trials (n): ";
    cin >> n;
    cout << "# of Successes (x): ";
    cin >> x;
    cout << "Probability of Success (p): ";
    cin >> p;
    cout << "Cumulative Type (1 for P(X >= x), 0 for P(X <= x)):";
    cin >> t;

    return cumulative(x, n, p, t);
}

// Calculates exact probability that x amount of successes 
// occur in n amount of trials, given a probability p of success
double Binomial::calculate(int x, int n, double p){
    Combination c;

    return (c.calculate(n, x)) * pow(p, (double)x) * pow((1-p), (double)(n-x));
}

// Calculates cumulative probability that x amount of successes 
// occur in n amount of trials, given a probability p of success. Boolean
// argument determines what type of cumulative; False means P(X <= x),
// True means P(X >= x)
double Binomial::cumulative(int x, int n, double p, bool t){
    double ans = 0;

    if(t){
        for(int a = x; a <= n; a++){
            ans += calculate(a, n, p);
        }
    }else{
        for(int a = 0; a <= x; a++){
            ans += calculate(a, n, p);
        }
    }

    return ans;
}