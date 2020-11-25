#include <iostream>
#include <cmath>
#include "Header.h"

Point::Point() :
	x_(0),
	y_(0) {}

Point::Point(int x, int y) :
	x_(x),
	y_(y) {}

int Point::getX() const {
	return x_;
}

int Point::getY() const {
	return y_;
}

void Point::setX(int x) {
	x_ = x;
}

void Point::setY(int y) {
	y_ = y;
}

void Point::print(std::ostream& stream) const {
	stream << '(' << x_ << ", " << y_ << ')';
}

void Point::move(int dx, int dy) {
	x_ += dx;
	y_ += dy;
}
bool Point::isEqual(const Point& p) const {
	return x_ == p.x_ && y_ == p.y_;
}

double Point::getDistance(const Point& p) const {
	return sqrt(abs((x_ - p.x_) * (x_ - p.x_) - (y_ - p.y_) * (y_ - p.y_)));
}

std::ostream& operator<<(std::ostream& stream, const Point& point) {
	return stream << '(' << point.x_ << ", " << point.y_ << ')';
}