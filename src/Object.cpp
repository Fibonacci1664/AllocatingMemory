/*
 * Object.cpp
 *
 *  Created on: 12 Jul 2019
 *      Author: Dave
 */

#include "Object.h"

Object::Object()
{
	cout << "A " << type << " object was created" << endl;
}

Object::Object(const Object &other)
{
	type = other.type;
	cout << "Another object was created by copying!" << endl;
}

Object::~Object()
{
	cout << "A " << type << " object was destroyed" << endl;
}

void Object::setType(string type)
{
	this->type = type;
}

void Object::objectDescription() const
{
	cout << "The object is a " << type << endl;
}

