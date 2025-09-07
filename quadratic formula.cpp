#include <cmath>
#include <iostream>



void theQuadraticFormula(double A, double B, double C) {
	std::cout << "the A is " << A << std::endl;
	std::cout << "the B is " << B << std::endl;
	std::cout << "the C is " << C << std::endl;
	double bNegative{ -1 * B };
	double answerInSquarRoot{ (B * B) - 4 * A * C };
	double Squared = sqrt(answerInSquarRoot);
	double twoTimesA{ 2 * A };
	if (answerInSquarRoot < 0 || answerInSquarRoot == 0) {
		std::cout << "the answer for positive is " << bNegative << " + " << answerInSquarRoot << " / " << twoTimesA << std::endl;
	}
	else {
		double answerForPositive{ (bNegative + Squared) / twoTimesA };
		std::cout << "the answer for positive is " << answerForPositive << std::endl;
	}
	if (answerInSquarRoot < 0 || answerInSquarRoot == 0) {
		std::cout << "the answer for negative is " << bNegative << " - " << answerInSquarRoot << " / " << twoTimesA << std::endl;
	}
	else {
		double answerFOrNegative{ (bNegative - Squared) / twoTimesA };
		std::cout << "the answer for negative is " << answerFOrNegative << std::endl;
	}

}



int main()
{
	double A;
	double B;
	double C;
	std::cout << "welcome to Sams quadratic formula simulator." << std::endl;
	std::cout << "what is the A B and C (type the numbers in that order)";
	std::cin >> A;
	std::cin >> B;
	std::cin >> C;
	theQuadraticFormula(A, B, C);

	
	return 0;
}

