#ifndef FUNCTIONCALCULATOR_H
#define FUNCTIONCALCULATOR_H

#include <QList>
#include "point.h"

class FunctionCalculator
{
public:
    QList<Point*>* calculate(double start, double end,
                             double splitNum, std::function<double(double)> function);
};

#endif // FUNCTIONCALCULATOR_H
