#ifndef ADDBOOKDIALOG_H
#define ADDBOOKDIALOG_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>

class AddBookDialog : public QDialog
{
    Q_OBJECT
public:
    explicit AddBookDialog(QWidget* parent = nullptr);
    ~AddBookDialog() override;

private slots:
    void add();
    void cancel();

private:
    void connecting();
    void initGui();

    void initLayouts();

    QVBoxLayout* m_mainVLayout;

    void initTitle();
    QHBoxLayout* m_titleHLayout;
    QLabel* m_titleLabel;
    QLineEdit* m_titleLineEdit;

    void initAuthors();
    QHBoxLayout* m_authorsHLayout;
    QLabel* m_authorsLabel;
    QLineEdit* m_authorsLineEdit;

    void initPublisher();
    QHBoxLayout* m_publisherHLayout;
    QLabel* m_publisherLabel;
    QLineEdit* m_publisherLineEdit;

    void initDate();
    QHBoxLayout* m_dateHLayout;
    QLabel* m_dateLabel;
    QLineEdit* m_dateLineEdit;

    void initVersion();
    QHBoxLayout* m_versionHLayout;
    QLabel* m_versionLabel;
    QLineEdit* m_versionLineEdit;

    void initGenre();
    QHBoxLayout* m_genreHLayout;
    QLabel* m_genreLabel;
    QLineEdit* m_genreLineEdit;

    void initISBN();
    QHBoxLayout* m_ISBNHLayout;
    QLabel* m_ISBNLabel;
    QLineEdit* m_ISBNLineEdit;

    void initLanguage();
    QHBoxLayout* m_languageHLayout;
    QLabel* m_languageLabel;
    QLineEdit* m_languageLineEdit;

    // Notes

    void initPages();
    QHBoxLayout* m_pagesHLayout;
    QLabel* m_pagesLabel;
    QLineEdit* m_pagesLinetEdit;

    // State

    void initButtons();
    QHBoxLayout* m_buttonsHLayout;
    QPushButton* m_addButton;
    QPushButton* m_cancelButton;
};

#endif //!ADDBOOKDIALOG_H