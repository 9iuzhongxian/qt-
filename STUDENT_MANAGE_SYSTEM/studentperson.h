#ifndef STUDENTPERSON_H
#define STUDENTPERSON_H

#include <QObject>
#include <QString>

class STudentPerson : public QObject
{
    Q_OBJECT
public:
    explicit STudentPerson(QObject *parent = nullptr);







    QString getID() const;
    void setID(const QString &value);

    QString getName() const;
    void setName(const QString &value);

    QString getAge() const;
    void setAge(const QString &value);

    QString getSex() const;
    void setSex(const QString &value);

    QString getChinese_score() const;
    void setChinese_score(const QString &value);

    QString getMath_score() const;
    void setMath_score(const QString &value);

    QString getEnglish_score() const;
    void setEnglish_score(const QString &value);

signals:

public slots:

private:
    QString ID;
    QString name;
    QString age;
    QString sex;
    QString chinese_score;
    QString math_score;
    QString english_score;
};

#endif // STUDENTPERSON_H
