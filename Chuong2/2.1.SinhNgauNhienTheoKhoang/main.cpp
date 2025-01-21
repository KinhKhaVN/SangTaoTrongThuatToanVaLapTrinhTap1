#include <iostream>
#include <stdlib.h>
#include <vector>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

std::vector<int> Gen(int, int, int);
void Print(std::vector<int> );

int main(int argc, char** argv) {

    srand(time(NULL));

    int d, c;
    const int n = 20;
    std::vector<int> v;

    std::cin >> d >> c;

    v = Gen(n, d, c);

    Print(v);


    return 0;
}

std::vector<int> Gen(int n, int d, int c)
{
    std::vector<int> v;
    int range;

    for (int i = 0; i < n; ++i)
    {
	range = rand() % (c - d + 1);
	v.push_back(d + range);
    }
    
    return v;
}

void Print(std::vector<int> v)
{
    for (int x : v)
	std::cout << x << " ";
    std::cout << '\n';
}
