/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *tb_multiplicate;
    QPushButton *tb_two;
    QPushButton *tb_four;
    QPushButton *tb_reset;
    QPushButton *tb_five;
    QPushButton *tb_divide;
    QPushButton *tb_add;
    QPushButton *tb_six;
    QPushButton *tb_ms;
    QPushButton *tb_substract;
    QPushButton *tb_one;
    QPushButton *tb_seven;
    QPushButton *tb_zero;
    QPushButton *tb_nine;
    QLabel *l_formula;
    QPushButton *tb_negate;
    QPushButton *tb_equal;
    QPushButton *tb_power;
    QPushButton *tb_mc;
    QPushButton *tb_three;
    QPushButton *tn_mr;
    QPushButton *tb_backspace;
    QPushButton *tb_eight;
    QHBoxLayout *horizontalLayout;
    QLabel *l_memory;
    QLabel *l_result;
    QPushButton *tb_extra;
    QComboBox *cmb_controller;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(342, 362);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(14);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        tb_multiplicate = new QPushButton(centralwidget);
        tb_multiplicate->setObjectName("tb_multiplicate");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tb_multiplicate->sizePolicy().hasHeightForWidth());
        tb_multiplicate->setSizePolicy(sizePolicy1);
        tb_multiplicate->setMinimumSize(QSize(0, 0));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Narrow")});
        font1.setPointSize(14);
        tb_multiplicate->setFont(font1);

        gridLayout->addWidget(tb_multiplicate, 6, 5, 1, 1);

        tb_two = new QPushButton(centralwidget);
        tb_two->setObjectName("tb_two");
        sizePolicy.setHeightForWidth(tb_two->sizePolicy().hasHeightForWidth());
        tb_two->setSizePolicy(sizePolicy);
        tb_two->setMinimumSize(QSize(0, 0));
        tb_two->setFont(font1);

        gridLayout->addWidget(tb_two, 9, 2, 1, 1);

        tb_four = new QPushButton(centralwidget);
        tb_four->setObjectName("tb_four");
        sizePolicy.setHeightForWidth(tb_four->sizePolicy().hasHeightForWidth());
        tb_four->setSizePolicy(sizePolicy);
        tb_four->setMinimumSize(QSize(0, 0));
        tb_four->setFont(font1);

        gridLayout->addWidget(tb_four, 7, 1, 1, 1);

        tb_reset = new QPushButton(centralwidget);
        tb_reset->setObjectName("tb_reset");
        sizePolicy.setHeightForWidth(tb_reset->sizePolicy().hasHeightForWidth());
        tb_reset->setSizePolicy(sizePolicy);
        tb_reset->setMinimumSize(QSize(0, 0));
        tb_reset->setFont(font1);

        gridLayout->addWidget(tb_reset, 5, 1, 1, 2);

        tb_five = new QPushButton(centralwidget);
        tb_five->setObjectName("tb_five");
        sizePolicy.setHeightForWidth(tb_five->sizePolicy().hasHeightForWidth());
        tb_five->setSizePolicy(sizePolicy);
        tb_five->setMinimumSize(QSize(0, 0));
        tb_five->setFont(font1);

        gridLayout->addWidget(tb_five, 7, 2, 1, 1);

        tb_divide = new QPushButton(centralwidget);
        tb_divide->setObjectName("tb_divide");
        sizePolicy.setHeightForWidth(tb_divide->sizePolicy().hasHeightForWidth());
        tb_divide->setSizePolicy(sizePolicy);
        tb_divide->setMinimumSize(QSize(0, 0));
        tb_divide->setFont(font1);

        gridLayout->addWidget(tb_divide, 5, 5, 1, 1);

        tb_add = new QPushButton(centralwidget);
        tb_add->setObjectName("tb_add");
        sizePolicy.setHeightForWidth(tb_add->sizePolicy().hasHeightForWidth());
        tb_add->setSizePolicy(sizePolicy);
        tb_add->setMinimumSize(QSize(0, 0));
        tb_add->setFont(font1);

        gridLayout->addWidget(tb_add, 9, 5, 1, 1);

        tb_six = new QPushButton(centralwidget);
        tb_six->setObjectName("tb_six");
        sizePolicy.setHeightForWidth(tb_six->sizePolicy().hasHeightForWidth());
        tb_six->setSizePolicy(sizePolicy);
        tb_six->setMinimumSize(QSize(0, 0));
        tb_six->setFont(font1);

        gridLayout->addWidget(tb_six, 7, 3, 1, 1);

        tb_ms = new QPushButton(centralwidget);
        tb_ms->setObjectName("tb_ms");
        tb_ms->setMinimumSize(QSize(0, 0));
        tb_ms->setFont(font1);

        gridLayout->addWidget(tb_ms, 3, 3, 1, 1);

        tb_substract = new QPushButton(centralwidget);
        tb_substract->setObjectName("tb_substract");
        sizePolicy.setHeightForWidth(tb_substract->sizePolicy().hasHeightForWidth());
        tb_substract->setSizePolicy(sizePolicy);
        tb_substract->setMinimumSize(QSize(0, 0));
        tb_substract->setFont(font1);

        gridLayout->addWidget(tb_substract, 7, 5, 1, 1);

        tb_one = new QPushButton(centralwidget);
        tb_one->setObjectName("tb_one");
        sizePolicy.setHeightForWidth(tb_one->sizePolicy().hasHeightForWidth());
        tb_one->setSizePolicy(sizePolicy);
        tb_one->setMinimumSize(QSize(0, 0));
        tb_one->setFont(font1);

        gridLayout->addWidget(tb_one, 9, 1, 1, 1);

        tb_seven = new QPushButton(centralwidget);
        tb_seven->setObjectName("tb_seven");
        sizePolicy.setHeightForWidth(tb_seven->sizePolicy().hasHeightForWidth());
        tb_seven->setSizePolicy(sizePolicy);
        tb_seven->setMinimumSize(QSize(0, 0));
        tb_seven->setFont(font1);

        gridLayout->addWidget(tb_seven, 6, 1, 1, 1);

        tb_zero = new QPushButton(centralwidget);
        tb_zero->setObjectName("tb_zero");
        sizePolicy.setHeightForWidth(tb_zero->sizePolicy().hasHeightForWidth());
        tb_zero->setSizePolicy(sizePolicy);
        tb_zero->setMinimumSize(QSize(0, 0));
        tb_zero->setFont(font1);

        gridLayout->addWidget(tb_zero, 10, 2, 1, 1);

        tb_nine = new QPushButton(centralwidget);
        tb_nine->setObjectName("tb_nine");
        sizePolicy.setHeightForWidth(tb_nine->sizePolicy().hasHeightForWidth());
        tb_nine->setSizePolicy(sizePolicy);
        tb_nine->setMinimumSize(QSize(0, 0));
        tb_nine->setFont(font1);

        gridLayout->addWidget(tb_nine, 6, 3, 1, 1);

        l_formula = new QLabel(centralwidget);
        l_formula->setObjectName("l_formula");
        QFont font2;
        font2.setPointSize(10);
        l_formula->setFont(font2);
        l_formula->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(l_formula, 1, 1, 1, 5);

        tb_negate = new QPushButton(centralwidget);
        tb_negate->setObjectName("tb_negate");
        sizePolicy.setHeightForWidth(tb_negate->sizePolicy().hasHeightForWidth());
        tb_negate->setSizePolicy(sizePolicy);
        tb_negate->setMinimumSize(QSize(0, 0));
        tb_negate->setFont(font1);

        gridLayout->addWidget(tb_negate, 5, 3, 1, 1);

        tb_equal = new QPushButton(centralwidget);
        tb_equal->setObjectName("tb_equal");
        sizePolicy.setHeightForWidth(tb_equal->sizePolicy().hasHeightForWidth());
        tb_equal->setSizePolicy(sizePolicy);
        tb_equal->setMinimumSize(QSize(0, 0));
        tb_equal->setFont(font1);

        gridLayout->addWidget(tb_equal, 10, 5, 1, 1);

        tb_power = new QPushButton(centralwidget);
        tb_power->setObjectName("tb_power");

        gridLayout->addWidget(tb_power, 3, 5, 1, 1);

        tb_mc = new QPushButton(centralwidget);
        tb_mc->setObjectName("tb_mc");
        tb_mc->setMinimumSize(QSize(0, 0));
        tb_mc->setFont(font1);

        gridLayout->addWidget(tb_mc, 3, 1, 1, 1);

        tb_three = new QPushButton(centralwidget);
        tb_three->setObjectName("tb_three");
        sizePolicy.setHeightForWidth(tb_three->sizePolicy().hasHeightForWidth());
        tb_three->setSizePolicy(sizePolicy);
        tb_three->setMinimumSize(QSize(0, 0));
        tb_three->setFont(font1);

        gridLayout->addWidget(tb_three, 9, 3, 1, 1);

        tn_mr = new QPushButton(centralwidget);
        tn_mr->setObjectName("tn_mr");
        tn_mr->setMinimumSize(QSize(0, 0));
        tn_mr->setFont(font1);

        gridLayout->addWidget(tn_mr, 3, 2, 1, 1);

        tb_backspace = new QPushButton(centralwidget);
        tb_backspace->setObjectName("tb_backspace");
        sizePolicy.setHeightForWidth(tb_backspace->sizePolicy().hasHeightForWidth());
        tb_backspace->setSizePolicy(sizePolicy);

        gridLayout->addWidget(tb_backspace, 10, 3, 1, 1);

        tb_eight = new QPushButton(centralwidget);
        tb_eight->setObjectName("tb_eight");
        sizePolicy.setHeightForWidth(tb_eight->sizePolicy().hasHeightForWidth());
        tb_eight->setSizePolicy(sizePolicy);
        tb_eight->setMinimumSize(QSize(0, 0));
        tb_eight->setFont(font1);

        gridLayout->addWidget(tb_eight, 6, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        l_memory = new QLabel(centralwidget);
        l_memory->setObjectName("l_memory");
        sizePolicy.setHeightForWidth(l_memory->sizePolicy().hasHeightForWidth());
        l_memory->setSizePolicy(sizePolicy);
        l_memory->setFont(font);

        horizontalLayout->addWidget(l_memory);

        l_result = new QLabel(centralwidget);
        l_result->setObjectName("l_result");
        sizePolicy.setHeightForWidth(l_result->sizePolicy().hasHeightForWidth());
        l_result->setSizePolicy(sizePolicy);
        l_result->setFont(font);
        l_result->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout->addWidget(l_result);

        horizontalLayout->setStretch(1, 1);

        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 5);

        tb_extra = new QPushButton(centralwidget);
        tb_extra->setObjectName("tb_extra");
        sizePolicy.setHeightForWidth(tb_extra->sizePolicy().hasHeightForWidth());
        tb_extra->setSizePolicy(sizePolicy);
        tb_extra->setMinimumSize(QSize(0, 0));
        tb_extra->setFont(font1);

        gridLayout->addWidget(tb_extra, 10, 1, 1, 1);

        cmb_controller = new QComboBox(centralwidget);
        cmb_controller->addItem(QString());
        cmb_controller->addItem(QString());
        cmb_controller->addItem(QString());
        cmb_controller->addItem(QString());
        cmb_controller->addItem(QString());
        cmb_controller->addItem(QString());
        cmb_controller->addItem(QString());
        cmb_controller->setObjectName("cmb_controller");

        gridLayout->addWidget(cmb_controller, 0, 1, 1, 2);

        gridLayout->setColumnStretch(1, 2);
        gridLayout->setColumnStretch(2, 2);
        gridLayout->setColumnStretch(3, 2);
        gridLayout->setColumnStretch(5, 3);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        tb_multiplicate->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
