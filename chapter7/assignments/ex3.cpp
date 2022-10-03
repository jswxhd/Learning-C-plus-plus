#include <iostream>
#include <cstring>

using namespace std;

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void cal_volume(box *pb);
void show(box b);

int main(void)
{
	char bmaker[40];
	float bheight, bwidth, blength, bvolume;
	box b;

	cout << "This program will calculate the volume of box for you." << endl;

	cout << "First, enter the maker of box: ";
	cin >> bmaker;
	strcpy(b.maker, bmaker);

	cout << "Second, enter the height of box: ";
	cin >> bheight;
	b.height = bheight;

	cout << "Third, enter the width of box: ";
	cin >> bwidth;
	b.width = bwidth;

	cout << "Fourth, enter the length of box: ";
	cin >> blength;
	b.length = blength;

	cal_volume(&b);

	show(b);

	return 0;
}

void cal_volume(box *pb)
{
	pb->volume = pb->height * pb->width * pb->length;
}

void show(const box b)
{
	cout << "---------Here is the box info---------" << endl;
	cout << "Maker:  " << b.maker << endl;
	cout << "Height: " << b.height << endl;
	cout << "Width:  " << b.width << endl;
	cout << "Length: " << b.length << endl;
	cout << "Volume: " << b.volume << endl;
}
