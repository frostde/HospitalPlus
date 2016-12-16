#pragma once

#include <QWidget>
#include "ui_QueryPatientWindow.h"

class QueryPatientWindow : public QWidget
{
	Q_OBJECT

public:
	QueryPatientWindow(QWidget *parent = Q_NULLPTR);
	~QueryPatientWindow();

private slots:
	void on_pushButton_clicked();
	void on_pushButton_2_clicked();

private:
	Ui::QueryPatientWindow ui;
};
