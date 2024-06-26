#ifndef DISPLAY_MODE_H
#define DISPLAY_MODE_H

#include "Zone.h"
#include <QWidget>

class Botonera;
class DisplayMode:public Zone
{

public:
   explicit DisplayMode(Botonera *b);
   void sendCode(QString code) override;
   void removeCode(QString code) override;
   void sendMessage();

private:
    Botonera *miBotonera;
};

#endif // DISPLAY_MODE_H
