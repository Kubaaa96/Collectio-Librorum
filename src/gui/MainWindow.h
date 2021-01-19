#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "SettingsDialog/SettingsDialog.h"
#include "About/AboutDialog.h"
#include "About/HelpDialog.h"

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
    QSize m_minimumDialogSize{ 800, 600 };
    QSize m_initialDialogSize{ 1240, 720 };

    QWidget* m_centralWidget;

    QMenuBar* m_menuBar;

    QMenu* m_fileMenu;
    QAction* m_addBookAction;
    QAction* m_addLibraryAction;
    QAction* m_addCollectionAction;

    QMenu* m_editMenu;

    QMenu* m_optionsMenu;
    QAction* m_settingsAction;

    QMenu* m_aboutMenu;
    QAction* m_aboutAction;
    QAction* m_helpAction;

    void initMenu();

    SettingsDialog* m_settingsDialog;
    AboutDialog* m_aboutDialog;
    HelpDialog* m_helpDialog;

    void connecting();

};

#endif // MAINWINDOW_H