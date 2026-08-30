///DO NOT TOUCH UNLESS YOU KNOW WHAT YOU ARE DOING!

#include <iostream>
#include <string>
#include <random>
#include <filesystem>
#include <fstream>
#include <vector>
#include <chrono>
#include <string_view>
#include <thread>
#include <windows.h>

/// default
#define D "\033[0m"
/// red
#define R "\033[1;31m"
/// green
#define G "\033[1;32m"
/// yellow
#define Y "\033[1;33m"
/// blue
#define B "\033[1;34m"
/// cyan
#define C "\033[1;36m"

/// @brief sets of instructions
inline std::vector<std::string> _set_instruction_vect =
    {
        "/CLI_VERSION;", // input buffer

        "/CLI_IMPORT;",     // input buffer
        "/CLI_GENERATION;", // input buffer
        "/CLI_EXIT;",       // input buffer
        "/CLI_WRITE;",      // input buffer
        "/CLI_HELP;",
        "/CLI_GET_KERNEL;",
        "/CLI_FILE;",
        "/CLI_CLEAR;"};
inline bool _is_gen_random_integral_installed = false;
inline bool _is_file_sysOS_installed = false;
inline bool _is_sysOS_installed = false;
inline bool _is_booted = false;

/// @brief Operating Systems tools for toolings
namespace _CLI_OS_TOOLS
{
  /// @brief checking user string buffers
  /// @param txt string variables
  /// @param max_char maximum buffer
  /// @param min_char minimum buffer
  static void check_buffer_string(std::string &txt, int max_char, short int min_char) noexcept
  {
    std::cout << "checking [buffer];\n";
    if (txt.empty() || txt.length() < min_char || txt.length() > max_char)
    {
      std::cout << R << "error[buffer overflow || buffer too low || buffer null];\n"
                << D;
    }
    else
    {
      std::cout << G << "checked [buffer];\n"
                << D;
    }
  }
  /// @brief checking integral type variables
  /// @param num integer variables
  /// @param min minimum integer
  /// @param max maximum integer
  static void check_num(unsigned long long int num, unsigned long long int min, unsigned long long int max) noexcept
  {
    std::cout << G << "checking [unsigned long long integral];\n"
              << D;
    if (num < min || num > max || num == 0)
    {
      std::cout << R << "error[buffer overflow || buffer too low || buffer null];\n"
                << D;
    }
    else
    {
      std::cout << G << "checked [unsigned long long integral] successful;\n"
                << D;
    }
  }
  /// @brief Generating random ID in 64bits
  /// @param min minimum ID range
  /// @param max maximum ID range
  /// @return returning unsigned long long int of a distributed ID
  static unsigned long long int gen_random_integral(unsigned long long int min, unsigned long long int max) noexcept
  {
    if (!_is_gen_random_integral_installed)
    {
      std::cout << Y << "warning[CLI_GENSYS is not installed];\n"
                << D;
      return 0;
    }
    std::random_device _distribute_random_device;
    std::mt19937_64 _distribute_generation(_distribute_random_device());

    std::uniform_int_distribution<unsigned long long int> _distribute_ranges(min, max);
    unsigned long long int _get_distribution = _distribute_ranges(_distribute_generation);
    check_num(_get_distribution, min, max);
    return _get_distribution;
  }
  /// @brief returning user operating system type
  std::string_view return_user_kernel() noexcept
  {
#if defined(_WIN32) || defined(_WIN64)
    return "USER-OPERATING-SYS: WINDOW\n";
#elif defined(__APPLE__) || defined(__MACH__)
    return "USER-OPERATING-SYS: APPLE / MACH\n"
#elif defined(__LINUX__)
    return "USER-OPERATING-SYS: LINUX\n";
#elif defined(__FreeBSD__)
    return "USER-OPERATING-SYS: FREEBSD\n";
#else
    return "USER-OPERATING-SYS: NaN\n";
#endif
  }
  /// @brief delaying thread
  /// @param millisecond 100 = 0.1sec | 1000 = 1sec | 10000 = 10sec
  static void wait_thread(const unsigned long long int millisecond) noexcept
  {
    std::this_thread::sleep_for(std::chrono::milliseconds(millisecond));
  }
  /// @brief delaying thread with a random ID
  static void randwait_thread() noexcept
  {
    unsigned long long int get_millisec = gen_random_integral(900, 7000);
    wait_thread(get_millisec);
  }
  /// @brief stacks of updates / read-only function
  /// @param feature_bool true or false printing out features
  /// @param patch_bool true or false printing out patches
  static void stack_updates(const bool feature_bool, bool patch_bool)
  {
    std::vector<std::string> FEATURE =
        {
            "\n\nCOALVM LATEST-FEATURE[8/2026]:\n",
            "\tCOALVM alpha release, 1.0.0\n",
            "\tCOALVM-CLI Official Release in GitHub\n",
            "\t/CLI_WRITE; is added to output string only.\n",
            "\t/_EXIT; is added to exit and clear garbage inside Coalvm.\n",
            "\t/CLI_IMPORT; is added for GENERATION and FILESYSOS installations.\n.",
            "\t/CLI_VERSION; is added to track coalvmOS latest feature and latest version.\n",
            "\t/CLI_HELP; is added as a reference to coalvm-OS features.\n",
            "\t/CLI_GENERATION; is added to access towards /CLI_GENERATION.\n",
            "\t/CLI_SCAN_KERNEL; is added to output user current OS.\n",
            "\t/CLI_SEARCH_FILE; is added to search if file is exit, return boolean.\n",
            "\t/CLI_SET_FILE; is added to create an instance of a file in your computer.\n"
            "further information in /CLI_HELP.\n\n",
        };
    std::vector<std::string> PATCH =
        {
            "\n\nCOALVM LATEST-PATCH[8/2026]:\n",
            "\tRENAMED LIBRARIES (CLI_GEN && CLI_FILE)\n",
            "\tFIXED COLLISION BETWEEN NAME CONVENTIONS\n",
            "\tREWORK INTRODUCTIONS\n",
            "\tFIXED /EXIT COMMANDS\n",
            "\tFIXED CLI_FILE STRINGS\n",
            "\tFIXED PERFORMANCE STUTTERS\n",
            "\tREWORK METHODS AND LIBRARIES NAMES\n",
            "\tFIXED GARBAGE TEXT (MESSY WORDS / UNDEFINED BUFFER)\n",
            "\tFIXED OVERLAPPING SYNTAX\n",
            "\tFIXED ERRORS MESSAGE\n",
            "\tFIXED KERNELSYS\n",
            "\tFIXED /CLI_HELP\n",
            "\tFIXED WRONG COLOR PALLETE\n",
            "\tIMPROVED MESSAGES\n",
            "\tFIXED INSTANCE_FILE STRINGS\n",
            "\tFIXED PERFORMANCE ISSUE\n\n"};

    if (feature_bool == true && patch_bool == true)
    {
      patch_bool = false;
      std::cout << Y << "warning[too much boolean]" << D;
    }
    else if (feature_bool == true && !patch_bool)
    {
      for (const auto &f : FEATURE)
      {
        std::cout << G << f << D;
        wait_thread(200);
      }
    }
    else if (!feature_bool && patch_bool == true)
    {
      for (const auto &p : PATCH)
      {
        std::cout << G << p << D;
        wait_thread(200);
      }
    }
  }
  /// @brief introductions
  static void introduction() noexcept
  {
    system("cls");
    std::cout << G << "Coalvm Booting..\n"
              << D;
    _CLI_OS_TOOLS::wait_thread(414);
    std::cout << G << "MIT License (M) Coal Virtual Machine. All right reserved.\n\n"
              << D;
  }
  /// @brief print out instructions
  static void instruction_help() noexcept
  {
    const int waiting = 321;
    std::cout << G << "\n\n COMMANDS(DEFAULT):\n";
    wait_thread(waiting);
    std::cout << "\t/CLI_EXIT; --For exiting\n";
    wait_thread(waiting);
    std::cout << "\t/CLI_HELP; --Showcase prompt\n";
    wait_thread(waiting);
    std::cout << "\t/CLI_WRITE; --output strings\n";
    wait_thread(waiting);
    std::cout << "\t/CLI_IMPORT; --import built-in libraries\n";
    wait_thread(waiting);
    std::cout << "\t/CLI_GENERATION; --output random ID\n";
    wait_thread(waiting);
    std::cout << "\t/CLI_VERSION; --output versions\n\n";
    wait_thread(waiting);

    std::cout << "LIBRARIES:\n";
    wait_thread(waiting);
    std::cout << "\t/CLI_GENSYS; --generation\n";
    wait_thread(waiting);
    std::cout << "\t/CLI_KERNELSYS; --os\n";
    wait_thread(waiting);
    std::cout << "\t/CLI_FILESYS; --filesystem\n\n";
    wait_thread(waiting);

    std::cout << "\t\nFOR MORE INFORMATION, READ DOC.TXT\n\n"
              << D;
  }

