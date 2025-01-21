#include <iostream>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

    srand(time(NULL));
    int n = 5;
    int A[n][n] = {0};

    for (int i = 0; i < n; i++)
    {
	A[i][i] = rand() % 1000;
	for (int j = i + 1; j < n; j++)
	{
	    A[i][j] = rand() % 100;
	    A[j][i] = A[i][j];
	}
    }

    for (int i = 0; i < n; ++i)
    {
	for (int j = 0; j < n; ++j)
	{
	    std::cout << A[i][j] << " ";
	}
	std::cout << '\n';
    }

    return 0;
}
