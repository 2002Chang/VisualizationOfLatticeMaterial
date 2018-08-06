/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *Title;
    QHBoxLayout *horizontalLayout;
    QLabel *Help_Title;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QLabel *Info_title;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *z_label_title;
    QLabel *z_label;
    QHBoxLayout *horizontalLayout_3;
    QLabel *amu_label_title;
    QLabel *amu_label;
    QHBoxLayout *horizontalLayout_4;
    QLabel *d_label_title;
    QLabel *d_label;
    QHBoxLayout *horizontalLayout_8;
    QLabel *r_label_title;
    QLabel *r_label;
    QHBoxLayout *horizontalLayout_7;
    QLabel *cu_label_title;
    QLabel *cu_label;
    QHBoxLayout *horizontalLayout_5;
    QLabel *mp_label_title;
    QLabel *mp_label;
    QHBoxLayout *horizontalLayout_6;
    QLabel *bp_label_title;
    QLabel *bp_label;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *draw_button;
    QSpacerItem *horizontalSpacer;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(376, 462);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 341, 421));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Title = new QLabel(layoutWidget);
        Title->setObjectName(QStringLiteral("Title"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Title->sizePolicy().hasHeightForWidth());
        Title->setSizePolicy(sizePolicy1);
        Title->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(Title);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        Help_Title = new QLabel(layoutWidget);
        Help_Title->setObjectName(QStringLiteral("Help_Title"));

        horizontalLayout->addWidget(Help_Title);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_4->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        Info_title = new QLabel(layoutWidget);
        Info_title->setObjectName(QStringLiteral("Info_title"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Info_title->sizePolicy().hasHeightForWidth());
        Info_title->setSizePolicy(sizePolicy2);
        Info_title->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(Info_title);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        z_label_title = new QLabel(layoutWidget);
        z_label_title->setObjectName(QStringLiteral("z_label_title"));
        sizePolicy.setHeightForWidth(z_label_title->sizePolicy().hasHeightForWidth());
        z_label_title->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(z_label_title);

        z_label = new QLabel(layoutWidget);
        z_label->setObjectName(QStringLiteral("z_label"));
        sizePolicy.setHeightForWidth(z_label->sizePolicy().hasHeightForWidth());
        z_label->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(z_label);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        amu_label_title = new QLabel(layoutWidget);
        amu_label_title->setObjectName(QStringLiteral("amu_label_title"));
        sizePolicy.setHeightForWidth(amu_label_title->sizePolicy().hasHeightForWidth());
        amu_label_title->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(amu_label_title);

        amu_label = new QLabel(layoutWidget);
        amu_label->setObjectName(QStringLiteral("amu_label"));
        sizePolicy.setHeightForWidth(amu_label->sizePolicy().hasHeightForWidth());
        amu_label->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(amu_label);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        d_label_title = new QLabel(layoutWidget);
        d_label_title->setObjectName(QStringLiteral("d_label_title"));
        sizePolicy.setHeightForWidth(d_label_title->sizePolicy().hasHeightForWidth());
        d_label_title->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(d_label_title);

        d_label = new QLabel(layoutWidget);
        d_label->setObjectName(QStringLiteral("d_label"));
        sizePolicy.setHeightForWidth(d_label->sizePolicy().hasHeightForWidth());
        d_label->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(d_label);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        r_label_title = new QLabel(layoutWidget);
        r_label_title->setObjectName(QStringLiteral("r_label_title"));
        sizePolicy.setHeightForWidth(r_label_title->sizePolicy().hasHeightForWidth());
        r_label_title->setSizePolicy(sizePolicy);

        horizontalLayout_8->addWidget(r_label_title);

        r_label = new QLabel(layoutWidget);
        r_label->setObjectName(QStringLiteral("r_label"));
        sizePolicy.setHeightForWidth(r_label->sizePolicy().hasHeightForWidth());
        r_label->setSizePolicy(sizePolicy);

        horizontalLayout_8->addWidget(r_label);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        cu_label_title = new QLabel(layoutWidget);
        cu_label_title->setObjectName(QStringLiteral("cu_label_title"));
        sizePolicy.setHeightForWidth(cu_label_title->sizePolicy().hasHeightForWidth());
        cu_label_title->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(cu_label_title);

        cu_label = new QLabel(layoutWidget);
        cu_label->setObjectName(QStringLiteral("cu_label"));
        sizePolicy.setHeightForWidth(cu_label->sizePolicy().hasHeightForWidth());
        cu_label->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(cu_label);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        mp_label_title = new QLabel(layoutWidget);
        mp_label_title->setObjectName(QStringLiteral("mp_label_title"));
        sizePolicy.setHeightForWidth(mp_label_title->sizePolicy().hasHeightForWidth());
        mp_label_title->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(mp_label_title);

        mp_label = new QLabel(layoutWidget);
        mp_label->setObjectName(QStringLiteral("mp_label"));
        sizePolicy.setHeightForWidth(mp_label->sizePolicy().hasHeightForWidth());
        mp_label->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(mp_label);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        bp_label_title = new QLabel(layoutWidget);
        bp_label_title->setObjectName(QStringLiteral("bp_label_title"));
        sizePolicy.setHeightForWidth(bp_label_title->sizePolicy().hasHeightForWidth());
        bp_label_title->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(bp_label_title);

        bp_label = new QLabel(layoutWidget);
        bp_label->setObjectName(QStringLiteral("bp_label"));
        sizePolicy.setHeightForWidth(bp_label->sizePolicy().hasHeightForWidth());
        bp_label->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(bp_label);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_2);

        draw_button = new QPushButton(layoutWidget);
        draw_button->setObjectName(QStringLiteral("draw_button"));

        horizontalLayout_9->addWidget(draw_button);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_9);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Visualization of Latice Material", nullptr));
        Title->setText(QApplication::translate("MainWindow", "Element", nullptr));
        Help_Title->setText(QApplication::translate("MainWindow", "Symbol: ", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Search", nullptr));
        Info_title->setText(QApplication::translate("MainWindow", "Information", nullptr));
        z_label_title->setText(QApplication::translate("MainWindow", "Z:", nullptr));
        z_label->setText(QString());
        amu_label_title->setText(QApplication::translate("MainWindow", "Atomic weight: ", nullptr));
        amu_label->setText(QString());
        d_label_title->setText(QApplication::translate("MainWindow", "Density: ", nullptr));
        d_label->setText(QString());
        r_label_title->setText(QApplication::translate("MainWindow", "Radius (pm): ", nullptr));
        r_label->setText(QString());
        cu_label_title->setText(QApplication::translate("MainWindow", "Structure: ", nullptr));
        cu_label->setText(QString());
        mp_label_title->setText(QApplication::translate("MainWindow", "mp: ", nullptr));
        mp_label->setText(QString());
        bp_label_title->setText(QApplication::translate("MainWindow", "bp: ", nullptr));
        bp_label->setText(QString());
        draw_button->setText(QApplication::translate("MainWindow", "Draw Structure", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