  static void get_os() noexcept
  {
    std::string_view get = return_user_kernel();
    if (!_is_sysOS_installed)
    {
      get = "";
      std::cout << Y << "warning[CLI_KERNELSYS is not installed]\n"
                << D;
    }
    std::cout << get;
  }

}

/// @brief Operating Systems tools for installation
namespace _CLI_TOOLS_INSTALLER
{
  /// @brief installing generation
  static void install_gen() noexcept
  {
    if (!_is_gen_random_integral_installed)
    {
      _is_gen_random_integral_installed = true;
      std::cout << G << "generation has successfully been installed;\n"
                << D;
    }
    else
    {
      std::cout << Y << "warning[already installed];"
                << D;
    }
  }
  /// @brief installing kernelsys
  static void install_SYSOS() noexcept
  {
    if (!_is_sysOS_installed)
    {
      _is_sysOS_installed = true;
      std::cout << G << "system os has successfully been installed;\n"
                << D;
    }
    else
    {
      std::cout << Y << "warning[already installed];\n"
                << D;
    }
  }
  /// @brief installing FILESYSOS
  static void install_FILEOS(void) noexcept
  {
    if (!_is_file_sysOS_installed)
    {
      _is_file_sysOS_installed = true;
      std::cout << G << "file system os has successfully been installed;\n"
                << D;
    }
    else
    {
      std::cout << Y << "warning[already installed];\n\n"
                << D;
    }
  }
  /// @brief function installer by buffer
  /// @param _insert_buffer input buffer
  static void installer_buffer(std::string &_insert_buffer) noexcept
  {
    if (_insert_buffer == "/CLI_FILESYS;")
    {
      std::cout << G << "Installing CLI_FILESYS..\n"
                << D;
      _CLI_OS_TOOLS::wait_thread(3000);
      install_FILEOS();
    }
    else if (_insert_buffer == "/CLI_GENSYS;")
    {
      std::cout << G << "Installing CLI_GENSYS..\n"
                << D;
      _CLI_OS_TOOLS::wait_thread(3000);
      install_gen();
    }
    else if (_insert_buffer == "/CLI_KERNELSYS;")
    {
      std::cout << G << "Installing CLI_KERNELSYS..\n"
                << D;
      _CLI_OS_TOOLS::wait_thread(4000);
      install_SYSOS();
    }
    else
    {
      std::cout << Y << "warning[undefined library];\n"
                << D;
    }
  }
}

