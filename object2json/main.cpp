#include <QCoreApplication>
#include <QDebug>
#include <QDate>
#include <QtCore>

#include "qobjecthelper.h"
#include "person.h"
#include "historyrecord.h"

int main(int argc, char *argv[])
{
    qDebug() << "===========";
    Person person, person2;
    person.setName("Flavio");
    person.setPhoneNumber(123456);
    person.setGender(Person::Male);
    person.setDob(QDate(1982, 7, 12));

    HistoryRecord historyRecord, historyRecord2;
    historyRecord.push("/home");
    historyRecord.push("/home/djf");
    historyRecord.push("/home/djf/dde-workspace");
    historyRecord.push("/home/djf/dde-workspace/dde-desktop");
    historyRecord.push("/home/djf/dde-workspace/dde-desktop/skin");

    qDebug() << historyRecord.first();
    qDebug() << historyRecord.end();
    qDebug() << historyRecord.takeAt(2);

    historyRecord.back();
    historyRecord.back();
    historyRecord.back();
    historyRecord.back();
    historyRecord.back();
    historyRecord.back();

    qDebug() << historyRecord.currentUrl() << historyRecord.currentIndex();

    qDebug() << historyRecord << historyRecord2;
    QString  result = QObjectHelper::qobject2json(&historyRecord);
    QObjectHelper::json2qobject(result, &historyRecord2);


    qDebug() << result;
    qDebug() << historyRecord2;

    QString  result2 = QObjectHelper::qobject2json(&person);
    QObjectHelper::json2qobject(result2, &person2);

    qDebug() << person;
    qDebug() << result2;
    qDebug() << person2;

}
