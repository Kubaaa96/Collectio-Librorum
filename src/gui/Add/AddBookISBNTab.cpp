#include "AddBookISBNTab.h"

AddBookISBNTab::AddBookISBNTab(QWidget* parent)
    : AddTab(parent)
    , m_isbnLabel(new QLabel(tr("Insert ISBN code")))
    , m_isbnHLayout(new QHBoxLayout())
    , m_isbnLineEdit(new QLineEdit())
    , m_loadISBNPushButton(new QPushButton(tr("Load book")))
{
    initGui();
    connecting();
}

AddBookISBNTab::~AddBookISBNTab()
{
    delete m_isbnLabel;
    delete m_isbnLineEdit;
    delete m_loadISBNPushButton;
}

void AddBookISBNTab::initGui()
{
    initLayouts();
    
    m_isbnHLayout->addWidget(m_isbnLineEdit);
    m_isbnHLayout->addWidget(m_loadISBNPushButton);

    initSingleRow(m_titleHLayout, m_titleLabel, m_loadedTitleLabel, m_titleLineEdit, m_titleToolButton);
    initSingleRow(m_authorsHLayout, m_authorsLabel, m_loadedAuthorsLabel, m_authorsLineEdit, m_authorsToolButton);
    initSingleRow(m_publisherHLayout, m_publisherLabel, m_loadedPublisherLabel, m_publisherLineEdit, m_publisherToolButton);
    initSingleRow(m_dateHLayout, m_dateLabel, m_loadedDateLabel, m_dateLineEdit, m_dateToolButton);
    initSingleRow(m_versionHLayout, m_versionLabel, m_loadedVersionLabel, m_versionLineEdit, m_versionToolButton);
    initSingleRow(m_genreHLayout, m_genreLabel, m_loadedGenreLabel, m_genreLineEdit, m_genreToolButton);
    initSingleRow(m_ISBNHLayout, m_ISBNLabel, m_loadedISBNLabel, m_ISBNLineEdit, m_ISBNToolButton);
    initSingleRow(m_languageHLayout, m_languageLabel, m_loadedLanguageLabel, m_languageLineEdit, m_languageToolButton);
    initSingleRow(m_pagesHLayout, m_pagesLabel, m_loadedPagesLabel, m_pagesLineEdit, m_pagesToolButton);
}

void AddBookISBNTab::initLayouts()
{
    m_mainVLayout->addWidget(m_isbnLabel);
    m_mainVLayout->addLayout(m_isbnHLayout);
    AddTab::initLayouts();
}

void AddBookISBNTab::initSingleRow(QBoxLayout* layout, QLabel* nameOflabel, QLabel* loadedLabel, QLineEdit* lineEdit, QToolButton* toolButton)
{
    layout->addWidget(nameOflabel);
    layout->addWidget(loadedLabel);
    lineEdit->hide();
    layout->addWidget(lineEdit);
    layout->addWidget(toolButton);
}

void AddBookISBNTab::editTitle()
{
    if (!m_titleLineEdit->isVisible())
    {
        m_loadedTitleLabel->hide();
        m_titleLineEdit->show();
    }
    else
    {
        m_titleLineEdit->hide();
        m_loadedTitleLabel->show();
    }
    
}

void AddBookISBNTab::connecting()
{
    connect(m_titleToolButton, &QToolButton::pressed, this, &AddBookISBNTab::editTitle);
}
