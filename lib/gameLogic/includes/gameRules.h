//
// Created by mcgir on 10/14/2022.
//

#ifndef INC_373PROJECT_GAMERULES_H
#define INC_373PROJECT_GAMERULES_H

#endif //INC_373PROJECT_GAMERULES_H

using namespace std;
//-------------------------Control-Structures-------------------------//
void foreach(vector<T> &list, void (*func)(T));

void loop(vector<T> &list, void (*rule)(T), void (*condition)(T));

void inparallel();

void parallelfor();

void switch(vector<T> &list, T value, void (*rule)(T));

void when();

//-----------List-Operators-----------//
void extend(vector<T> &list, vector<T> &list2);

void reverse(vector<T> &list);

void shuffle(vector<T> &list);

void sort(vector<T> list);

void deal(vector<T> &deck, vector<T> &hand, int numCards);

void discard(vector<T> list, T value);

//-----------Arithmetic-Operators-----------//
void add(int &a, int b);

//-----------Timing-----------//
void timer();

//-----------Human-Input-----------//

void input-choice();

void input-text();

void input-vote();

//-----------Output-----------//
void message();

void global-message();

void scores();
