CC=g++

CalculatorMain: CalculatorMain.cpp Binomial.cpp NBinomial.cpp Combination.cpp
	$(CC) -c CalculatorMain.cpp Binomial.cpp NBinomial.cpp Combination.cpp
	$(CC) -o ProbabilityCalculator CalculatorMain.o Binomial.o NBinomial.o Combination.o -I.

clean:
	rm ProbabilityCalculator