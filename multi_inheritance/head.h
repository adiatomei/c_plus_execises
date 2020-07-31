#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED
#include <iostream>

using namespace std;

class GrandF
{
public:
    GrandF(string FirstN, int a, string sk);
    string get_firstName();
    string get_lastName();
    int get_age();
    string get_skill();
    void set_firstName(string newFirstName);
    void set_lastName(string newLastName);
    void set_age(int newAge);
    void set_skill(string newSkill);
private:
    string firstName;
    static string lastName;
    int age;
    string skill;
};

class Father : public GrandF
{
public:
    Father(string j, string FirstN, int a, string sk);
    string get_job();
    void set_job(string newJob);
private:
    string job;
};

class Son : public Father
{
public:
    Son(string s, string j, string FirstN, int a, string sk);
    string get_study();
    void set_study(string newStudy);
private:
    string study;
};
#endif // HEAD_H_INCLUDED
