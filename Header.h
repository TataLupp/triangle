#pragma once
#include <ostream>
#include <iostream>

class Point {
public:
	Point();
	Point(int x, int y);

	int getX() const;
	int getY() const;
	void setX(int x);
	void setY(int y);
	void print(std::ostream& stream) const;
	bool isEqual(const Point& p) const;
	double getDistance(const Point& p) const;
	void move(int dx, int dy);

	friend std::ostream& operator<<(std::ostream&, const Point&);
	
private:
	int x_;
	int y_;
};

class Triangle {
public:
	Triangle();
	Triangle(Point a, Point b, Point c);
	~Triangle();
	Point getA() const;
	Point getB() const;
	Point getC() const;
	void setA(Point a);
	void setB(Point b);
	void setC(Point c);
	double getPerimetr() const;
	void moveTriangle(int dx, int dy);
	bool isEqualSquare(const Triangle& t1) const;
	double getSquare() const;

	friend std::ostream& operator<<(std::ostream&, const Triangle&);

private:
	Point a_;
	Point b_;
	Point c_;
};