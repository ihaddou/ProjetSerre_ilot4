#include <QApplication>
#include "VueSerre.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);
    VueSerre maVueSerre;
    maVueSerre.show();
    maVueSerre.mettreAJour();

    // create and show your widgets here

    return app.exec();
}
