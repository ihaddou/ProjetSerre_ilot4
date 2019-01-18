/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VuePrincipale.h
 * Author: ocommeng
 *
 * Created on 18 janvier 2019, 22:57
 */

#ifndef VUEPRINCIPALE_H
#define VUEPRINCIPALE_H

#include "ui_VuePrincipale.h"
#include "../VueMeteotest/VueMeteo.h"
#include "../VueSerreTesteur/VueSerre.h"

class VuePrincipale : public QWidget {
    Q_OBJECT
public:
    VuePrincipale();
   void mettreAJour();
    virtual ~VuePrincipale();
private:
    Ui::VuePrincipale widget;
    VueMeteo *meteow;
    VueSerre *serrew[3];
};


#endif /* VUEPRINCIPALE_H */

