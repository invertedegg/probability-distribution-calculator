#include "Binomial.h"
#include "NBinomial.h"
#include <stdio.h>
#include <iostream>
using namespace std;
using namespace B;
using namespace NB;

void header()
{
    printf("--------------------------------------------");
    printf("\n|          Probability Calculator          |");
    printf("\n|   By invertedegg (github.com/invertedegg)|");
    printf("\n--------------------------------------------\n\n");
}

int chooseDistribution()
{
    int c = 50;

    while(c > 2 || c < 0)
    {
        cout << "Please choose a distribution to calculate.\nUniform: 0\nBinomial: 1\nNegative Binomial: 2\nExit: 0\n\n:";
        cin >> c;
    }
    printf("--------------------------------------------\n");
    return c;
}

int chooseAnswer1()
{
    int c = 50;
    while (c > 2 || c < 0)
    {
        cout << "Please choose which condition you are solving for.\nExact Probability: 1\nCumulative Probability: 2\n\n:";
        cin >> c;
    }
    printf("--------------------------------------------\n");
    return c;
}

int main()
{
    int choice = 12;
    double ans;

    
    header();
    choice = chooseDistribution();

    while(choice != 0)
    {
        switch(choice)
        {
            case 0:
                break;
            case 1:
                // Binomial Distribution
                Binomial bd;
            
                choice = chooseAnswer1();
                switch (choice){
                    case 1:
                        ans = bd.getDataExact();
                        break;
                    case 2:
                        ans = bd.getDataCumulative();
                        break;
                    default:
                        break;
                }
                break;

            case 2:
                // Negative Binomial Distribution
                NBinomial nbd;
                                
                ans = nbd.getDataExact();
                break;
        }

        printf("\nAnswer: %f\n--------------------------------------------\n", ans);

        choice = chooseDistribution();
    }
    return 0;
}
