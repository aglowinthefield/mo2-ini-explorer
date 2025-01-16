#ifndef INIEXPLORERWINDOW_H
#define INIEXPLORERWINDOW_H

#include <QDialog>
#include <QHBoxLayout>
#include <QTreeView>
#include <QWidget>

class IniExplorerWindow final : public QDialog {
  Q_OBJECT

public:
  explicit IniExplorerWindow(QWidget *parent = nullptr);

private:
  QTreeView   *mTreeView;
  QWidget     *mRightWidget;
  QPushButton *mCloseButton;
};


#endif //INIEXPLORERWINDOW_H
