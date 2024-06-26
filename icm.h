#ifndef ICM_H
#define ICM_H

#include "Zone.h"
#include <QWidget>

class Botonera;
class Icm : public Zone
{
public:
    explicit Icm(Botonera *b);
    void sendCode(QString code) override;
    void removeCode(QString code) override;
    void sendMessage();

private:
    Botonera *miBotonera;
};

#endif // ICM_H
