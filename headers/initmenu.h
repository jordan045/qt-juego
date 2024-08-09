#ifndef INITMENU_H
#define INITMENU_H

#include <QWidget>
#include "botonera.h"
class InitMenu : public QWidget
{
    Q_OBJECT
public:
    explicit InitMenu(QWidget *parent = nullptr);

private:
    Botonera *miBotonera;
    void start();
};

#endif // INITMENU_H
