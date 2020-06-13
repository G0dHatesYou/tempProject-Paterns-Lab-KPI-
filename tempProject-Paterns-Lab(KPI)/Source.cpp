#include <iostream>
#include "lab10CreationalPatterns.h"
#include "lab11StructuralPatterns.h"
#include "lab12BehavioralPatterns.h"
#include "lab13BehavioralPatterns.h"

using namespace std;

int main()
{
	std::cout << "Lab 10: Creational patterns" << std::endl;
	showFactoryMethodPatern();
	std::cout << std::endl;

	std::cout << "Lab 11: Structural patterns" << std::endl;
	showStructuralMethodPatern();
	std::cout << std::endl;

	std::cout << "Lab 12: Behavioral patterns part 1" << std::endl;
	showBehavioral1Patern();
	std::cout << std::endl;

	std::cout << "Lab 13: Behavioral patterns part 2" << std::endl;
	showBehavioral2Patern();
	std::cout << std::endl;

	return 0;
}