# COALVM-CLI, OFFICIAL RELEASE 1.3.2
Coalvm is a custom-made interpreted command-line interface built inside C++ specifically to abstract heavy concepts, disclaimer that this repo is under MIT LICENSE and we're not responsible for any internal or system damage.
Coalvm is currently under heavy development and was in a very rough / alpha states and constants updates. Expect some bugs lurking in the corner of binaries.

## COALVM-CLI Commands

COALVM-CLI has a variations of commands that determines how you use it by interacting with your computer available systems, COALVM-CLI currently only supports Windows Kernel and we don't recommend you to use any operating
systems except Windows because it can potentially hurt the source file. Every commands were extremely abstracted under the hood while you're in overall control.
## COALVM-CLI Default Commands

### /CLI_HELP; || /CLI; || /CLI_; || /?;
/CLI_HELP allows user to display a lists of available commands and instructions how to use it, this is incredibly helpful for references.
### /CLI_EXIT;
/CLI_EXIT allows user to exit program safely.
### /CLI_WRITE;
/CLI_WRITE allows user to print out a string only.
### /CLI_IMPORT;
/CLI_IMPORT allows user to import a built-in library into scope.
### /CLI_VERSION;
/CLI_VERSION allows user to display patches and features added in COALVM-CLI.
### /CLI_CLEAR;
/CLI_CLEAR allows user to clear the interface texts.

## COALVM-CLI KERNELSYS Commands
### /CLI_GET_KERNEL
/CLI_GET_KERNEL allows user to display user current OS/KERNELS, requires /CLI_KERNELSYS library in order to detect an OS.
## COALVM-CLI FILESYS Commands
### /CLI_SET_FILE;
/CLI_SET_FILE allows user to create a file, requires /CLI_FILESYS library in order to create a file.
### /CLI_SEARCH_FILE;
/CLI_SEARCH_FILE allows user to search for a file, requires /CLI_FILESYS in order to scan for a file.
## COALVM-CLI GENSYS Commands
### /CLI_GENERATION
/CLI_GENERATION allows user to create a randomized ID.
### /CLI_GENERATION64
Alternative version of /CLI_GENERATION with larger number set.
## COALVM-CLI ANSISYS Commands
### /CLI_WRITE_ANSI;
Allows user to display text with color sequences
### /CLI_COLOR_SEQUENCE
Display instructions of color sequences.


Thank you for supporting our hardwork! ~ Coal-84x
