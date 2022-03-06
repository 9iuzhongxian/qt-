#include "studentperson.h"




STudentPerson::STudentPerson(QObject *parent)
{

}

QString STudentPerson::getID() const
{
    return ID;
}

void STudentPerson::setID(const QString &value)
{
    ID = value;
}

QString STudentPerson::getName() const
{
    return name;
}

void STudentPerson::setName(const QString &value)
{
    name = value;
}

QString STudentPerson::getAge() const
{
    return age;
}

void STudentPerson::setAge(const QString &value)
{
    age = value;
}

QString STudentPerson::getSex() const
{
    return sex;
}

void STudentPerson::setSex(const QString &value)
{
    sex = value;
}

QString STudentPerson::getChinese_score() const
{
    return chinese_score;
}

void STudentPerson::setChinese_score(const QString &value)
{
    chinese_score = value;
}

QString STudentPerson::getMath_score() const
{
    return math_score;
}

void STudentPerson::setMath_score(const QString &value)
{
    math_score = value;
}

QString STudentPerson::getEnglish_score() const
{
    return english_score;
}

void STudentPerson::setEnglish_score(const QString &value)
{
    english_score = value;
}



