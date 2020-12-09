#include "QLab_db.h"

QLab_db::QLab_db(QWidget *parent)
    : QMainWindow(parent)
{
	repo = new Repository();
	ui.setupUi(this);

	model = new QSqlTableModel();

	model->setTable("student");
	model->select();
	model->setEditStrategy(QSqlTableModel::OnFieldChange);


	ui.tableView->setModel(model);

	connect(ui.findBtn, &QPushButton::clicked, this, &QLab_db::find);
	connect(ui.showAllBtn, &QPushButton::clicked, this, &QLab_db::showAll);
}

void QLab_db::find() {
	QString colToFind;

	if (ui.nameRB->isChecked())
		colToFind = "name";
	else if (ui.surnameRB->isChecked())
		colToFind = "surname";
	else
		colToFind = "phone_num";

	QSqlQueryModel* modelQuery = new QSqlQueryModel();
	QString queryStr = "SELECT * FROM student WHERE " + colToFind + " = '" + ui.textInput->text() + "';";
	modelQuery->setQuery(queryStr);
	ui.tableView->setModel(modelQuery);
	
	QSqlQuery query(queryStr);

	while (query.next()) {
		QString data = query.value(1).toString();
		qDebug() << data;
	}
}

void QLab_db::showAll() {
	ui.tableView->setModel(model);
}
