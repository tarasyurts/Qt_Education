#include "QLab_db.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	

    QApplication a(argc, argv);
    QLab_db w;
    w.show();

	
    return a.exec();
}
