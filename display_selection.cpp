#include "display_selection.h"
#include "boton.h"
#include "botonera.h"
#include "qboxlayout.h"
#include "qbuttongroup.h"
#include "qpushbutton.h"

DisplaySelection::DisplaySelection(Botonera *b)
{

    miBotonera = b;

    auto *air = new QPushButton("",this);
    auto *surf = new QPushButton("",this);
    auto *subSurf = new QPushButton("",this);
    auto *refPos = new QPushButton("",this);
    auto *bearSel = new QPushButton("",this);
    auto *linkSel = new QPushButton("",this);
    auto *warfSel = new QPushButton("",this);
    auto *fig = new QPushButton("",this);

    air->setCheckable(true);
    air->setFlat(true);

    surf->setCheckable(true);
    surf->setFlat(true);

    subSurf->setCheckable(true);
    subSurf->setFlat(true);

    refPos->setCheckable(true);
    refPos->setFlat(true);

    bearSel->setCheckable(true);
    bearSel->setFlat(true);

    linkSel->setCheckable(true);
    linkSel->setFlat(true);

    warfSel->setCheckable(true);
    warfSel->setFlat(true);

    fig->setCheckable(true);
    fig->setFlat(true);

    // Create a new QButtonGroup
    QButtonGroup *displaySelection = new QButtonGroup();

    // Set exclusive property to false
    displaySelection->setExclusive(false);

    // Add all buttons to the group
    displaySelection->addButton(air);
    displaySelection->addButton(surf);
    displaySelection->addButton(subSurf);
    displaySelection->addButton(refPos);
    displaySelection->addButton(bearSel);
    displaySelection->addButton(linkSel);
    displaySelection->addButton(warfSel);
    displaySelection->addButton(fig);

    auto layout = new QVBoxLayout;
    layout->addWidget(air);
    layout->addWidget(surf);
    layout->addWidget(subSurf);
    layout->addWidget(refPos);
    layout->addWidget(bearSel);
    layout->addWidget(linkSel);
    layout->addWidget(warfSel);
    layout->addWidget(fig);

    this->setLayout(layout);

    auto *logicAir = new Boton(this, "AIR");
    auto *logicSurf = new Boton(this, "SURF");
    auto *logicSubSurf = new Boton(this, "SUB SURF");
    auto *logicRefPos = new Boton(this, "REF POS");
    auto *logicBearSel = new Boton(this, "BEAR SEL");
    auto *logicLinkSel = new Boton(this, "LINK SEL");
    auto *logicWarfSel = new Boton(this, "WARF SEL");
    auto *logicFig = new Boton(this, "FIG");

    QObject::connect(air, &QPushButton::clicked, logicAir, &Boton::pressed);
    QObject::connect(surf, &QPushButton::clicked, logicSurf, &Boton::pressed);
    QObject::connect(subSurf, &QPushButton::clicked, logicSubSurf, &Boton::pressed);
    QObject::connect(refPos, &QPushButton::clicked, logicRefPos, &Boton::pressed);
    QObject::connect(bearSel, &QPushButton::clicked, logicBearSel, &Boton::pressed);
    QObject::connect(linkSel, &QPushButton::clicked, logicLinkSel, &Boton::pressed);
    QObject::connect(warfSel, &QPushButton::clicked, logicWarfSel, &Boton::pressed);
    QObject::connect(fig, &QPushButton::clicked, logicFig, &Boton::pressed);

    this->setStyleSheet("QPushButton {width: 80px; height: 80px; background-color: rgba(0,0,0,0)}"
                        "QPushButton:hover {background-color: rgba(0,0,0,0); }"
                        "QPushButton:pressed {background-color: rgba(0,0,0,0);}");

    air->setStyleSheet("QPushButton {image: url(':/display_selection/img/Display Selection/air.png')}"
                       "QPushButton:checked {image: url(':/display_selection/img/Display Selection/air_pressed.png')}");

    surf->setStyleSheet("QPushButton {image: url(':/display_selection/img/Display Selection/surf.png')}"
                        "QPushButton:checked {image: url(':/display_selection/img/Display Selection/surf_pressed.png')}");

    subSurf->setStyleSheet("QPushButton {image: url(':/display_selection/img/Display Selection/sub_surf.png')}"
                            "QPushButton:checked {image: url(':/display_selection/img/Display Selection/sub_surf_pressed.png')}");

    refPos->setStyleSheet("QPushButton {image: url(':/display_selection/img/Display Selection/ref_pos.png')}"
                           "QPushButton:checked {image: url(':/display_selection/img/Display Selection/ref_pos_pressed.png')}");

    bearSel->setStyleSheet("QPushButton {image: url(':/display_selection/img/Display Selection/bear_sel.png')}"
                            "QPushButton:checked {image: url(':/display_selection/img/Display Selection/bear_sel_pressed.png')}");

    linkSel->setStyleSheet("QPushButton {image: url(':/display_selection/img/Display Selection/link_sel.png')}"
                            "QPushButton:checked {image: url(':/display_selection/img/Display Selection/link_sel_pressed.png')}");

    warfSel->setStyleSheet("QPushButton {image: url(':/display_selection/img/Display Selection/warf_sel.png')}"
                            "QPushButton:checked {image: url(':/display_selection/img/Display Selection/warf_sel_pressed.png')}");

    fig->setStyleSheet("QPushButton {image: url(':/display_selection/img/Display Selection/fig.png')}"
                       "QPushButton:checked {image: url(':/display_selection/img/Display Selection/fig_pressed.png')}");

}

void DisplaySelection::sendCode(QString code)
{
    miBotonera->sendCodeToEstado(this, &code);
}
