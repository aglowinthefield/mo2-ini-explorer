#ifndef INIEXPLORER_H
#define INIEXPLORER_H

#include <iplugintool.h>
#include <QString>
#include "lib/constants.h"
#include "ui/IniExplorerWindow.h"


class IniExplorer final :public MOBase::IPluginTool
{
  Q_OBJECT
  Q_INTERFACES(MOBase::IPlugin MOBase::IPluginTool)

  #if QT_VERSION >= QT_VERSION_CHECK(5, 0, 0)
    Q_PLUGIN_METADATA(IID "io.clearing.IniExplorer" FILE "iniexplorer.json")
  #endif


public:
  IniExplorer();
  bool init(MOBase::IOrganizer *organizer) override;

  QString name() const override { return IniExplorerConstants::PLUGIN_NAME; };

  QString author() const override { return IniExplorerConstants::PLUGIN_AUTHOR; };

  QString description() const override { return IniExplorerConstants::PLUGIN_DESCRIPTION; };

  MOBase::VersionInfo version() const override { return IniExplorerConstants::PLUGIN_VERSION; };

  QList<MOBase::PluginSetting> settings() const override { return {}; };

  QString displayName() const override { return IniExplorerConstants::PLUGIN_NAME;};

  QString tooltip() const override { return IniExplorerConstants::PLUGIN_DESCRIPTION; };

  QIcon icon() const override { return QIcon(); };

  void display() const override;

private:
  MOBase::IOrganizer* mOrganizer{nullptr};
  std::shared_ptr<IniExplorerWindow> mWindow;
};



#endif //INIEXPLORER_H
