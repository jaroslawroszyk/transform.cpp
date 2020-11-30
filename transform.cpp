#include <iostream>
#include <string>
#include <algorithm>
template <typename D, typename S, typename F>
void transform(D destination[], S source[], int n, const F& f)
{
    for (int i = 0; i < n; ++i)
    {
        destination[i] = f(source[i]);
    }
    decltype 
}

std::string toString(int n)
{
    
    return std::to_string(n);
}
int main()
{
    int numbers[5] = {7, 2, 3, 4, 1};
    std::string text[5];
    transform(text, numbers, 5, toString);
      for(int i=0;i<5;i++)
    {
       
        std::cout << numbers[i];
    }
    std::cout << std::endl;
    for(int i=0;i<5;i++)
    {
       
        std::cout << text[i];
    }
}
