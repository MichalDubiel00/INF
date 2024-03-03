#include "CharListenKnoten.h"

int CharListenKnoten::next_available_id = 1;
int CharListenKnoten::object_count = 0;


CharListenKnoten::CharListenKnoten(char cData)
{
	CharListenKnoten* ptr = nullptr;
	data = cData;
	next = ptr;
	my_id = next_available_id;
	next_available_id++;
	object_count++;
}

char CharListenKnoten::get_data() const
{
    return data;
}

void CharListenKnoten::set_data(char data)
{
    this->data = data;
}

CharListenKnoten* CharListenKnoten::get_next() const
{
    return next;
}

void CharListenKnoten::set_next(CharListenKnoten* next)
{
    this->next = next;
}


int CharListenKnoten::get_my_id() const
{
    return my_id;
}

CharListenKnoten::~CharListenKnoten()
{
	object_count--;
}

void hinten_anfuegen(CharListenKnoten*& anker,const char wert)
{
	CharListenKnoten* neuer_eintrag = new CharListenKnoten(wert);
	neuer_eintrag->set_data(wert);

	if (!anker)
		anker = neuer_eintrag;
	
	else
	{
		CharListenKnoten* ptr = anker;
		while (ptr->get_next()!=nullptr) {
			ptr = ptr->get_next();
		}
		ptr->set_next(neuer_eintrag);


	}
}

void loesche_alle(CharListenKnoten*& anker)
{
	CharListenKnoten* ptr = anker;
	CharListenKnoten* next = nullptr;

	while (ptr != nullptr)
	{
		next = ptr->get_next();
		delete(ptr);
		ptr = next;
	}

	
	anker = nullptr;
}
CharListenKnoten* deep_copy(CharListenKnoten* orig)
{
	
	if (!orig)
	{
		return nullptr;
	}
	else
	{
		CharListenKnoten* anker = new CharListenKnoten(orig->get_data());

		CharListenKnoten* orig_ptr = orig, * ptr = anker;
		while (orig_ptr->get_next())
		{
			orig_ptr = orig_ptr->get_next();
			CharListenKnoten* cpy_ptr = new CharListenKnoten(orig_ptr->get_data());
			ptr->set_next(cpy_ptr);
			ptr = ptr->get_next();
		}
		return anker;
	}
	return nullptr;


}

