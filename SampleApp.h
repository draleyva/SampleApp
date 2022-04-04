#pragma once

#include <iostream>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <string>
#include <atomic>
#include <vector>
#include <map>
#include <iterator>
#include <unordered_map>

using namespace std;

#ifdef EXTENDED

#include <CoreServices/CoreDefinition.h>
#include <CoreServices/ToolHeader.h>
#include <CoreServices/Tool.h>
#include <ace/OS_NS_unistd.h>
#include <ace/OS_NS_Thread.h>
#include <ace/ARGV.h>
#include <ace/Get_Opt.h>
#include <ace/OS_main.h>
#include <ace/Service_Config.h>
#include <ace/Thread_Manager.h>
#include <ace/Signal.h>
#include <fmt/core.h>
#include <fmt/color.h>
#include <AppObjects/App.h>
#include <boost/chrono.hpp>
#include <boost/filesystem.hpp>

#if defined(_WIN32) || defined(_WIN64)
#pragma comment (lib, "ACE")
#pragma comment (lib, "CoreServices")
#pragma comment (lib, "fmt")
#endif

#endif
