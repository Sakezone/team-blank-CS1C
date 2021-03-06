#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QDialog>
#include <QMessageBox>

#include "user.h"

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QDialog {
  Q_OBJECT

public:
  explicit LoginWindow(QWidget *parent = nullptr);
  ~LoginWindow();

  User getUser();

private slots:
  void on_loginButton_clicked();

private:
  Ui::LoginWindow *ui;
  User user;
};

#endif // LOGINWINDOW_H