#if QT_CONFIG(shortcut)
        tb_multiplicate->setShortcut(QCoreApplication::translate("MainWindow", "*", nullptr));
#endif // QT_CONFIG(shortcut)
        tb_two->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
#if QT_CONFIG(shortcut)
        tb_two->setShortcut(QCoreApplication::translate("MainWindow", "2", nullptr));
#endif // QT_CONFIG(shortcut)
        tb_four->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
#if QT_CONFIG(shortcut)
        tb_four->setShortcut(QCoreApplication::translate("MainWindow", "4", nullptr));
#endif // QT_CONFIG(shortcut)
        tb_reset->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
#if QT_CONFIG(shortcut)
        tb_reset->setShortcut(QCoreApplication::translate("MainWindow", "Esc", nullptr));
#endif // QT_CONFIG(shortcut)
        tb_five->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
#if QT_CONFIG(shortcut)
        tb_five->setShortcut(QCoreApplication::translate("MainWindow", "5", nullptr));
#endif // QT_CONFIG(shortcut)
        tb_divide->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
#if QT_CONFIG(shortcut)
        tb_divide->setShortcut(QCoreApplication::translate("MainWindow", "/", nullptr));
#endif // QT_CONFIG(shortcut)
        tb_add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
#if QT_CONFIG(shortcut)
        tb_add->setShortcut(QCoreApplication::translate("MainWindow", "+", nullptr));
