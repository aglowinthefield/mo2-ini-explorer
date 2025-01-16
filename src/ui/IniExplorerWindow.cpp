
#include "IniExplorerWindow.h"

#include <QPushButton>

IniExplorerWindow::IniExplorerWindow(QWidget *parent) : QDialog(parent) {
  mTreeView    = new QTreeView(this);
  mRightWidget = new QWidget(this);
  mCloseButton = new QPushButton("Close", this);

  QVBoxLayout *mainLayout = new QVBoxLayout(this);
  QHBoxLayout *contentLayout = new QHBoxLayout();

  contentLayout->addWidget(mTreeView, 1);
  contentLayout->addWidget(mRightWidget, 2);

  mainLayout->addLayout(contentLayout);
  mainLayout->addWidget(mCloseButton, 0, Qt::AlignRight);

  setLayout(mainLayout);

  connect(mCloseButton, &QPushButton::clicked, this, &QDialog::accept);
}