/// @brief Operating Systems tools for filesystem-based
namespace _CLI_FILE_SYSOS
{
  /// @brief instancing file
  /// @param bufferpath get input string buffer for the path
  /// @param bufferfilename get input string buffer for the filename
  /// @param bufferextension get input string buffer for the filename
  /// @param write (writing something inside the file)
  static void instance_file(std::string &bufferpath, std::string &bufferfilename, std::string bufferextension, std::string& write) noexcept
  {
    if (!_is_file_sysOS_installed)
    {
      std::cout << Y << "warning[CLI_FILESYS is not installed];\n"
                << D;
      return;
    }
    const std::filesystem::path _sourcing_file = bufferpath + "\\" + bufferfilename + "." + bufferextension;
    std::fstream _sourcing_set_file(_sourcing_file, std::ios::out);

    if (_sourcing_set_file.is_open())
    {
      if (write.empty())
      {
        write = "HELLO FROM COALVM!\n";
      }
      _sourcing_set_file << write << "\n";
      _sourcing_set_file.close();
      std::cout << G << "FILE HAVE BEEN CREATED!\n"
                << D;
    }
  }
  /// @brief searching file
  /// @param bufferpath user path
  static void search_file(std::string &bufferpath) noexcept
  {
    if (!_is_file_sysOS_installed)
    {
      std::cout << Y << "warning[CLI_FILESYS is not installed];\n"
                << D;
      return;
    }
    if (std::filesystem::exists(bufferpath) == true)
    {
      std::cout << G << bufferpath << "File do exist!" <<D;
    }
  }
}

