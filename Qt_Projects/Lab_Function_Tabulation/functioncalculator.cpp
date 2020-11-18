#include "functioncalculator.h"

QList<Point*>* FunctionCalculator::calculate(double start, double end,
                                             double splitNum, std::function<double(double)> function){

    auto points = new QList<Point*>();

    double step = (end - start)/ splitNum;

    double x = start;

    while(x<=end){
        double y = function(x);
        points->push_back(new Point(x, y));
        x += step;
    }

    return points;
}
