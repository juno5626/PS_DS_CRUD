#ifndef CARD_H
#define CARD_H

#include <iostream>
using namespace std;

// 이름 코드 학점 점수 성적


class Card{
private:
    string code;
    string name;
    int credit;
    string grade;
    double score;
    
public:

    //생성자들
    Card(string code, string name, int credit);
    Card(string code, string name, int credit, string grade);
    Card(Card* card, string grade);
    ~Card(){};

    //각 필드의 겟터 셋터
    void setGrade(string newgrade){grade = newgrade;}
    string getCode(){return code;};
    string getName(){return name;};
    int getCredit(){return credit;};
    double getScore(){return score;};
    string getGrade(){return grade;};


    string toString();
    string toStringShort();

    // 스태틱임
    // 두개의 카드의 코드를 아스키값으로 비교 후 참거짓 반환
    //  1이 더 작아야 참 
    static bool cmpCode(Card* c1, Card* c2){
        return (c1->getCode() < c2->getCode()); 
    }
};
#endif