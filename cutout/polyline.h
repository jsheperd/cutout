/*
 * polyline.h
 *
 *  Created on: 2013.01.21.
 *      Author: Apa
 */

#ifndef POLYLINE_H_
#define POLYLINE_H_

#include "point.h"

class polyline: public point {
private:


public:
	polyline();
	virtual ~polyline();
	void reverse();
	bool break(point& p);
	bool break(int index);
};

#endif /* POLYLINE_H_ */