namespace _COMMAND_PROMPT_PROCESSOR
{
  inline void core_procesor() 
  {
    /// INTRODUCTION
    _CLI_OS_TOOLS::introduction();
    /// PROMPT-MESSAGE
    std::string _SET_PROMPT = "COALVM-PROMPT >>";
    /// core buffer
    std::string _SET_INSTRUCTION;

    /// includes buffer
    std::string _SET_INCLUDE;

    /// write buffer
    std::string _SET_STRING;

    /// filesys buffer
    std::string _SET_FILEMETHOD;

    #define MAX_CHAR 2000
    #define MIN_CHAR 1

    _is_booted = true;
    while (_is_booted)
    {
      std::cout << "\n"
                << _SET_PROMPT;
      if (!std::getline(std::cin, _SET_INSTRUCTION))
      {
        break;
      }
      else if (_SET_INSTRUCTION.empty() || _SET_INSTRUCTION.length() < MIN_CHAR) [[unlikely]]
      {
        std::cout <<Y << "warning[empty buffer];\n" <<D;
        continue;
      }
      else if (_SET_INSTRUCTION == _set_instruction_vect.at(0))
      {
        _CLI_OS_TOOLS::stack_updates(true, false);
        _CLI_OS_TOOLS::stack_updates(false, true);
        continue;
      }else if (_SET_INSTRUCTION == _set_instruction_vect.at(1))
      {
        std::cout << G << "\n\n"
                  << _SET_PROMPT << "/CLI_IMPORT >>" << D;
        std::getline(std::cin, _SET_INCLUDE);
        if (_SET_INCLUDE == "/CLI_GENSYS;")
        {
          _CLI_TOOLS_INSTALLER::installer_buffer(_SET_INCLUDE);
        }
        else if (_SET_INCLUDE == "/CLI_FILESYS;")
        {
          _CLI_TOOLS_INSTALLER::installer_buffer(_SET_INCLUDE);
          continue;
        }
        else if (_SET_INCLUDE == "/CLI_KERNELSYS;")
        {
          _CLI_TOOLS_INSTALLER::installer_buffer(_SET_INCLUDE);
          continue;
        }
      }
      else if (_SET_INSTRUCTION == _set_instruction_vect.at(2))
      {
        const unsigned long long int in_returned = _CLI_OS_TOOLS::gen_random_integral(0, 99999999999ull);
        std::cout << G << "\n\n YOUR GENERATED ID IS: " << in_returned << D;
        continue;
      }
      else if (_SET_INSTRUCTION == _set_instruction_vect.at(3))
      {
        std::cout << G << "\n\n"
                  << "USER EXITING PROGRAM.." << D;
        _CLI_OS_TOOLS::wait_thread(3000);
        break;
      }
      else if (_SET_INSTRUCTION == _set_instruction_vect.at(4))
      {
        std::cout << G << "\n"
                  << _SET_PROMPT << "/CLI_WRITE >>" << D;
        std::getline(std::cin, _SET_STRING);
        _CLI_OS_TOOLS::wait_thread(200);
        std::cout << G << _SET_STRING << D << "\n";
        continue;
      }
      else if (_SET_INSTRUCTION == _set_instruction_vect.at(5))
      {
        _CLI_OS_TOOLS::wait_thread(2000);
        _CLI_OS_TOOLS::instruction_help();
        continue;
      }
      else if (_SET_INSTRUCTION == _set_instruction_vect.at(6))
      {
        _CLI_OS_TOOLS::wait_thread(900);
        _CLI_OS_TOOLS::get_os();
        continue;
      }
      else if (_SET_INSTRUCTION == _set_instruction_vect.at(7))
      {
        if (!_is_file_sysOS_installed)
        {
          std::cout << Y << "warning[CLI_FILESYS is not installed];\n"
                    << D;
          continue;
        }
        std::cout << _SET_PROMPT << "/CLI_FILE >>";
        std::getline(std::cin, _SET_FILEMETHOD);
        if (_SET_FILEMETHOD == "/CLI_SEARCH_FILE;")
        {
          std::cout << _SET_PROMPT << "/CLI_FILE >>" << _SET_FILEMETHOD << ">>";
          std::string _path;
          std::getline(std::cin, _path);
          _CLI_FILE_SYSOS::search_file(_path);
        }
        else if (_SET_FILEMETHOD == "/CLI_SET_FILE;")
        {
          std::string filename;
          std::string filepath;
          std::string extension;
          std::string write;
          std::cout << _SET_PROMPT << "/CLI_FILE >>" << _SET_FILEMETHOD << "(name*)" << ">>";

          std::getline(std::cin, filename);
          if (filename.empty())
          {
            std::cout << Y << "Buffer is empty;\n"
                      << D;
            continue;
          }

          std::cout << "\n"
                    << _SET_PROMPT << "/CLI_FILE >>" << _SET_FILEMETHOD << "(path*)" << ">>";
          std::getline(std::cin, filepath);
          if (filepath.empty())
          {
            std::cout << Y << "Buffer is empty;\n"
                      << D;
            continue;
          }

          std::cout << "\n"
                    << _SET_PROMPT << "/CLI_FILE >>" << _SET_FILEMETHOD << "(extension*)" << ">>";
          std::getline(std::cin, extension);
          if (extension.empty() || extension != "txt")
          {
            std::cout << Y << "Buffer is empty or use unsupported extension (use txt);\n"
                      << D;
            continue;
          }
          std::cout << "\n"
                    << _SET_PROMPT << "/CLI_FILE >>" << _SET_FILEMETHOD << "(write(optional)*)" << ">>";
          std::getline(std::cin, write);
          _CLI_FILE_SYSOS::instance_file(filepath, filename, extension, write);
        }
      }
      else if (_SET_INSTRUCTION == _set_instruction_vect.at(8))
      {
        std::cout << G << "clearing leftovers..\n"
                  << D;
        _CLI_OS_TOOLS::wait_thread(2000);
        std::cout << "\033[2J\033[1;1H";
        continue;
      }else if(_SET_INSTRUCTION.length() > MAX_CHAR)
      {
        std::cout << Y << "warning[max buffer]" << D;
        continue;
      }
      else
      {
        std::cout << Y << "warning[undefined buffer];\n"
                  << D;
        continue;
      }
    }
  }
}

int main(void)
{
  _COMMAND_PROMPT_PROCESSOR::core_procesor();
  return 0;
}