#endif // QT_CONFIG(shortcut)
        tb_six->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
#if QT_CONFIG(shortcut)
        tb_six->setShortcut(QCoreApplication::translate("MainWindow", "6", nullptr));
#endif // QT_CONFIG(shortcut)
        tb_ms->setText(QCoreApplication::translate("MainWindow", "MS", nullptr));
        tb_substract->setText(QCoreApplication::translate("MainWindow", "\342\210\222", nullptr));
#if QT_CONFIG(shortcut)
        tb_substract->setShortcut(QCoreApplication::translate("MainWindow", "-", nullptr));
#endif // QT_CONFIG(shortcut)
        tb_one->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
#if QT_CONFIG(shortcut)
        tb_one->setShortcut(QCoreApplication::translate("MainWindow", "1", nullptr));
#endif // QT_CONFIG(shortcut)
        tb_seven->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
#if QT_CONFIG(shortcut)
        tb_seven->setShortcut(QCoreApplication::translate("MainWindow", "7", nullptr));
#endif // QT_CONFIG(shortcut)
        tb_zero->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        tb_nine->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
#if QT_CONFIG(shortcut)
        tb_nine->setShortcut(QCoreApplication::translate("MainWindow", "9", nullptr));
#endif // QT_CONFIG(shortcut)
        l_formula->setText(QCoreApplication::translate("MainWindow", "l_formula", nullptr));
        tb_negate->setText(QCoreApplication::translate("MainWindow", "\302\261", nullptr));
        tb_equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
