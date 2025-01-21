#include <iostream>
#include <vector>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    
    const std::vector<int> upperBound = {3, 2, 1, 1, 1, 1, 1, 1, 1};
    std::vector<int> ans;

    for (int a = 1; a <= 9; ++a)
    {
	for (int d = 1; d <= upperBound[a]; ++d)
	{
	    ans.push_back(a * (100 + 10*d + d*d));
	}
    }

    for (int x : ans)
	std::cout << x << '\n';

    return 0;
}
