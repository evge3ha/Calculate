#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QtMath>


MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    ui->l_result->setText("0");
    ui->l_memory->setText("");
    ui->l_formula->setText("");

    SetText("0");
    has_result_ = false;
}


MainWindow::~MainWindow() {
    delete ui;
}


QString RemoveTrailingZeroes(const QString &text) {
    for (qsizetype i = 0; i < text.size(); ++i) {
        if (text[i] != '0') {
            return text.mid(i);
        }
    }
    return "";
}


QString NormalizeNumber(const QString &text) {
    if (text.isEmpty()) {
        return "0";
    }
    if (text.startsWith('.')) {
        return NormalizeNumber("0" + text);
    }
    if (text.startsWith('-')) {
        return "-" + NormalizeNumber(text.mid(1));
    }
    if (text.startsWith('0') && !text.startsWith("0.")) {
        return NormalizeNumber(RemoveTrailingZeroes(text));
    }
    return text;
}


QString OpToString(Operation op) {
    switch(op) {
    case Operation::NO_OPERATION: return "";
    case Operation::ADDITION: return "+";
    case Operation::DIVISION: return "÷";
    case Operation::MULTIPLICATION: return "×";
    case Operation::SUBTRACTION: return "−";
    case Operation::POWER: return "^";
    }
    return "";
}


void MainWindow::on_tb_seven_clicked() {
    AddText("7");
}


void MainWindow::on_tb_eight_clicked() {
    AddText("8");
}


void MainWindow::on_tb_nine_clicked() {
    AddText("9");
}


void MainWindow::on_tb_four_clicked() {
    AddText("4");
}


void MainWindow::on_tb_five_clicked() {
    AddText("5");
}


void MainWindow::on_tb_six_clicked()
{
    AddText("6");
}


void MainWindow::on_tb_one_clicked() {
    AddText("1");
}


void MainWindow::on_tb_two_clicked() {
    AddText("2");
}


void MainWindow::on_tb_three_clicked() {
    AddText("3");
}


void MainWindow::on_tb_zero_clicked() {
    AddText("0");
}


void MainWindow::SetText(const QString &text) {
    input_number_ = NormalizeNumber(text);
    active_number_ = input_number_.toDouble();

    ui->l_result->setText(input_number_);
}


void MainWindow::AddText(const QString &suffix) {
    if (has_result_) {
        ui->l_formula->setText("");
        input_number_ = "";
        has_result_ = false;
    }

    if (input_number_ == "0" && suffix != ".") {
        input_number_ = suffix;
    } else {
        input_number_ += suffix;
    }

    SetText(input_number_);
}


void MainWindow::SetOperation(Operation op) {
    if (has_result_) {
        ui->l_formula->setText("");
        has_result_ = false;
    }

    if (current_operation_ != Operation::NO_OPERATION && input_number_.isEmpty()) {
        current_operation_ = op;
        QString str = QString("%1 %2")
                          .arg(calculator_.GetNumber())
                          .arg(OpToString(current_operation_));

        ui->l_formula->setText(str);
        return;
    }

    if (!input_number_.isEmpty()) {
        calculator_.Set(active_number_);
    }

    current_operation_ = op;
    QString str = QString("%1 %2")
                      .arg(calculator_.GetNumber())
                      .arg(OpToString(current_operation_));

    ui->l_formula->setText(str);
    input_number_ = {};
}


void MainWindow::on_tb_comma_clicked() {
    if (has_result_) {
        ui->l_formula->setText("");
        input_number_ = "0";
        has_result_ = false;
    }

    if(input_number_.contains(".")){
        return;
    }

    AddText(".");
}


void MainWindow::on_tb_negate_clicked() {
    if (has_result_) {
        ui->l_formula->setText("");
        has_result_ = false;
    }

    if (input_number_.isEmpty() || input_number_ == "0") {
        return;
    }

    if (input_number_.startsWith("-")) {
        SetText(input_number_.mid(1));
    } else {
        input_number_.push_front("-");
        SetText(input_number_);
    }
}


void MainWindow::on_tb_backspace_clicked() {
    if (has_result_) {
        ui->l_formula->setText("");
        input_number_ = "0";
        has_result_ = false;
        SetText("0");
        return;
    }

    if (input_number_.isEmpty()) {
        return;
    }

    input_number_.chop(1);
    if (input_number_.isEmpty() || input_number_ == "-") {
        SetText("0");
    } else {
        SetText(input_number_);
    }
}


void MainWindow::on_tb_power_clicked() {
    SetOperation(Operation::POWER);
}


void MainWindow::on_tb_divide_clicked() {
    SetOperation(Operation::DIVISION);
}


void MainWindow::on_tb_multiplicate_clicked() {
    SetOperation(Operation::MULTIPLICATION);
}


void MainWindow::on_tb_substract_clicked() {
    SetOperation(Operation::SUBTRACTION);
}


void MainWindow::on_tb_add_clicked() {
    SetOperation(Operation::ADDITION);
}


void MainWindow::on_tb_equal_clicked() {
    if (current_operation_ == Operation::NO_OPERATION) {
        return;
    }

    if (input_number_.isEmpty()) {
        active_number_ = calculator_.GetNumber();
    }

    QString str = QString("%1 %2 %3 =")
                      .arg(calculator_.GetNumber())
                      .arg(OpToString(current_operation_))
                      .arg(active_number_);
    ui->l_formula->setText(str);

    switch (current_operation_) {
    case Operation::MULTIPLICATION:
        calculator_.Mul(active_number_);
        break;
    case  Operation::DIVISION:
        calculator_.Div(active_number_);
        break;
    case Operation::SUBTRACTION:
        calculator_.Sub(active_number_);
        break;
    case Operation::ADDITION:
        calculator_.Add(active_number_);
        break;
    case Operation::POWER:
        calculator_.Pow(active_number_);
        break;
    default:
        break;
    }

    active_number_ = calculator_.GetNumber();
    QString result_str = QString::number(active_number_);
    ui->l_result->setText(result_str);

    input_number_ = result_str;
    current_operation_ = Operation::NO_OPERATION;
    has_result_ = true;
}


void MainWindow::on_tb_reset_clicked() {
    current_operation_ = Operation::NO_OPERATION;
    has_result_ = false;
    ui->l_formula->setText("");
    SetText("0");
}


void MainWindow::on_tb_ms_clicked() {
    number_member_ = active_number_;
    member_flag_ = true;

    ui->l_memory->setText("M");
}


void MainWindow::on_tb_mc_clicked() {
    number_member_ = {};
    member_flag_ = false;

    ui->l_memory->setText("");
}


void MainWindow::on_tn_mr_clicked() {
    if(!member_flag_) {
        return;
    }

    if (has_result_) {
        ui->l_formula->setText("");
        has_result_ = false;
    }

    active_number_ = number_member_;
    input_number_ = QString::number(active_number_);
    SetText(input_number_);
}