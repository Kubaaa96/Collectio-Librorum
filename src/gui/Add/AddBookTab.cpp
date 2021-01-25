#include "AddBookTab.h"

AddBookTab::AddBookTab(QWidget *parent)
    : AddTab(parent)
{
    initGui();
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
    initSingleRow(m_titleHLayout, m_titleLabel, m_titleLineEdit);
}

void AddBookTab::initAuthors()
{
    initSingleRow(m_authorsHLayout, m_authorsLabel, m_authorsLineEdit);
}

void AddBookTab::initPublisher()
{
    initSingleRow(m_publisherHLayout, m_publisherLabel, m_publisherLineEdit);
}

void AddBookTab::initDate()
{
    initSingleRow(m_dateHLayout, m_dateLabel, m_dateLineEdit);
}

void AddBookTab::initVersion()
{
    initSingleRow(m_versionHLayout, m_versionLabel, m_versionLineEdit);
}

void AddBookTab::initGenre()
{
    initSingleRow(m_genreHLayout, m_genreLabel, m_genreLineEdit);
}

void AddBookTab::initISBN()
{
    initSingleRow(m_ISBNHLayout, m_ISBNLabel, m_ISBNLineEdit);
}

void AddBookTab::initLanguage()
{
    initSingleRow(m_languageHLayout, m_languageLabel, m_languageLineEdit);
}

void AddBookTab::initPages()
{
    initSingleRow(m_pagesHLayout, m_pagesLabel, m_pagesLineEdit);
}

void AddBookTab::initSingleRow(QBoxLayout* layout, QLabel* label, QLineEdit* lineEdit)
{
    label->setAlignment(Qt::AlignCenter);
    layout->addWidget(label);
    layout->addWidget(lineEdit);
    layout->setStretchFactor(label, m_stretchFactorOfLabel);
    layout->setStretchFactor(lineEdit, m_stretchFactorOfLineEdit);
}

