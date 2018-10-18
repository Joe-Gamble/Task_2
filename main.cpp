#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
    srand(time(NULL));

    int PLAYER_INPUT;
	int SEED = rand();
    int	TARGET_NUMBER = ((SEED % 10) + 1);
	char RESPONSE;


	std :: cout << TARGET_NUMBER << "\n"
	    << "Can you guess what number I'm thinking of?\n";
	std :: cin >> PLAYER_INPUT;

	if (TARGET_NUMBER == PLAYER_INPUT)
	{
		std :: cout << "Congratulations you guessed my number! \n"
		    << "Press any key to continue \n";
		std :: cin >> RESPONSE;
	}
	else if (TARGET_NUMBER < PLAYER_INPUT)
	{
		std :: cout << "Sorry, that guess was too high \n"
		    << "Press any key to continue \n";
		std :: cin >> RESPONSE;
	}
	else
	{
		std :: cout << "Sorry, that guess was too low \n"
		    << "Press any key to continue \n";
		std :: cin >> RESPONSE;
	}
	return(0);
}