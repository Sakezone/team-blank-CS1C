#ifndef USER_H
#define USER_H

#include <QString>
#include <QtSql>

class User {
public:
  static bool setupTable(QSqlQuery &query);
  static void seedDB();
  static bool findByUsername(User &user, QString username);

  User();
  User(QString username, QString password, bool admin);
  User(QSqlQuery &query);

  bool save();

  int getId() const;
  QString getUsername() const;
  QString getPassword() const;
  bool isAdmin() const;

private:
  int id;
  QString username;
  QString password;
  bool admin;
};

#endif // USER_H
