#include <iostream>
#include "head.h"

using namespace std;

//Implementation GrandF class

GrandF::GrandF(string FirstN, int a, string sk)
: firstName(FirstN), age(a), skill(sk)
{

}

string GrandF::get_firstName()
{
    return firstName;
}

string GrandF::get_lastName()
{
    return lastName;
}

int GrandF::get_age()
{
    return age;
}

string GrandF::get_skill()
{
    return skill;
}

void GrandF::set_firstName(string newFirstName)
{
    firstName = newFirstName;
}

void GrandF::set_lastName(string newLastName)
{
    lastName = newLastName;
}

void GrandF::set_age(int newAge)
{
    age = newAge;
}

void GrandF::set_skill(string newSkill)
{
    skill = newSkill;
}

string GrandF::lastName = "Neculce";

//Implementation Father class

Father::Father(string j, string FirstN, int a, string sk)
: job(j), GrandF(FirstN, a, sk)
{

}

string Father::get_job()
{
    return job;
}

void Father::set_job(string newJob)
{
    job = newJob;
}

//Implementation Son class

Son::Son(string s, string j, string FirstN, int a, string sk)
: study(s), Father(j, FirstN, a, sk)
{

}

string Son::get_study()
{
    return study;
}

void Son::set_study(string newStudy)
{
    study = newStudy;
}
