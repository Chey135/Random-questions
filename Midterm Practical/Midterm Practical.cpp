// Midterm Practical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


int main()
{
    srand(time(0));
    int question = rand() % 4+1;
    int answer;

    if (question == 1)
    {
        std::cout << "What color is the sky?\n";
        //blue
        std::cout << "1) red\n";
        std::cout << "2) blue\n";
        std::cout << "3) purple\n";
        std::cout << "Answer: ";
        std::cin >> answer;
        switch (answer)
        {
        case 1:
        {
            //clean console
            system("cls");
            std::cout << "\n Incorrect \n";
            break;
        }
        case 2:
        {
            system("cls");
            std::cout << "\n Correct \n";
            break;
        }
        case 3:
        {
            system("cls");
            std::cout << "\n Incorrect \n";
            break;
        }
        }
    }
    else if (question == 2)
    {
        std::cout << "Was there 13 original colonies?\n";
        //yes
        std::cout << "1) yes\n";
        std::cout << "2) no\n";
        std::cout << "Answer: ";
        std::cin >> answer;
        switch (answer)
        {
        case 1:
        {
            //clean console
            system("cls");
            std::cout << "\n Correct \n";
            break;
        }
        case 2:
        {
            system("cls");
            std::cout << "\n Incorrect \n";
            break;
        }
        
        }
    }
    else if (question == 3)
    {
        std::cout << "How many eggs are in a dozen\n";
        //12
        std::cout << "1) 18\n";
        std::cout << "2) 13\n";
        std::cout << "3) 12\n";
        std::cout << "Answer: ";
        std::cin >> answer;
        switch (answer)
        {
        case 1:
        {
            //clean console
            system("cls");
            std::cout << "\n Incorrect \n";
            break;
        }
        case 2:
        {
            system("cls");
            std::cout << "\n Incorrect \n";
            break;
        }
        case 3:
        {
            system("cls");
            std::cout << "\n Correct \n";
            break;
        }
        }
    }
    else
    {
        std::cout << "Is the earth round or flat\n";
        //round
        std::cout << "1) round\n";
        std::cout << "2) flat\n";
        std::cout << "Answer: ";
        std::cin >> answer;
        switch (answer)
        {
        case 1:
        {
            //clean console
            system("cls");
            std::cout << "\n Correct \n";
            break;
        }
        case 2:
        {
            system("cls");
            std::cout << "\n Incorrect \n";
            break;
        }
        }
    }

    
}



