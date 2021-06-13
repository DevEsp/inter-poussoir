#include <Arduino.h>
#include "interPoussoir.h"

int InterPoussoir::cptInter = 0;

InterPoussoir *tblInters[10] = {nullptr};

InterPoussoir::InterPoussoir(int pinInter, bool bistable)
{
    _bistable = bistable;
    _pinInter = pinInter;
    _numInter = cptInter;
    cptInter++;
    tblInters[_numInter] = this;
}

void InterPoussoir::init()
{
    pinMode(_pinInter, INPUT_PULLUP);
    switch (_numInter)
    {
    case 0:
        attachInterrupt(_pinInter, ISRinterPoussoir0, _bistable ? CHANGE : FALLING);
        break;
    case 1:
        attachInterrupt(_pinInter, ISRinterPoussoir1, _bistable ? CHANGE : FALLING);
        break;
    case 2:
        attachInterrupt(_pinInter, ISRinterPoussoir2, _bistable ? CHANGE : FALLING);
        break;
    case 3:
        attachInterrupt(_pinInter, ISRinterPoussoir3, _bistable ? CHANGE : FALLING);
        break;
    case 4:
        attachInterrupt(_pinInter, ISRinterPoussoir4, _bistable ? CHANGE : FALLING);
        break;
    case 5:
        attachInterrupt(_pinInter, ISRinterPoussoir5, _bistable ? CHANGE : FALLING);
        break;
    case 6:
        attachInterrupt(_pinInter, ISRinterPoussoir6, _bistable ? CHANGE : FALLING);
        break;
    case 7:
        attachInterrupt(_pinInter, ISRinterPoussoir7, _bistable ? CHANGE : FALLING);
        break;
    case 8:
        attachInterrupt(_pinInter, ISRinterPoussoir8, _bistable ? CHANGE : FALLING);
        break;
    case 9:
        attachInterrupt(_pinInter, ISRinterPoussoir9, _bistable ? CHANGE : FALLING);
        break;
    }
}

void InterPoussoir::addClick()
{
    _nbClick++;
    Serial.print(_numInter);
    Serial.print(" : ");
    Serial.println(_nbClick);
}

int InterPoussoir::compte()
{
    return _nbClick;
}

void ISRinterPoussoir0()
{
    static unsigned long dateDernierChangement = 0;

    unsigned long date = millis();
    if ((date - dateDernierChangement) > 200)
    {
        tblInters[0]->addClick();
        dateDernierChangement = date;
    }
}
void ISRinterPoussoir1()
{
    static unsigned long dateDernierChangement = 0;

    unsigned long date = millis();
    if ((date - dateDernierChangement) > 200)
    {
        tblInters[1]->addClick();
        dateDernierChangement = date;
    }
}
void ISRinterPoussoir2()
{
    static unsigned long dateDernierChangement = 0;

    unsigned long date = millis();
    if ((date - dateDernierChangement) > 200)
    {
        tblInters[2]->addClick();
        dateDernierChangement = date;
    }
}
void ISRinterPoussoir3()
{
    static unsigned long dateDernierChangement = 0;

    unsigned long date = millis();
    if ((date - dateDernierChangement) > 200)
    {
        tblInters[3]->addClick();
        dateDernierChangement = date;
    }
}
void ISRinterPoussoir4()
{
    static unsigned long dateDernierChangement = 0;

    unsigned long date = millis();
    if ((date - dateDernierChangement) > 200)
    {
        tblInters[4]->addClick();
        dateDernierChangement = date;
    }
}
void ISRinterPoussoir5()
{
    static unsigned long dateDernierChangement = 0;

    unsigned long date = millis();
    if ((date - dateDernierChangement) > 200)
    {
        tblInters[5]->addClick();
        dateDernierChangement = date;
    }
}
void ISRinterPoussoir6()
{
    static unsigned long dateDernierChangement = 0;

    unsigned long date = millis();
    if ((date - dateDernierChangement) > 200)
    {
        tblInters[6]->addClick();
        dateDernierChangement = date;
    }
}
void ISRinterPoussoir7()
{
    static unsigned long dateDernierChangement = 0;

    unsigned long date = millis();
    if ((date - dateDernierChangement) > 200)
    {
        tblInters[7]->addClick();
        dateDernierChangement = date;
    }
}
void ISRinterPoussoir8()
{
    static unsigned long dateDernierChangement = 0;

    unsigned long date = millis();
    if ((date - dateDernierChangement) > 200)
    {
        tblInters[8]->addClick();
        dateDernierChangement = date;
    }
}
void ISRinterPoussoir9()
{
    static unsigned long dateDernierChangement = 0;

    unsigned long date = millis();
    if ((date - dateDernierChangement) > 200)
    {
        tblInters[9]->addClick();
        dateDernierChangement = date;
    }
}