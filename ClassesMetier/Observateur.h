/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Observateur.h
 * Author: ocommeng
 *
 * Created on 26 novembre 2017, 23:26
 */

#ifndef OBSERVATEUR_H
#define OBSERVATEUR_H

#include "Observable.h"

class Observable;

class Observateur {
public:
    Observateur();
    virtual void mettreAJour()=0;
    virtual ~Observateur();
};

#endif /* OBSERVATEUR_H */

