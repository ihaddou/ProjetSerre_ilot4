/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   VuePrincipale.cpp
 * Author: snir2g1
 *
 * Created on 10 janvier 2019, 14:44
 */

#include "VuePrincipale.h"
#include "VueMeteo.h"
#include "VueSerre.h"

VuePrincipale::VuePrincipale() {
    meteow= new VueMeteo();
    serrew= new VueSerre();
 
    widget->meteo->addWidget(meteow)
    widget->serre->addWidget(serrew);
    widget.setupUi(this);
}

VuePrincipale::~VuePrincipale() {
}
