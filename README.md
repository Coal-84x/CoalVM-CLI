MIT-LIENCE (M) Coalvm-CLI. All Rights Reserved.

# COALVM-CLI, LATEST RELEASE 1.7.0 (NO LONGER USABLE)

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
### *cli
*cli allows user to scope the current pointer variable value, for example ->

<img width="782" height="476" alt="image" src="https://github.com/user-attachments/assets/1d5833c0-4585-4f3e-acd5-24c6c3edb7b0" />


## COALVM-CLI KERNELSYS Commands
### /CLI_GET_KERNEL;
/CLI_GET_KERNEL allows user to display user current OS/KERNELS, requires /CLI_KERNELSYS library in order to detect an OS.
### /CLI_ALLOC;
/CLI_STORE_VALUE allows user to store a value inside a built-in variable, requires /CLI_KERNELSYS library in order to detect an OS.
### /CLI_POINT_TOWARDS_VALUE;
/CLI_POINT_TO_VALUE allows user to display the variable value of the pointer points to but dereferencing the pointer.
### /CLI_POINT_TOWARDS_ADDRESS;
/CLI_POINT_TO_ADDRESS allows user to to display the address of the variable by pointing the pointer into the address
### /CLI_SET_TO_NULLPTR;
/CLI_SET_TO_NULLPTR allows user to clean the NULLPTR (very important if you want to re-assign the pointer variable values)
## COALVM-CLI FILESYS Commands
### /CLI_SET_FILE;
/CLI_SET_FILE allows user to create a file, requires /CLI_FILESYS library in order to create a file.
### /CLI_SEARCH_FILE;
/CLI_SEARCH_FILE allows user to search for a file, requires /CLI_FILESYS in order to scan for a file.
## COALVM-CLI GENSYS Commands
### /CLI_GENERATION;
/CLI_GENERATION allows user to create a randomized ID.
### /CLI_GENERATION64;
Alternative version of /CLI_GENERATION with larger number set.
## COALVM-CLI ANSISYS Commands
### /CLI_WRITE_ANSI;
Allows user to display text with color sequences
### /CLI_COLOR_SEQUENCE;
Display instructions of color sequences.


# NO LONGER USABLE, USE CVM++

Thank you for supporting our hardwork! ~ Coal-84x
