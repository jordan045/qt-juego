#ifndef BOTONERA_H
#define BOTONERA_H

#include "estado.h"
#include <QWidget>
#include "qshortcut.h"
#include "range.h"
#include "icm.h"
#include "label.h"
#include "Zone.h"
#include "threat.h"
#include "center.h"
#include "display_mode.h"
#include "display_selection.h"
#include "formatconcentrator.h"
#include "zone_center.h"
#include "zone_icm.h"
#include "zone_label.h"
#include "zone_range.h"
#include "zone_threat.h"

class Qek;
class Botonera : public QWidget
{
    Q_OBJECT
public:
   explicit Botonera(QWidget *parent = nullptr);
    void setmodo(int i);

    void setOverlay(QString codigo);

    void removeCodeFromRange(QString *boton);
    void removeCodeFromLabelSelection(QString *boton);
    void removeCodeFromQek(QString *boton);
    void removeCodeFromThreat(QString *boton);
    void removeCodeFromCenter(QString *boton);
    void removeCodeFromDisplayMode(QString *boton);
    void removeCodeFromDisplaySelection(QString *boton);
    void removeCodeFromIcm(QString *boton);

    void sendCodeToRange(QString *boton);
    void sendCodeToLabelSelection(QString *boton);
    void sendCodeToQek(QString *boton);
    void sendCodeToThreat(QString *boton);
    void sendCodeToCenter(QString *boton);
    void sendCodeToDisplayMode(QString *boton);
    void sendCodeToDisplaySelection(QString *boton);
    void sendCodeToIcm(QString *boton);

    void sendMessage();

    Estado *getEstado();
    QString getOverlay();
    
public slots:
    void start();
    void infoMessage();


private:
   zone_range *range_widget;
   zone_label *label_selection_widget;
   Qek *qek_widget;
   zone_threat *threat_assesment_widget;
   zone_center *center_widget;
   DisplayMode *display_mode_widget;
   DisplaySelection *display_selection_widget;
   zone_icm *icm_widget;
   FormatConcentrator *concentrator;

   QShortcut *shortcut;

   Estado *miEstado;
   int modo;


};

#endif // BOTONERA_H
