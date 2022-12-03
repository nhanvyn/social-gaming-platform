//
// Created by mcgir on 10/14/2022.
//

#ifndef INC_373PROJECT_GAMERULES_H
#define INC_373PROJECT_GAMERULES_H
#endif //INC_373PROJECT_GAMERULES_H

//-------------------------Control-Structures-------------------------//
void foreach();

void loop();

void inparallel();

void parallelfor();

void switchrule();

void when();

//-----------List-Operators-----------//
template <typename T>
void extend(std::vector<T> &target, std::vector<T> &list) {
    target.insert(target.end(), list.begin(), list.end());
}

template <typename T>
void reverse(std::vector<T> &list) {
    std::reverse(list.begin(), list.end());
}

template <typename T>
void shuffle(std::vector<T> &list) {
    std::random_shuffle(list.begin(), list.end());
}

//Still have to add functionality for list of maps
template <typename T>
void sort(std::vector<T> &list) {
    std::sort(list.begin(), list.end());
}

void deal();

void discard();

//-----------Arithmetic-Operators-----------//

void add();

//-----------Timing-----------//

void timer();

//-----------Human-Input-----------//
void inputchoice();

void inputtext();

void inputvote();

//-----------Output-----------//
void message();

void globalmessage();

void scores();
