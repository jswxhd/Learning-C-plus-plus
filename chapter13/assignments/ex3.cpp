#include <iostream>
#include "dma.h"

int main(void)
{
	using std::cout;
	using std::endl;

	baseDMA shirt("Portabelly", 8);
	lacksDMA balloon("red", "Blimpo", 4);
	hasDMA map("Mercator", "Buffalo Keys", 5);
	cout << "Displaying baseDMA object:\n";
	shirt.View();
        cout << "\nDisplaying lacksDMA object:\n";
        balloon.View();
        cout << "\nDisplaying haseDMA object:\n";
        map.View();

	lacksDMA balloon2(balloon);
	cout << "\nResult of lacksDMA copy:\n";
	balloon2.View();
	hasDMA map2;
	map2 = map;
	cout << "\nResult of hasDMA assignment:\n";
	map2.View();

	cout << "\nResult of an array of abcDMA pointers:\n";
	abcDMA *pdma[3] = {&shirt, &balloon, &map};
	for(int i = 0; i < 3; i++)
		pdma[i]->View();

	return 0;
}
