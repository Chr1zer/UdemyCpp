#include <iostream>

int main()
{
    int numberOfTries;
    std::cout << "Welcome to my Guessing-Game!" << std::endl
              << "Please enter a amount of atempts" << std::endl;
    std::cin >> numberOfTries;

    for (int i = 0; i < numberOfTries; i++)
    {
        int number;
        std::cout << "Please enter your number: ";
        std::cin >> number;

        if (number >= 0 && number <= 10)
        {
            if (number == 4)
            {
                std::cout << "You won!" << std::endl;
            }
            else if (number % 2 == 0)
            {
                std::cout << "You won the wooden spoon!" << std::endl;
            }
            else
            {
                std::cout << "You lost!" << std::endl;
            }
        }
        else
        {
            std::cout << "You must enter a number between [0, 10]." << std::endl;
        }
    }

    return 0;
}
