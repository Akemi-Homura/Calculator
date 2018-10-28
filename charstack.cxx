#include <string>
#include <iostream>
#include <sstream>
#include "charstack.h"

using namespace std;

bool CharStack::IsEmpty() const
{
    return list.IsEmpty();
}

///////////////////////////////////////////
// Do not change the above.
// Implement your own member functions below.

void CharStack::Push(char elem)
{
	list.AddToHead(elem);
}

char CharStack::Pop()
{
	return list.RemoveHead();
}

char CharStack::Top() const
{
	return list.GetHead();
}

void CharStack::Clear()
{
	while (!list.IsEmpty()) {
		list.RemoveHead();
	}
}

// Do not change the below.
///////////////////////////////////////////
