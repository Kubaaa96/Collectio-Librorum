#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

public slots:

    void addBook();
    void addLibrary();
    void addCollection();

    void settings();
    void about();
    void help();

private:
    void initGui();

    QWidget* m_centralWidget;

    QMenuBar* m_menuBar;

    QMenu* m_file;
    QAction* m_addBook;
    QAction* m_addLibrary;
    QAction* m_addCollection;

    QMenu* m_edit;

    QMenu* m_options;
    QAction* m_settingsDialog;

    QMenu* m_about;
    QAction* m_aboutDialog;
    QAction* m_helpDialog;

    void initMenu();

    void connecting();

};

#endif // MAINWINDOW_H