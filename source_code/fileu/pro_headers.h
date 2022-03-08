#ifndef PRO_HEADERS_H
#define PRO_HEADERS_H

#include <regex>
#include <boost/nowide/args.hpp>
#include <boost/algorithm/string.hpp>
#include <extcpp/error>
#include <extcpp/numbers>
#include <extcpp/os>
#include <extcpp/ui>
#include <extcpp/ipcx>
#include <extcpp/crypto>
#include <extcpp/json>
#include <extcpp/fs>
#include <extcpp/file_mapping>
#include <extcpp/mutex>
#include <extcpp/net>
#include <doom/privilege>
#include <doom/custom>
#include <doom/ipdb>
#include <doom/startup>
#include "../common/pro_error.h"
#include "../common/pro_protocol.h"
#include "../common/pro_uri.h"
#include "../common/pro_functions.h"

namespace pro
{
using namespace std::chrono_literals;
using namespace std::placeholders;


#ifdef EXT_OS_WINDOWS
constexpr std::string_view Config_File_Name = "fileu_win32.conf";
#elif EXT_OS_MAC
constexpr std::string_view Config_File_Name = "fileu_mac.conf";
#else
constexpr std::string_view Config_File_Name = "fileu_linux.conf";
#endif


}
#endif