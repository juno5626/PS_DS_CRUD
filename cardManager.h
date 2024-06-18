#ifndef CARDMANAGER_H
#define CARDMANAGER_H

#include "card.h"
#include <iostream>
#include <vector>
using namespace std;

class CardManager{
private:
    string name;
    int count;
    int total_credit;
    double gpa;
public:
    vector<Card*> myclasses;

    CardManager(){
        count=0; total_credit=0;
    }
    ~CardManager();
    
    int getCount(){return count;}
    int getAllCredit(){return total_credit;}
    double getGpa(){return gpa;};
    int getTotal_C(){return total_credit;}

    

    void printAll(); // Print all cards
    void findCards(string name); // Search a card by name from all cards
    void loadCards(string filename);
    void sortByCode();
    void addCard(); // Add a card
    void editCard(); // Change grade of a card

};

#endif