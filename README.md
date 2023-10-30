# datastructs
Implementations of classic data structures in C for CS580U.

<!-- MarkdownTOC -->

- [Team Members](#team-members)
- [Prerequisites](#prerequisites)
- [Build](#build)
- [Usage](#usage)

<!-- /MarkdownTOC -->

<a id="team-members"></a>
## Team Members

| Team Member | Email | B-Number |
|-------------|-------|----------|
| 1.          |       |          |
| 2.          |       |          |
| 3.          |       |          |

<a id="prerequisites"></a>
## Prerequisites

- [GNU C Library (glibc)](https://www.gnu.org/software/libc/)
- [CUnit](https://cunit.sourceforge.net/)

Note that all prerequisites have already been installed on Remote.

- To install on a Debian-like Linux, run `apt update && apt install libcunit1-dev`.
- To install on a Fedora-like Linux, run `yum install CUnit-devel`
- To install on MacOS, install [Homebrew](https://brew.sh/), then run `brew install cunit`

<a id="build"></a>
## Build

- To build the project, run `make all` from the top directory.
- To clean the project, run `make clean` from the top directory.

<a id="usage"></a>
## Usage

Each subdirectory has a CUnit test contained in its **test.c**.

- To run these checks for the entire project, run `make check` from the top directory.
- To run the check for one data structure, navigate to its subdirectory and run `make check`.