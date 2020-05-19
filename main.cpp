#include "tampilanutama.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TampilanUtama w;
    w.show();
    return a.exec();
}
