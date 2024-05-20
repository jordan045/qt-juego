#include "range.h"
#include <QRadioButton>
#include <QHBoxLayout>
#include <QButtonGroup>
#include <boton.h>

range::range(QWidget *parent) :
    QWidget(parent)
{
    createGraphicsButtons();
    createLogicButtons();
    createButtonGroup();
    connection();
    createLayout();
    style();
}

void range::createGraphicsButtons()
{
    btn_2   = new QRadioButton(this);
    btn_4   = new QRadioButton(this);
    btn_8   = new QRadioButton(this);
    btn_16  = new QRadioButton(this);
    btn_32  = new QRadioButton(this);
    btn_64  = new QRadioButton(this);
    btn_128 = new QRadioButton(this);
    btn_256 = new QRadioButton(this);
}

void range::createLogicButtons()
{
    logic_btn_2   = new Boton(2,this);
    logic_btn_4   = new Boton(4,this);
    logic_btn_8   = new Boton(8,this);
    logic_btn_16  = new Boton(16,this);
    logic_btn_32  = new Boton(32,this);
    logic_btn_64  = new Boton(64,this);
    logic_btn_128 = new Boton(128,this);
    logic_btn_256 = new Boton(256,this);
}

void range::createButtonGroup()
{
    range_group = new QButtonGroup(this);
    range_group->addButton(btn_2,2);
    range_group->addButton(btn_4,4);
    range_group->addButton(btn_8,8);
    range_group->addButton(btn_16,16);
    range_group->addButton(btn_32,32);
    range_group->addButton(btn_64,64);
    range_group->addButton(btn_128,128);
    range_group->addButton(btn_256,256);
    btn_8->setChecked(true);
}

void range::connection()
{
    QObject::connect(btn_2,&QRadioButton::clicked,logic_btn_2,&Boton::pressed);
    QObject::connect(btn_4,&QRadioButton::clicked,logic_btn_4,&Boton::pressed);
    QObject::connect(btn_8,&QRadioButton::clicked,logic_btn_8,&Boton::pressed);
    QObject::connect(btn_16,&QRadioButton::clicked,logic_btn_16,&Boton::pressed);
    QObject::connect(btn_32,&QRadioButton::clicked,logic_btn_32,&Boton::pressed);
    QObject::connect(btn_64,&QRadioButton::clicked,logic_btn_64,&Boton::pressed);
    QObject::connect(btn_128,&QRadioButton::clicked,logic_btn_128,&Boton::pressed);
    QObject::connect(btn_256,&QRadioButton::clicked,logic_btn_256,&Boton::pressed);
}

void range::createLayout()
{
    auto layout = new QHBoxLayout;
    layout->addWidget(btn_2);
    layout->addWidget(btn_4);
    layout->addWidget(btn_8);
    layout->addWidget(btn_16);
    layout->addWidget(btn_32);
    layout->addWidget(btn_64);
    layout->addWidget(btn_128);
    layout->addWidget(btn_256);

    this->setLayout(layout);
}

void range::style()
{

    btn_2->setStyleSheet("QRadioButton::indicator {width: 80px; height: 80px;}"
                         "QRadioButton::indicator::unchecked {image: url(':/range/img/Range/2.png')}"
                         "QRadioButton::indicator::checked {image: url(':/range/img/Range/2_pressed.png)}");

    btn_4->setStyleSheet("QRadioButton::indicator {width: 80px; height: 80px;}"
                         "QRadioButton::indicator::unchecked {image: url(':/range/img/Range/4.png')}"
                         "QRadioButton::indicator::checked {image: url(':/range/img/Range/4_pressed.png')}");

    btn_8->setStyleSheet("QRadioButton::indicator {width: 80px; height: 80px;}"
                         "QRadioButton::indicator::unchecked {image: url(':/range/img/Range/8.png')}"
                         "QRadioButton::indicator::checked {image: url(':/range/img/Range/8_pressed.png')}");

    btn_16->setStyleSheet("QRadioButton::indicator {width: 80px; height: 80px;}"
                          "QRadioButton::indicator::unchecked {image: url(':/range/img/Range/16.png')}"
                          "QRadioButton::indicator::checked {image: url(':/range/img/Range/16_pressed.png')}");

    btn_32->setStyleSheet("QRadioButton::indicator {width: 80px; height: 80px;}"
                          "QRadioButton::indicator::unchecked {image: url(':/range/img/Range/32.png')}"
                          "QRadioButton::indicator::checked {image: url(':/range/img/Range/32_pressed.png')}");

    btn_64->setStyleSheet("QRadioButton::indicator {width: 80px; height: 80px;}"
                          "QRadioButton::indicator::unchecked {image: url(':/range/img/Range/64.png')}"
                          "QRadioButton::indicator::checked {image: url(':/range/img/Range/64_pressed.png')}");

    btn_128->setStyleSheet("QRadioButton::indicator {width: 80px; height: 80px;}"
                           "QRadioButton::indicator::unchecked {image: url(':/range/img/Range/128.png')}"
                           "QRadioButton::indicator::checked {image: url(':/range/img/Range/128_pressed.png')}");

    btn_256->setStyleSheet("QRadioButton::indicator {width: 80px; height: 80px;}"
                           "QRadioButton::indicator::unchecked {image: url(':/range/img/Range/256.png')}"
                           "QRadioButton::indicator::checked {image: url(':/range/img/Range/256_pressed.png')}");
}

