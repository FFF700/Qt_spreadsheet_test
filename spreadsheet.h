#ifndef SPREADSHEET_H
#define SPREADSHEET_H

#include <QTableWidget>

class Spreadsheet : public QTableWidget
{
    Q_OBJECT

public:
    Spreadsheet(QWidget *parent = 0);

    bool autoRecalculate() const {
        return autoRecalc;
    }
    QString currentLocation() const;
    QString currentFormula() const;

public slots:
    void setAutoRecaculate(bool recalc);



private:
    bool autoRecalc;
};

#endif // SPREADSHEET_H