#if QT_CONFIG(shortcut)
        tb_equal->setShortcut(QCoreApplication::translate("MainWindow", "Enter", nullptr));
#endif // QT_CONFIG(shortcut)
        tb_power->setText(QCoreApplication::translate("MainWindow", "x\312\270", nullptr));
        tb_mc->setText(QCoreApplication::translate("MainWindow", "MC", nullptr));
        tb_three->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
#if QT_CONFIG(shortcut)
        tb_three->setShortcut(QCoreApplication::translate("MainWindow", "3", nullptr));
#endif // QT_CONFIG(shortcut)
        tn_mr->setText(QCoreApplication::translate("MainWindow", "MR", nullptr));
        tb_backspace->setText(QCoreApplication::translate("MainWindow", "\342\214\253", nullptr));
        tb_eight->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
#if QT_CONFIG(shortcut)
        tb_eight->setShortcut(QCoreApplication::translate("MainWindow", "8", nullptr));
#endif // QT_CONFIG(shortcut)
        l_memory->setText(QCoreApplication::translate("MainWindow", "l_memory", nullptr));
        l_result->setText(QCoreApplication::translate("MainWindow", "l_result", nullptr));
        tb_extra->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        cmb_controller->setItemText(0, QCoreApplication::translate("MainWindow", "double", nullptr));
        cmb_controller->setItemText(1, QCoreApplication::translate("MainWindow", "float", nullptr));
        cmb_controller->setItemText(2, QCoreApplication::translate("MainWindow", "uint8_t", nullptr));
        cmb_controller->setItemText(3, QCoreApplication::translate("MainWindow", "int", nullptr));
        cmb_controller->setItemText(4, QCoreApplication::translate("MainWindow", "int64_t", nullptr));
        cmb_controller->setItemText(5, QCoreApplication::translate("MainWindow", "size_t", nullptr));
        cmb_controller->setItemText(6, QCoreApplication::translate("MainWindow", "Rational", nullptr));

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
