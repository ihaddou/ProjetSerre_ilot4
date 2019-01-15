/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: snir2g1
 *
 * Created on 20 décembre 2018, 18:17
 */
#include "VueMeteo.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    VueMeteo maVueMeteo;
    maVueMeteo.show();
     maVueMeteo.mettreAjour();

    return app.exec();
}
