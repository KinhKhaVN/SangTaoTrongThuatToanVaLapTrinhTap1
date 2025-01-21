#include <iostream>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

    int n = 10;
    int A[n];
    int B[n];

    srand(time(NULL));

    A[0] = rand() % 100;
    B[0] = A[0];
    for (int i = 1; i < 10; i++)
    {
	B[i] = rand() % 100;
	A[i] = A[i - 1] + B[i];
    }
    for (int x : B)
	std::cout << x << " ";
    std::cout << '\n';
    for (int x : A)
	std::cout << x << " ";

    return 0;
}
