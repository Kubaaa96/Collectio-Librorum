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
    initSingleRow(m_titleHLayout, m_titleLabel, m_titleLineEdit);
    initSingleRow(m_authorsHLayout, m_authorsLabel, m_authorsLineEdit);
    initSingleRow(m_publisherHLayout, m_publisherLabel, m_publisherLineEdit);
    initSingleRow(m_dateHLayout, m_dateLabel, m_dateLineEdit);
    initSingleRow(m_versionHLayout, m_versionLabel, m_versionLineEdit);
    initSingleRow(m_genreHLayout, m_genreLabel, m_genreLineEdit);
    initSingleRow(m_ISBNHLayout, m_ISBNLabel, m_ISBNLineEdit);
    initSingleRow(m_languageHLayout, m_languageLabel, m_languageLineEdit);
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

