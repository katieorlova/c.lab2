#include <iostream>
#include <map>

//задание 1418

int main()
{
    int N = 0;
    std::cin >> N;
    std::map<int, bool> array;

    int number;
    for (int i=0; i < N; ++i)
    {
        std::cin >> number;
        array[number] = true;
    }

    std::cout << array.size();

    system("pause");
    return 0;
}