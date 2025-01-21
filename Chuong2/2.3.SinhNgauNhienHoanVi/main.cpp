#include <iostream>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

    srand(time(NULL));
    int n = 20;
    int A[n];

    for (int i = 0; i < n; i++)
	A[i] = i + 1;

    for (int i = 0; i < n; i++)
    {
	int j = rand() % n;
	std::swap(A[i], A[j]);
    }
    
    
    for (int x : A)
	std::cout << x << " ";

    return 0;
}
