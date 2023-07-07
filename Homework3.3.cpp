
#include <iostream>
#include <functional>
#include <cmath>

int main()
{
	double angles[3] = { (30 * 3.1415926 / 180), (60 * 3.1415926 / 180), (90 * 3.1415926 / 180)};
	std::function<double(double)> trig;

	auto sinus = [](const double ang) {
		std::cout << "sin: ";
		return sin(ang); };
	auto cosin = [](const double ang) {
		std::cout << "cos: ";
		return cos(ang); };

	double (*functions[2])(double) = {sinus, cosin};

	for (const auto& angle : angles) {
		std::cout << angle << ": ";
		for (const auto& function : functions)
			trig = *function;
		std::cout << trig(angle) << std::endl;
	}
}