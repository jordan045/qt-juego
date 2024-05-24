#include "threat.h"
#include "botonera.h"
#include <QPushButton>
#include <QRadioButton>
#include <QHBoxLayout>
#include <QButtonGroup>
#include <boton.h>

threat::threat(botonera *b)
{
    miBotonera = b;
    auto *btn_12_sec = new QPushButton("",this);
    auto *btn_30_sec = new QPushButton("",this);
    auto *btn_6_min = new QPushButton("",this);
    auto *btn_15_min = new QPushButton("",this);
    auto *btn_reset = new QPushButton("",this);

    btn_12_sec->setCheckable(true);
    btn_30_sec->setCheckable(true);
    btn_6_min->setCheckable(true);
    btn_15_min->setCheckable(true);
    btn_reset->setCheckable(true);

    QButtonGroup *threat_group = new QButtonGroup();

    threat_group->addButton(btn_12_sec,1);
    threat_group->addButton(btn_30_sec,2);
    threat_group->addButton(btn_6_min,3);
    threat_group->addButton(btn_15_min,4);
    threat_group->addButton(btn_reset,5);


    auto layout = new QHBoxLayout;
    layout->addWidget(btn_12_sec);
    layout->addWidget(btn_30_sec);
    layout->addWidget(btn_6_min);
    layout->addWidget(btn_15_min);
    layout->addWidget(btn_reset);

    this->setLayout(layout);

    //graphic buttons
    auto *logic_btn_12_sec  = new Boton(this, "12 SEC");
    auto *logic_btn_30_sec  = new Boton(this, "30 SEC");
    auto *logic_btn_6_min   = new Boton(this, "6 MIN");
    auto *logic_btn_15_min  = new Boton(this, "15 MIN");
    auto *logic_btn_reset   = new Boton(this, "RESET");


    QObject::connect(btn_12_sec,&QPushButton::clicked,logic_btn_12_sec,&Boton::pressed);
    QObject::connect(btn_30_sec,&QPushButton::clicked,logic_btn_30_sec,&Boton::pressed);
    QObject::connect(btn_6_min,&QPushButton::clicked,logic_btn_6_min,&Boton::pressed);
    QObject::connect(btn_15_min,&QPushButton::clicked,logic_btn_15_min,&Boton::pressed);
    QObject::connect(btn_reset,&QPushButton::clicked,logic_btn_reset,&Boton::pressed);

    this->setStyleSheet("QPushButton {width: 80px; height: 80px; background-color: rgba(0,0,0,0)}"
                        "QPushButton:hover {background-color: rgba(0,0,0,0); }"
                        "QPushButton:pressed {background-color: rgba(0,0,0,0);}");

    btn_12_sec->setStyleSheet("QPushButton {image: url(':/threat/img/Threat/12_sec.png')}"
                         "QPushButton:checked {image: url(':/threat/img/Threat/12_sec_pressed.png')}");

    btn_30_sec->setStyleSheet("QPushButton {image: url(':/threat/img/Threat/30_sec.png')}"
                              "QPushButton:checked {image: url(':/threat/img/Threat/30_sec_pressed.png')}");

    btn_6_min->setStyleSheet("QPushButton {image: url(':/threat/img/Threat/6_min.png')}"
                              "QPushButton:checked {image: url(':/threat/img/Threat/6_min_pressed.png')}");

    btn_15_min->setStyleSheet("QPushButton {image: url(':/threat/img/Threat/15_min.png')}"
                              "QPushButton:checked {image: url(':/threat/img/Threat/15_min_pressed.png')}");

    btn_reset->setStyleSheet("QPushButton {image: url(':/threat/img/Threat/reset.png')}"
                            "QPushButton:pressed {image: url(':/threat/img/Threat/reset_pressed.png')}");
}

void threat::sendCode(QString code)
{
    miBotonera->sendCodeToEstado(this, &code);
}

