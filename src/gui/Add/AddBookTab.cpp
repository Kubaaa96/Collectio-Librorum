#include "AddBookTab.h"

AddBookTab::AddBookTab(QWidget *parent)
    : QWidget(parent)
    , m_mainVLayout(new QVBoxLayout(this))
    , m_titleHLayout(new QHBoxLayout())
    , m_titleLabel(new QLabel(tr("Title")))
    , m_titleLineEdit(new QLineEdit())
    , m_authorsHLayout(new QHBoxLayout())
    , m_authorsLabel(new QLabel(tr("Authors")))
    , m_authorsLineEdit(new QLineEdit())
    , m_publisherHLayout(new QHBoxLayout())
    , m_publisherLabel(new QLabel(tr("Publisher")))
    , m_publisherLineEdit(new QLineEdit())
    , m_dateHLayout(new QHBoxLayout())
    , m_dateLabel(new QLabel(tr("Release date")))
    , m_dateLineEdit(new QLineEdit())
    , m_versionHLayout(new QHBoxLayout())
    , m_versionLabel(new QLabel(tr("Version")))
    , m_versionLineEdit(new QLineEdit())
    , m_genreHLayout(new QHBoxLayout())
    , m_genreLabel(new QLabel(tr("Genre")))
    , m_genreLineEdit(new QLineEdit())
    , m_ISBNHLayout(new QHBoxLayout())
    , m_ISBNLabel(new QLabel(tr("I.S.B.N.")))
    , m_ISBNLineEdit(new QLineEdit())
    , m_languageHLayout(new QHBoxLayout())
    , m_languageLabel(new QLabel(tr("Language")))
    , m_languageLineEdit(new QLineEdit())
    , m_pagesHLayout(new QHBoxLayout())
    , m_pagesLabel(new QLabel(tr("Number of pages")))
    , m_pagesLinetEdit(new QLineEdit())
{
    initGui();
}

AddBookTab::~AddBookTab()
{
    delete m_titleLabel;
    delete m_titleLineEdit;
    delete m_titleHLayout;
    delete m_authorsLabel;
    delete m_authorsLineEdit;
    delete m_authorsHLayout;
    delete m_publisherLabel;
    delete m_publisherLineEdit;
    delete m_publisherHLayout;
    delete m_dateLabel;
    delete m_dateLineEdit;
    delete m_dateHLayout;
    delete m_versionLabel;
    delete m_versionLineEdit;
    delete m_versionHLayout;
    delete m_genreLabel;
    delete m_genreLineEdit;
    delete m_genreHLayout;
    delete m_languageLabel;
    delete m_languageLineEdit;
    delete m_languageHLayout;
    delete m_pagesLabel;
    delete m_pagesLinetEdit;
    delete m_pagesHLayout;
    delete m_mainVLayout;
}

void AddBookTab::initGui()
{
    // TODO set max and min size of window
    // TODO adjust size of LineEdits
    initLayouts();
    initTitle();
    initAuthors();
    initPublisher();
    initDate();
    initVersion();
    initGenre();
    initISBN();
    initLanguage();
    initPages();
}

void AddBookTab::initLayouts()
{
    m_mainVLayout->addLayout(m_titleHLayout);
    m_mainVLayout->addLayout(m_authorsHLayout);
    m_mainVLayout->addLayout(m_publisherHLayout);
    m_mainVLayout->addLayout(m_dateHLayout);
    m_mainVLayout->addLayout(m_versionHLayout);
    m_mainVLayout->addLayout(m_genreHLayout);
    m_mainVLayout->addLayout(m_ISBNHLayout);
    m_mainVLayout->addLayout(m_languageHLayout);
    m_mainVLayout->addLayout(m_pagesHLayout);
}

void AddBookTab::initTitle()
{
    m_titleHLayout->addWidget(m_titleLabel);
    m_titleHLayout->addWidget(m_titleLineEdit);
}

void AddBookTab::initAuthors()
{
    m_authorsHLayout->addWidget(m_authorsLabel);
    m_authorsHLayout->addWidget(m_authorsLineEdit);
}

void AddBookTab::initPublisher()
{
    m_publisherHLayout->addWidget(m_publisherLabel);
    m_publisherHLayout->addWidget(m_publisherLineEdit);
}

void AddBookTab::initDate()
{
    m_dateHLayout->addWidget(m_dateLabel);
    m_dateHLayout->addWidget(m_dateLineEdit);
}

void AddBookTab::initVersion()
{
    m_versionHLayout->addWidget(m_versionLabel);
    m_versionHLayout->addWidget(m_versionLineEdit);
}

void AddBookTab::initGenre()
{
    m_genreHLayout->addWidget(m_genreLabel);
    m_genreHLayout->addWidget(m_genreLineEdit);
}

void AddBookTab::initISBN()
{
    m_ISBNHLayout->addWidget(m_ISBNLabel);
    m_ISBNHLayout->addWidget(m_ISBNLineEdit);
}

void AddBookTab::initLanguage()
{
    m_languageHLayout->addWidget(m_languageLabel);
    m_languageHLayout->addWidget(m_languageLineEdit);
}

void AddBookTab::initPages()
{
    m_pagesHLayout->addWidget(m_pagesLabel);
    m_pagesHLayout->addWidget(m_pagesLinetEdit);
}