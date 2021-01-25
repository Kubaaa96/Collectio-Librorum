#include "AddTab.h"

AddTab::AddTab(QWidget *parent)
    : QWidget(parent)
    , m_mainVLayout(new QVBoxLayout(this))
    , m_isbnLabel(new QLabel(tr("Insert ISBN code")))
    , m_isbnLineEdit(new QLineEdit())
    , m_titleHLayout(new QHBoxLayout())
    , m_titleLabel(new QLabel(tr("Title")))
    , m_loadedTitleLabel(new QLabel())
    , m_titleLineEdit(new QLineEdit())
    , m_titleToolButton(new QToolButton())
    , m_authorsHLayout(new QHBoxLayout())
    , m_authorsLabel(new QLabel(tr("Authors")))
    , m_loadedAuthorsLabel(new QLabel())
    , m_authorsLineEdit(new QLineEdit())
    , m_authorsToolButton(new QToolButton())
    , m_publisherHLayout(new QHBoxLayout())
    , m_publisherLabel(new QLabel(tr("Publisher")))
    , m_loadedPublisherLabel(new QLabel())
    , m_publisherLineEdit(new QLineEdit())
    , m_publisherToolButton(new QToolButton())
    , m_dateHLayout(new QHBoxLayout())
    , m_dateLabel(new QLabel(tr("Date")))
    , m_loadedDateLabel(new QLabel())
    , m_dateLineEdit(new QLineEdit())
    , m_dateToolButton(new QToolButton())
    , m_versionHLayout(new QHBoxLayout())
    , m_versionLabel(new QLabel(tr("Version")))
    , m_loadedVersionLabel(new QLabel())
    , m_versionLineEdit(new QLineEdit())
    , m_versionToolButton(new QToolButton())
    , m_genreHLayout(new QHBoxLayout())
    , m_genreLabel(new QLabel(tr("Genre")))
    , m_loadedGenreLabel(new QLabel())
    , m_genreLineEdit(new QLineEdit())
    , m_genreToolButton(new QToolButton())
    , m_ISBNHLayout(new QHBoxLayout())
    , m_ISBNLabel(new QLabel(tr("ISBN")))
    , m_loadedISBNLabel(new QLabel())
    , m_ISBNLineEdit(new QLineEdit())
    , m_ISBNToolButton(new QToolButton())
    , m_languageHLayout(new QHBoxLayout())
    , m_languageLabel(new QLabel(tr("Language")))
    , m_loadedLanguageLabel(new QLabel())
    , m_languageLineEdit(new QLineEdit())
    , m_languageToolButton(new QToolButton())
    , m_pagesHLayout(new QHBoxLayout())
    , m_pagesLabel(new QLabel(tr("Pages")))
    , m_loadedPagesLabel(new QLabel())
    , m_pagesLineEdit(new QLineEdit())
    , m_pagesToolButton(new QToolButton())
{
    
}

AddTab::~AddTab()
{
    delete m_isbnLabel;
    delete m_isbnLineEdit;

    delete m_titleLabel;
    delete m_loadedTitleLabel;
    delete m_titleLineEdit;
    delete m_titleToolButton;
    delete m_titleHLayout;

    delete m_authorsLabel;
    delete m_loadedAuthorsLabel;
    delete m_authorsLineEdit;
    delete m_authorsToolButton;
    delete m_authorsHLayout;

    delete m_publisherLabel;
    delete m_loadedPublisherLabel;
    delete m_publisherLineEdit;
    delete m_publisherToolButton;
    delete m_publisherHLayout;

    delete m_dateLabel;
    delete m_loadedDateLabel;
    delete m_dateLineEdit;
    delete m_dateToolButton;
    delete m_dateHLayout;

    delete m_versionLabel;
    delete m_loadedVersionLabel;
    delete m_versionLineEdit;
    delete m_versionToolButton;
    delete m_versionHLayout;

    delete m_genreLabel;
    delete m_loadedGenreLabel;
    delete m_genreLineEdit;
    delete m_genreToolButton;
    delete m_genreHLayout;

    delete m_ISBNLabel;
    delete m_loadedISBNLabel;
    delete m_ISBNLineEdit;
    delete m_ISBNToolButton;
    delete m_ISBNHLayout;

    delete m_languageLabel;
    delete m_loadedLanguageLabel;
    delete m_languageLineEdit;
    delete m_languageToolButton;
    delete m_languageHLayout;

    delete m_pagesLabel;
    delete m_loadedPagesLabel;
    delete m_pagesLineEdit;
    delete m_pagesToolButton;
    delete m_pagesHLayout;

    delete m_mainVLayout;
}