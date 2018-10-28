#include <string>
#include <iostream>
#include <sstream>
#include "doublelist.h"

using namespace std;

DoubleList::DoubleList()
{
    h = t = NULL;
}

bool DoubleList::IsEmpty() const
{
    return (h == NULL);
}

///////////////////////////////////////////
// Do not change the above.
// Implement your own member functions below.

DoubleList::~DoubleList(){
    while(!IsEmpty()){
        RemoveHead();
    }
}

double DoubleList::GetHead() const
{
	return h->value;
}

double DoubleList::GetTail() const
{
	return t->value;
}

void DoubleList::AddToHead(double v)
{
	DoubleNode* tmp_node = new DoubleNode(v, NULL, h);
    if(h == NULL){
        h = t = tmp_node;
        return;
    }
	h->prev = tmp_node;
	h = tmp_node;
}

void DoubleList::AddToTail(double v)
{
	DoubleNode* tmp_node = new DoubleNode(v, t, NULL);
    if(h == NULL){
        h = t = tmp_node;
        return;
    }
	t->next = tmp_node;
	t = tmp_node;
}

double DoubleList::RemoveHead()
{
	double v = h->value;
	DoubleNode* origin_head = h;
	h = h->next;
	delete origin_head;
	if(h != NULL) h->prev = NULL;
	return v;
}

double DoubleList::RemoveTail()
{
	double v = t->value;
	DoubleNode* origin_tail = t;
	t = t->prev;
	delete origin_tail;
	if(t != NULL) t->next = NULL;
	return v;
}

// Do not change the below.
///////////////////////////////////////////

DoubleNode::DoubleNode(double value, DoubleNode * prev, DoubleNode * next)
{
	this->value = value;
	this->next = next;
	this->prev = prev;
}
