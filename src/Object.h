/*
 * Object.h
 *
 *  Created on: 12 Jul 2019
 *      Author: Dave
 */

#ifndef OBJECT_H_
#define OBJECT_H_

#include<iostream>

using namespace std;

class Object
{
private:
	string type;

public:
	Object();
	Object(const Object &other);
	virtual ~Object();

	void setType(string type);
	void objectDescription() const;
};

#endif /* OBJECT_H_ */
