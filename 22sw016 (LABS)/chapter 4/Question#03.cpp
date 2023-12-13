#include<iostream>              ////////////Incomplete//////////
using namespace std;
struct distance{
		int feet;
     	float inch;
};
struct Volume{
	distance length, width, height;
};

int main(){
	float length, width, height;
	Volume room1 = {{13, 2.5}, {11, 5.5}, {5,2.5}};

	length = room1.length.feet+ room1.length.inch/12;
	width = room1.width.feet+ room1.width.inch/12;
	height = room1.height.feet+ room1.height.inch/12;
	
	cout << "Volume = " << length * width * height << " cubic feet" << endl;
	return 0;
}


