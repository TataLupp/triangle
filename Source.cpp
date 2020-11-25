#include "Header.h"

int main() {
	setlocale(LC_ALL, "rus");
	Triangle t1;
	std::cout << "����������� 1: " << t1;
	std::cout << '\n';
	Point a;
	Point b(1, 2);
	Point c(14, 2);
	Triangle t2(a, b, c);
	std::cout << "����������� 2: " << t2;
	std::cout << '\n';
	Point d(10, 5);
	std::cout << "������� a: " << a.getDistance(b) << '\n';
	std::cout << "������� b: " << b.getDistance(c) << '\n';
	std::cout << "������� c: " << c.getDistance(a) << '\n';
	t1.setA(a);
	t1.setB(b);
	t1.setC(d);
	std::cout << "����������� 1: " << t1<< '\n';
	std::cout << "�������� ������������ 1: "<< t1.getPerimetr() << '\n';
	std::cout << "�������� ������������ 2: " << t2.getPerimetr() << '\n';
	std::cout << "������� ������������ 1: " << t1.getSquare() << '\n';
	std::cout << "������� ������������ 2: " << t2.getSquare() << '\n';
	std::cout << t1.isEqualSquare(t2) << '\n';
	t1.setC(c);
	std::cout << "����������� 1: " << t1<< '\n';
	t1.moveTriangle(1, 2);
	std::cout << "����������� 1: " << t1<< '\n';
	std::cout << "�������� ������������ 1: " << t1.getPerimetr() << '\n';
	std::cout << "�������� ������������ 2: " << t2.getPerimetr() << '\n';
	std::cout << "������� ������������ 1: " << t1.getSquare() << '\n';
	std::cout << "������� ������������ 2: " << t2.getSquare() << '\n';
	std::cout << t1.isEqualSquare(t2) << '\n';
	return 0;
}