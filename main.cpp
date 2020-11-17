#include "sculptor.h"
#include <iostream>
#include <fstream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    Sculptor projeto(100,100,100);
    //OVIN
    projeto.cutBox(0,99,0,99,0,99);//Limpando a matriz
    //cabine
    projeto.setColor(0.1,0.1,0.8,1);//azul
    projeto.putSphere(50,57,50, 16);// cabine
    projeto.cutSphere(50,57,50, 15);//cabine oca
    //corpo
    projeto.setColor(0.5,0.5,0.5,1);//cinza
    projeto.putEllipsoid(50,50,50,35,10,35);//elipse abaixo esfera
    projeto.setColor(0.1,0.1,0.9999,1);//azul
    projeto.putEllipsoid(50,50,50,45,5,45);//elipse abaixo da elipse
    projeto.cutBox(0,99,0,47,0,99);// deixando a base reta
    //mecanismo de abdução
    projeto.setColor(0.9,0.9,0.9,1);//branco
    projeto.putEllipsoid(50,40,50,14,25,14);//mecanismo de abdução(parte branca)
    projeto.setColor(0.001,0.001,0.3,1);//azul
    projeto.putEllipsoid(50,40,50,13,25,13);//mecanismo de abdução(parte azul escura)
    projeto.cutBox(0,99,0,44,0,99);
    // cabine interior
    projeto.cutBox(41,59,60,64,41,59);//esfera oca
    projeto.setColor(0.9,0.9,0.9,1);//branco
    projeto.putBox(41,59,58,59,41,59);
    //et
    projeto.setColor(0.9999,0.8888,0.8888,1);//branco
    projeto.putBox(48,54,57,60,48,54);//et roupa
    projeto.putBox(46,47,57,60,51,52);//manga
    projeto.putBox(55,56,57,60,51,52);//manga
    projeto.setColor(0.1,0.9999,0.1,1);//verde
    projeto.putBox(48,54,61,62,48,54);//et corpo
    projeto.putBox(46,47,57,60,46,50);//braço
    projeto.putBox(55,56,57,60,46,50);//braço
    //luzes
    projeto.setColor(0.99999,0.99999,0.9999,1);//branco
    projeto.putSphere(10,52,50, 2);
    projeto.putSphere(50,52,10, 2);
    projeto.putSphere(90,52,50, 2);
    projeto.putSphere(50,52,90, 2);
    projeto.putSphere(23,52,78, 2);
    projeto.putSphere(78,52,23, 2);
    projeto.putSphere(77,52,78, 2);
    projeto.putSphere(22,52,23, 2);
    projeto.writeOFF((char*)"BILU.off");

    //Among us
    projeto.cutBox(0,99,0,99,0,99);//Limpando a matriz
    //corpo
    projeto.setColor(0.9999,0,0,1);//vermelho
    projeto.putEllipsoid(50,50,50,30,40,25);//corpo
    projeto.putBox(38,62,40,70,70,76);//mochila
    //olhos
    projeto.setColor(0.9999,0.9999,0.9999,1);//branco
    projeto.putEllipsoid(50,70,35,18,10,10);//olhos
    projeto.setColor(0.9999,0.9999,0.9999,1);//branco
    //osso
    projeto.setColor(0.9999,0,0,1);//vermelho
    projeto.putEllipsoid(50,60,50,27,14,22);//interior do corpo(deixar vermelho)
    projeto.cutEllipsoid(50,60,50,26,13,21);//interior do corpo(mudar pra cut)
    projeto.setColor(0.9999,0.9999,0.9999,1);//branco
    projeto.putBox(45,55,45,55,45,55);//osso do meio
    projeto.putSphere(45,55,50, 6);// bolinhas do osso
    projeto.cutSphere(45,55,50, 5);// bolinhas do osso oco(só pra usar todas as funções msm)
    projeto.putSphere(55,55,50, 8);// bolinhas do osso grande
    //pernas
    projeto.cutBox(0,99,0,20,0,99);//cortando pra por as pernas parte do pe
    projeto.cutBox(42,58,0,30,0,99);//cortando pra por as pernas parte do meio
    projeto.writeOFF((char*)"Amongzada.off");

    // Tazo
    projeto.cutBox(0,99,0,99,0,99);//Limpando a matriz
    projeto.setColor(0.9999,0,0,1);
    projeto.putSphere(50,50,50, 40);
    projeto.setColor(0.99,0.99,0.99,1);
    projeto.putEllipsoid(34,50,50,10,16,5);
    projeto.putEllipsoid(66,50,50,10,16,5);
    projeto.setColor(0,0,0.9999,1);
    projeto.putSphere(30,50,50, 6);
    projeto.putSphere(62,50,50, 6);
    projeto.cutBox(0, 99, 0, 99, 0, 49);
    projeto.cutBox(0, 99, 0, 99, 51, 99);
    projeto.writeOFF((char*)"elesvoltaram.off");

    // Teste de todas as funções
    projeto.cutBox(0,99,0,99,0,99);//Limpando a matriz
    projeto.setColor(0.9999,0.5,0.5,1);
    projeto.putBox(6,12,6,12,6,12);
    projeto.cutBox(10,12,10,12,10,12);
    projeto.setColor(0.9999,0,0,0.9);
    projeto.putSphere(30,30,30,21);
    projeto.cutSphere(30,30,30,20);
    projeto.setColor(0.2,0.8,0.5,0.1);
    projeto.putEllipsoid(60,70,60,6,15,18);
    projeto.cutEllipsoid(70,75,70,10,23,30);
    projeto.writeOFF((char*)"Testedasfunções.off");

}
