#pragma once
class CharListenKnoten
{
	char data;
	CharListenKnoten* next;
	int my_id;

public:

	static int next_available_id;
	static int object_count;

	
	CharListenKnoten(char);

    char get_data() const;
    void set_data(char data);

    CharListenKnoten* get_next() const;
    void set_next(CharListenKnoten* next);

    int get_my_id() const;

	~CharListenKnoten();

};
void hinten_anfuegen(CharListenKnoten*& anker, const char wert);
void loesche_alle(CharListenKnoten*& anker);
CharListenKnoten* deep_copy(CharListenKnoten* orig);

