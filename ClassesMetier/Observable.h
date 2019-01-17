/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Observable.h
 * Author: ocommeng
 *
 * Created on 26 novembre 2017, 23:27
 */

#ifndef OBSERVABLE_H
#define OBSERVABLE_H
#include <vector>
#include "Observateur.h"

class Observateur;

class Observable {
public:
    Observable();
    void addObservateur(Observateur* obs);
    void delObservateur(Observateur* obs);
    virtual ~Observable();
    void notifier();
    
private:
    std::vector<Observateur*> listeObservateurs;
};

#endif /* OBSERVABLE_H */

