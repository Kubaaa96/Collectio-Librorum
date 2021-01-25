#ifndef ADDTAB_H
#define ADDTAB_H

#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QToolButton>

class AddTab : public QWidget
{
    Q_OBJECT
public:
    explicit AddTab(QWidget* parent = nullptr);
    ~AddTab() override;

protected:

    QVBoxLayout* m_mainVLayout;
    QLabel* m_isbnLabel;
    QLineEdit* m_isbnLineEdit;

    QHBoxLayout* m_titleHLayout;
    QLabel* m_titleLabel;
    QLabel* m_loadedTitleLabel;
    QLineEdit* m_titleLineEdit;
    QToolButton* m_titleToolButton;

    QHBoxLayout* m_authorsHLayout;
    QLabel* m_authorsLabel;
    QLabel* m_loadedAuthorsLabel;
    QLineEdit* m_authorsLineEdit;
    QToolButton* m_authorsToolButton;

    QHBoxLayout* m_publisherHLayout;
    QLabel* m_publisherLabel;
    QLabel* m_loadedPublisherLabel;
    QLineEdit* m_publisherLineEdit;
    QToolButton* m_publisherToolButton;

    QHBoxLayout* m_dateHLayout;
    QLabel* m_dateLabel;
    QLabel* m_loadedDateLabel;
    QLineEdit* m_dateLineEdit;
    QToolButton* m_dateToolButton;

    QHBoxLayout* m_versionHLayout;
    QLabel* m_versionLabel;
    QLabel* m_loadedVersionLabel;
    QLineEdit* m_versionLineEdit;
    QToolButton* m_versionToolButton;

    QHBoxLayout* m_genreHLayout;
    QLabel* m_genreLabel;
    QLabel* m_loadedGenreLabel;
    QLineEdit* m_genreLineEdit;
    QToolButton* m_genreToolButton;

    QHBoxLayout* m_ISBNHLayout;
    QLabel* m_ISBNLabel;
    QLabel* m_loadedISBNLabel;
    QLineEdit* m_ISBNLineEdit;
    QToolButton* m_ISBNToolButton;

    QHBoxLayout* m_languageHLayout;
    QLabel* m_languageLabel;
    QLabel* m_loadedLanguageLabel;
    QLineEdit* m_languageLineEdit;
    QToolButton* m_languageToolButton;

    QHBoxLayout* m_pagesHLayout;
    QLabel* m_pagesLabel;
    QLabel* m_loadedPagesLabel;
    QLineEdit* m_pagesLineEdit;
    QToolButton* m_pagesToolButton;
};
#endif //!ADDTAB_H