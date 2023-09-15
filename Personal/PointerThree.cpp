#include <iostream>

struct Students
{
    std::string name;
    int age;
    float grades;
};

float gradesAverage(Students *array, int size);

int main()
{
    int size = 0;
    std::cout << "How many students are in the class? ";
    std::cin >> size;

    struct Students *classroom = new Students[size];

    for (int i = 0; i < size; i++)
    {
        std::cout << "\nStudent " << i + 1 << ".\n";
        std::cout << "Name: ";
        std::cin >> (classroom + i)->name;
        std::cout << "Age: ";
        std::cin >> (classroom + i)->age;
        std::cout << "Grade: ";
        std::cin >> (classroom + i)->grades;
    }

    std::cout << gradesAverage(classroom, size);

    return 0;
}

float gradesAverage(Students *array, int size) 
{
    float totalSum = 0;

    for (int i = 0; i < size; i++)
    {
        totalSum = totalSum + (array + i)->grades;
    }

    return (totalSum / size);
}