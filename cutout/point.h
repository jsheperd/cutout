/*
 * point.h
 *
 *  Created on: 2013.01.21.
 *      Author: Apa
 */

#ifndef POINT_H_
#define POINT_H_

class point {
private:
	double	x;
	double	y;
	bool	selected;

public:
	point();
	point(double x, double y);
	virtual ~point();
};

#endif /* POINT_H_ */
