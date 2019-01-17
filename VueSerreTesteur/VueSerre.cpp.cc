/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/***
 * File:   VueSerre.cpp
 * Author: snir2g1
 *
 * Created on 20 décembre 2018, 18:24
 */

#include "VueSerre.h"

VueSerre::VueSerre() {
    widget.setupUi(this);
}

VueSerre::~VueSerre() {
}

void VueSerre::mettreAJour(){    
    widget.luminosite->setText("12");
    widget.temperature->setText("42");
    widget.hygrometrie->setText("65");
    widget.positionOuvrants->setText("78");
}
