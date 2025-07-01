#include <iostream>
#include <cmath>
#include <vector>
#include <sstream>

long long fib(int index);
int main()
{
    int userInput = 1;
    std::vector<long long> fibonnaciVector;
    // while (userInput != 0)
    // {
    //     std::cout<<"Welcome to the Fibonnaci Machine! What digit of fibonnaci would you like?:" ;
    //     std::cin>>userInput;
    //     std::cout<<"Great! Computing..."<<std::endl;
    //     int answer = fib(userInput);
    //     std::cout<<"Done! Fibonnaci of " <<userInput<<" is " << answer << std::endl;
    //     std::cout<< "Wanna go again? (Type anything to go again, 0 to end!): ";
    //     std::cin>>userInput;
    // }

    while (userInput != 0)
    {
        fibonnaciVector.clear();
        std::cout<<"Welcome to the Fibonnaci Vector Machine! Until what digit of fibonnaci would you like in your vector?:" ;
        std::cin>>userInput;
        std::cout<<"Great! Computing..."<<std::endl;

        for (int i=0; i<(userInput); i++)
        {
            fibonnaciVector.push_back(fib(i));
        }
        std::cout<<"Done! The vector is: " <<std::endl;
        for (int i=0; i<fibonnaciVector.size(); i++)
        {
            std::cout<< " " <<fibonnaciVector[i];
        }
        std::cout << std::endl;
        std::cout<< "Wanna go again? (Type anything to go again, 0 to end!): ";
        std::cin>>userInput;
    }
    return 0;
}

long long fib(int index) 
{
    long long answer;
    if (index == 1 || index == 0) 
    {
        answer = 1;
    }
    else
    {
        double term1_partA = pow(((1+sqrt(5))/2),index);
        double term2_partA = pow(((1-sqrt(5))/2),index);
        double term1 = ((1+sqrt(5))/(2*sqrt(5)))*term1_partA;
        double term2 = ((sqrt(5)-1)/(2*sqrt(5)))*term2_partA;
        answer = term1 + term2;
    }
    return answer;
}