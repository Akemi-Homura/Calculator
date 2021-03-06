#include "doublestack.h"
#include "doublestack.h"
#include "doublestack.h"
#include "doublestack.h"
#include <string>
#include <iostream>
#include <sstream>
#include "doublestack.h"

using namespace std;

bool DoubleStack::IsEmpty() const
{
    return list.IsEmpty();
}

///////////////////////////////////////////
// Do not change the above.
// Implement your own member functions below.

void DoubleStack::Push(double elem)
{
	list.AddToHead(elem);
}

double DoubleStack::Pop()
{
	return list.RemoveHead();
}

double DoubleStack::Top() const
{
	return list.GetHead();
}

void DoubleStack::Clear()
{
	while (!list.IsEmpty()) {
		list.RemoveHead();
	}
}

// Do not change the below.
///////////////////////////////////////////
