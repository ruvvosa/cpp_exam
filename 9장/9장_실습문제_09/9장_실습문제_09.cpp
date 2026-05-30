#include<iostream>

using namespace std;

class Point2d {
public:
	int x, y;
	Point2d() { x = 10, y = 10; }
	Point2d(int x1, int y1) { x = x1; y = y1; }
};

class Point3d : public Point2d {
public:
	int z;
	Point3d() { z = 10; }
	Point3d(int x1, int y1, int z1) { z = z1; }
	//Point3d(int x1, int y1, int z1): Point2d(x1,y1) { z = z1; }
};

int main() {
	Point3d p(1, 2, 3);
	cout << p.x << "," << p.y << "," << p.z << endl;
}