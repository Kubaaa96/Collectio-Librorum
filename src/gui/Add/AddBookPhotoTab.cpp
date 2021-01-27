#include "AddBookPhotoTab.h"

AddBookPhotoTab::AddBookPhotoTab(QWidget *parent)
    : AddTab(parent)
    , m_addPhotoPushButton(new QPushButton(tr("Add Book Photo")))
    , m_bookPhoto(new QLabel())
{
    initGui();
}

AddBookPhotoTab::~AddBookPhotoTab()
{
    delete m_addPhotoPushButton;
    delete m_bookPhoto;
}

void AddBookPhotoTab::initGui()
{
    m_mainVLayout->addWidget(m_addPhotoPushButton);
    m_mainVLayout->addWidget(m_bookPhoto);

    initLayouts();

    initSingleRow(m_titleHLayout, m_titleLabel, m_loadedTitleLabel);
    initSingleRow(m_authorsHLayout, m_authorsLabel, m_loadedAuthorsLabel);
    initSingleRow(m_publisherHLayout, m_publisherLabel, m_loadedPublisherLabel);
    initSingleRow(m_dateHLayout, m_dateLabel, m_loadedDateLabel);
    initSingleRow(m_versionHLayout, m_versionLabel, m_loadedVersionLabel);
    initSingleRow(m_genreHLayout, m_genreLabel, m_loadedGenreLabel);
    initSingleRow(m_ISBNHLayout, m_ISBNLabel, m_loadedISBNLabel);
    initSingleRow(m_languageHLayout, m_languageLabel, m_loadedLanguageLabel);
    initSingleRow(m_pagesHLayout, m_pagesLabel, m_loadedPagesLabel);
}

void AddBookPhotoTab::initLayouts()
{
    AddTab::initLayouts();
}

void AddBookPhotoTab::initSingleRow(QBoxLayout* layout, QLabel* label, QLabel* loadedLabel)
{
    layout->addWidget(label);
    layout->addWidget(loadedLabel);
}

void AddBookPhotoTab::connecting()
{
}
