#include <iostream>
#include <vector>
#include <numeric>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

    std::vector<int> odd = {1, 3, 5, 7, 9};
    std::vector<int> ans;

    for (int a = 1; a <= 9; ++a)
    {
	for (int b = 0; b <= 9; ++b)
	{
	    for (int c = 0; c <= 9; ++c)
	    {
		if ((c & 1) && ((b << 1) == a+c))
		    ans.push_back(100*a + 10*b + c);
	    }
	}
    }

    for (int x : ans)
	std::cout << x << '\n';



    return 0;
}
