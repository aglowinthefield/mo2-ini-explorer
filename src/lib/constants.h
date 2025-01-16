#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <string>

namespace IniExplorerConstants {
  constexpr auto PLUGIN_NAME = "INI Explorer";
  constexpr auto PLUGIN_AUTHOR = "clearing";
  constexpr auto PLUGIN_DESCRIPTION = "View and resolve INI file conflicts across your entire load order.";

  inline auto PLUGIN_VERSION = MOBase::VersionInfo(1, 0, 0, MOBase::VersionInfo::RELEASE_FINAL);
}

#endif //CONSTANTS_H
