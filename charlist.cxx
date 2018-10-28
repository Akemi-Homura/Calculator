#include <iostream>
#include <string>
#include <sstream>
#include <cassert>
#include <stdlib.h>
#include "charlist.h"

using namespace std;

CharList::CharList()
{
    h = t = NULL;
}

bool CharList::IsEmpty() const
{
    return (h == NULL);
}



///////////////////////////////////////////
// Do not change the above.
// Implement your own member functions below.

CharList::~CharList(){
    while(!IsEmpty()){
        RemoveHead();
    }
}

char CharList::GetHead() const
{
	return h->value;
}

char CharList::GetTail() const
{
	return t->value;
}

void CharList::AddToHead(char v)
{
	CharNode * tmp_node = new CharNode(v, NULL, h);
    if(h == NULL){
        h = t = tmp_node;
        return;
    }
	h->prev = tmp_node;
	h = tmp_node;
}

void CharList::AddToTail(char v)
{
	CharNode* tmp_node = new CharNode(v, t, NULL);
    if(h == NULL){
        h = t = tmp_node;
    }
	t->next = tmp_node;
	t = tmp_node;
}

char CharList::RemoveHead()
{
	char v = h->value;
	CharNode* origin_head = h;
	h = h->next;
	delete origin_head;
    if(h != NULL) h->prev = NULL;
	return v;
}

char CharList::RemoveTail()
{
	char v = t->value;
	CharNode* origin_tail = t;
	t = t->prev;
	delete origin_tail;
	if(t != NULL)t->next = NULL;
	return v;
}

// Do not change the below.
///////////////////////////////////////////

CharNode::CharNode(char value, CharNode * prev, CharNode * next)
{
	this->value = value;
	this->prev = prev;
	this->next = next;
}
