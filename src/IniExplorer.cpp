#include "IniExplorer.h"

IniExplorer::IniExplorer()
  : mWindow(std::make_shared<IniExplorerWindow>(nullptr)) {
}

bool IniExplorer::init(MOBase::IOrganizer *organizer) {
  mOrganizer = organizer;
  return true;
}

void IniExplorer::display() const {
  mWindow->show();
}
