/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: snir2g1
 *
 * Created on 15 janvier 2019, 17:39
 */

#include <QApplication>
#include "VuePrincipale.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    // create and show your widgets here
    VuePrincipale * uneVuePrincipale = new VuePrincipale();
    uneVuePrincipale->show();
    uneVuePrincipale->mettreAJour();
    return app.exec();
}
