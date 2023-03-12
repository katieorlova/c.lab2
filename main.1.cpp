#include <iostream>
#include <queue>

//задача 50

int main()
{
    int N = 10;
    std::queue<int> a, b;
    for (int i = 0, x; i < N/2; ++i)
        std::cin >> x, a.push(x);
    for (int i = 0, x; i < N/2; ++i)
        std::cin >> x, b.push(x);
    int steps = 0;
    for (; !a.empty() && !b.empty() && steps <= 200000; ++steps) {
        int ac = a.front(), bc = b.front();
        a.pop(); b.pop();
        std::queue<int> * win = (ac == 0 && bc == N-1) ? &a :
                           (bc == 0 && ac == N-1) ? &b :
                           (ac > bc) ? &a : &b;
        win->push(ac); win->push(bc);
    }
    if (a.empty())
        std::cout << "second " << steps << std::endl;
    else if (b.empty())
        std::cout << "first " << steps << std::endl;
    else
        std::cout << "botva\n";
}