#include <iostream>

int main()
{
    int lucky_tickets{};
    for (int i{}; i < 10; i++)
        for (int j{}; j < 10; j++)
            for (int k{}; k < 10; k++)
                for (int l{}; l < 10; l++)
                    for (int m{}; m < 10; m++)
                        for (int n{}; n < 10; n++)
                            if (i + j + k == l + m + n)
                                lucky_tickets++;

    std::cout << "lucky tickets = " << lucky_tickets << "\n";


    lucky_tickets = 0;
    for (int number{}; number < 1000000; number++)
    {
        if(number / 100000 + number / 10000 % 10 + number / 1000 % 10
            == number / 100 % 10 + number / 10 % 10 + number % 10)
            lucky_tickets++;
    }
    std::cout << "lucky tickets = " << lucky_tickets << "\n";


    lucky_tickets = 0;
    for (int hi{}; hi < 1000; hi++)
        for (int lo{}; lo < 1000; lo++)
        {
            if (hi / 100 + hi / 10 % 10 + hi % 10 ==
                lo / 100 + lo / 10 % 10 + lo % 10)
                lucky_tickets++;
        }
    std::cout << "lucky tickets = " << lucky_tickets << "\n";
}
