#include <iostream>
#include <iomanip>
#include <ctime>

struct Birds
{
    std::string name;
    std::string colour;
    std::string registrationDate;
    bool photoTaken = false;
};

void ChangeName(std::string &birdName);
void ChangeColour(std::string &birdColour);
void UpdatePhoto(bool &photoStatus);

int main()
{
    auto t = std::time(nullptr);
    auto tm = *std::localtime(&t);

    std::ostringstream oss;
    oss << std::put_time(&tm, "%d-%m-%Y");

    int size = 0;
    int option, n = 0;
    bool iterator = true;

    std::cout << "How many birds do you want to add?\n";
    std::cin >> size;

    // Created dynamic array
    struct Birds *catalogue = new struct Birds[size];

    // Data input
    for (int i = 0; i < size; i++)
    {
        std::cout << "Bird number " << i + 1 << std::endl;
        std::cout << "Enter the bird's name: ";
        std::cin >> (catalogue + i)->name;
        std::cout << "Enter the bird's colour: ";
        std::cin >> (catalogue + i)->colour;
        (catalogue + i)->registrationDate = oss.str(); // where I add the date
    }

    while (iterator)
    {
        std::cout << "\n1. Change a bird's name.\n2. Change a bird's colour.\n3. Update a bird's photo status.\n4. Exit menu.\n";
        std::cin >> option;

        switch (option)
        {
        case 1:
            std::system("cls");
            for (int i = 0; i < size; i++)
            {
                std::cout << i + 1 << ". " << (catalogue + i)->name << std::endl;
            }
            std::cout << "\nWhich bird's name do you want to change? Select the number: ";
            std::cin >> n;

            if ((n >= 1) && (n <= size))
            {
                ChangeName(catalogue[n - 1].name);
            }
            else
            {
                std::cout << "The number entered is not valid.\n";
            }
            break;

        case 2:
            std::system("cls");
            for (int i = 0; i < size; i++)
            {
                std::cout << i + 1 << ". " << (catalogue + i)->name;
                std::cout << " (" << (catalogue + i)->colour << ")\n";
            }
            std::cout << "\nWhich bird's colour do you want to change? Select the number: ";
            std::cin >> n;

            if ((n >= 1) && (n <= size))
            {
                ChangeColour(catalogue[n - 1].colour);
            }
            else
            {
                std::cout << "The number entered is not valid.\n";
            }
            break;

        case 3:
            std::system("cls");
            for (int i = 0; i < size; i++)
            {
                std::cout << i + 1 << ". " << (catalogue + i)->name << std::endl;
            }
            std::cout << "\nWhich bird's photograph status do you want to update? Select the number: ";
            std::cin >> n;

            if ((n >= 1) && (n <= size))
            {
                UpdatePhoto(catalogue[n - 1].photoTaken);
            }
            else
            {
                std::cout << "The number entered is not valid.\n";
            }

            break;

        case 4:
            delete[] catalogue;
            iterator = false;
            break;

        default:
            delete[] catalogue;
            iterator = false;
            break;
        }
    }
    return 0;
}

void ChangeName(std::string &birdName)
{
    std::string currentName;
    currentName = birdName;

    std::cout << "Change the bird's name: ";
    std::cin >> birdName;

    std::cout << "Changed " << currentName << " to " << birdName << std::endl;
}

void ChangeColour(std::string &birdColour)
{
    std::string currentColour;
    currentColour = birdColour;

    std::cout << "Change the bird's colour (" << currentColour << "): ";
    std::cin >> birdColour;

    std::cout << "Changed " << currentColour << " to " << birdColour << std::endl;
}

void UpdatePhoto(bool &photoStatus)
{
    if (photoStatus)
    {
        std::cout << "The bird has been already photographed.\n";
    }
    else
    {
        photoStatus = true;
        std::cout << "Bird's photograph has been udpated successfully!\n";
    }
}