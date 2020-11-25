#include <iostream>
#include <cmath>
#include "Header.h"
const double e = 0.0001;
Triangle::Triangle() :
	a_(0, 0),
	b_(0, 0),
	c_(0, 0)
{}

Triangle::Triangle(Point a, Point b, Point c) :
	a_(a),
	b_(b),
	c_(c)
{}

Triangle::~Triangle()
{}

Point Triangle::getA() const {
	return a_;
}
Point Triangle::getB() const {
	return b_;
}

Point Triangle::getC() const {
	return c_;
}

void Triangle::setA(Point a) {
	a_ = a;
}
void Triangle::setB(Point b) {
	b_ = b;
}
void Triangle::setC(Point c) {
	c_ = c;
}

double Triangle::getPerimetr() const {
	return a_.getDistance(b_) + b_.getDistance(c_) + c_.getDistance(a_);
}

double Triangle::getSquare() const {
	double square;
	double p = (a_.getDistance(b_) + b_.getDistance(c_) + c_.getDistance(a_)) / 2;
	square = sqrt(p*(p- a_.getDistance(b_))*(p - b_.getDistance(c_))* (p - c_.getDistance(a_)));
	return square;
}

void Triangle::moveTriangle(int dx, int dy) {
	a_.move(dx, dy);
	b_.move(dx, dy);
	c_.move(dx, dy);
}


bool Triangle::isEqualSquare(const Triangle& t1) const {
	double square;
	double p = (a_.getDistance(b_) + b_.getDistance(c_) + c_.getDistance(a_)) / 2;
	square = sqrt(p * (p - a_.getDistance(b_)) * (p - b_.getDistance(c_)) * (p - c_.getDistance(a_)));
	return (abs(square - t1.getSquare())) < e;
}


std::ostream& operator<<(std::ostream& stream, const Triangle& point) {
	return stream << '(' << point.a_ << ", " << point.b_ << ", " << point.c_ << ')';
}