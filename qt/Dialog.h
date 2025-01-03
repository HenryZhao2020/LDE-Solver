#pragma once

#include <QDialog>
#include <QBoxLayout>
#include <QPushButton>

class MainWindow;

struct LDE;

class Dialog : public QDialog {
    Q_OBJECT

public:
    Dialog(MainWindow *win, const QString &title);
    ~Dialog();

protected:
    QVBoxLayout *dialogLayout;
    QPushButton *okButton;
};

class AboutDialog : public Dialog {
    Q_OBJECT

public:
    AboutDialog(MainWindow *win);
    ~AboutDialog();
};

class ResultDialog : public Dialog {
    Q_OBJECT

public:
    ResultDialog(MainWindow *win, LDE lde);
    ~ResultDialog();
};
