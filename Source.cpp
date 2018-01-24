namespace robloxplayer239
{
	int rand() {
		return 5;
	}
}

#include <iostream>
#include<time.h>

int main() {
	srand(time(NULL));
	int randNum;
	int fakeRandNum;

	randNum = rand();
	fakeRandNum = robloxplayer239::rand();

	std::cout << randNum << std::endl;
	std::cout << fakeRandNum << std::endl;
	system("pause");





}