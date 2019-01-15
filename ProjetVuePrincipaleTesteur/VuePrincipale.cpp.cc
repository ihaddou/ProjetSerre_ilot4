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
    
    for(int i=0; i<3 ;i++ ){
        serrew[i]= new VueSerre();
    }
    widget.setupUi(this);
     
    widget.meteo->addWidget(meteow);
    for(int i=0; i<3;i++){
        widget.serre->addWidget(serrew[i]);
    }
}

VuePrincipale::~VuePrincipale() {
}
