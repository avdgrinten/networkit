Get Started
===========

Take a look at Installation\_ or Build NetworKit from Source\_ in order
to install NetworKit as a Python3 package or directly build it from
source.

In case you would like to test networkit without any installation or are
on Windows 8 and below, we recommend the download of our preconfigured
Virtual Machine\_.

With NetworKit as a Python extension module, you get access to native
high-performance code and can at the same time work interactively in the
Python ecosystem. Although the standard Python interpreter works fine,
we recommend [IPython](http://ipython.readthedocs.org/en/stable/) as a
great environment for scientific workflows. View the
IPython Quickstart Guide\_ for installation instructions and how to use
NetworKit with IPython.

Once you have installed NetworKit, please make sure to check out our
[NetworKit
UserGuide](http://nbviewer.ipython.org/urls/networkit.iti.kit.edu/uploads/docs/NetworKit_UserGuide.ipynb)
for an overview of the features provided in NetworKit.

|separator|

Installation
------------

### Requirements

You will need the following software to install NetworKit as a python
package:

-   A modern C++ compiler, e.g.: [g++](https://gcc.gnu.org) (&gt;= 4.8)
    or [clang++](http://clang.llvm.org) (&gt;= 3.7)
-   Python 3 (&gt;= 3.4 is recommended, 3.3 supported)
-   [pip3](https://pypi.python.org/pypi/pip)
-   [tkinter](https://docs.python.org/3/library/tkinter.html) (e.g. sudo
    apt-get install python3-tk on Ubuntu)

### Linux

Make sure Python3 and pip3, the python package manager, are installed on
your system. You'll need the tkinter dependency for python3. Afterwards,
pip3 can be used to install networkit.

``` {.sourceCode .bash}
# On Ubuntu or equivalent, python3 is pre-installed.

# Install pip3 (if needed) and tkinter dependency
sudo apt-get install python3-pip python3-tk

# Install networkit
pip3 install networkit
```

### macOS

Use Homebrew to install Python3 if you haven't done so before.
Afterwards, pip3 can be used to install networkit.

``` {.sourceCode .bash}
# Install Homebrew (if needed)
ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"

# Install python3 and pip3 with Homebrew (if needed)
brew install python3

# Install networkit
pip3 install networkit
```

### Windows

#### Windows 10

With the introduction of Windows 10, Microsoft offers native support for
Linux binaries through a compatibility layer called [Linux Subsystem for
Windows](https://docs.microsoft.com/en-us/windows/wsl/about). Please see
the [installation
instructions](https://docs.microsoft.com/en-us/windows/wsl/install-win10)
on how to install the Linux Subsystem on your machine.

The Linux Subsystem is fully compatible with NetworKit. After a
successful installation, simply **open a new command line** and start a
new bash shell.

``` {.sourceCode .bash}
bash
```

The remainder of the installation is similar to the installation process
on Linux except for the addition of the python3-dev package.

``` {.sourceCode .bash}
# Install pip3, tkinter & dev dependencies
sudo apt-get install python3-pip python3-tk python3-dev

# Install networkit
pip3 install networkit
```

#### Windows 8 and below

There is currently no official support for Windows 8 and below. We
recommend the use of our virtual machine which comes pre-installed with
NetworKit and useful tools. See Virtual Machine\_ for more details.

### Virtual Machine

The virtual machine is based on Ubuntu 16.04 and comes pre-installed
with NetworKit and other useful tools. Take a look at our [installation
guide](https://networkit.iti.kit.edu/networkit-vm_guide.html) for
further instructions on installing the virtual machine on your system.

It can be downloaded
[here](https://networkit.iti.kit.edu/uploads/networkit-vm.zip).

|separator|

Build NetworKit from Source
---------------------------

You can clone NetworKit from
[GitHub](https://github.com/kit-parco/networkit) with git or download
the source code as a [zip
file](https://github.com/kit-parco/networkit/archive/master.zip).

### Requirements

You will need the following software to build NetworKit as a Python
package from source:

-   A modern C++ compiler, e.g.: [g++](https://gcc.gnu.org) (&gt;= 4.8)
    or [clang++](http://clang.llvm.org) (&gt;= 3.7)
-   [SCons](http://scons.org): Please note that SCons is only available
    for Python 2. For the different build targets, SCons is mandatory.
-   [Cython](http://cython.org/) (&gt;= 0.21): Only needed
    by developers.
-   [Google Test](https://github.com/google/googletest) (only needed if
    you want to build the unit tests, which is recommended)

### Build the Python Package

This section describes how to build NetworKit including the Python
functionality. If you do not wish to install NetworKit as a Python
package, please refer to Build the C++ Backend\_.

For building NetworKit including the Python functionality, make sure to
also install the software from the Installation Requirements\_.

After all requirements are installed, switch to the top folder of
NetworKit and run the script *setup.py* with the following options:

``` {.sourceCode .bash}
python3 setup.py build_ext --inplace [--optimize=V] [-jX]
```

The script will call SCons to compile NetworKit as a library and then
build the extensions in the folder *src/python*. By default, NetworKit
will be built with the amount of available cores in optimized mode. It
is possible to add the options `--optimize=V`{.sourceCode} and
`-jN`{.sourceCode} the same way it can be done to a manual SCons call,
to specify the optimization level and the number of threads used for
compilation. The setup script provides more functionality and can be
used with pip aswell:

``` {.sourceCode .bash}
pip3 install -e ./
```

will compile NetworKit, build the extensions and on top of that
temporarily install NetworKit so that it is available on the whole
system. This can be undone by calling
`pip3 uninstall networkit`{.sourceCode}.

``` {.sourceCode .bash}
python3 setup.py clean [--optimize=V]
```

will remove the extensions and its build folder as well as call SCons to
remove the NetworKit library and its build folder specified by
`--optimize=V`{.sourceCode}.

Note: All of the above installation command may require root privileges
depending on your system, so try this accordingly. If you do not have
root privileges, add `--user`{.sourceCode} to your command.

### Build the C++ Backend

In case you do not need NetworKit's Python functionality, this section
describes how to build the C++ parts only.

We recommend SCons for building the C++ part of NetworKit. Individual
settings for your environment will be read from a configuration file. As
an example, the file *build.conf.example* is provided. Copy this to
*build.conf* and edit your environment settings. Then call Scons.

The call to SCons has the following options:

``` {.sourceCode .bash}
scons --optimize=<level> --target=<target>
```

where `<level>`{.sourceCode} can be

-   `Dbg`{.sourceCode} debug
-   `Opt`{.sourceCode} optimized
-   `Pro`{.sourceCode} profiling

and `target`{.sourceCode} can be

-   `Core`{.sourceCode} build NetworKit as a library, required for the
    Python extension through Cython.
-   `Tests`{.sourceCode} build executable for the unit tests
    (requires GoogleTest).
-   `Lib`{.sourceCode} build NetworKit as a (static) library and create
    symbolic links.
-   `SharedLib`{.sourceCode} build NetworKit as a shared library and
    create symbolic links.

For example, to build NetworKit as an optimized (static) library, run

``` {.sourceCode .bash}
scons --optimize=Opt --target=Lib
```

To speed up the compilation on a multicore machine, you can append
`-jX`{.sourceCode} where *X* denotes the number of threads to compile
with.

Logging is enabled by default. If you want to disable logging
functionality, add the following to your scons call:

``` {.sourceCode .bash}
--logging=no
```

### Building NetworKit as a Library

It is also possible to use NetworKit as a library. Therefore, choose the
target Lib or SharedLib when compiling NetworKit. The include directives
in your C++-application look like the following

``` {.sourceCode .C}
#include <NetworKit/graph/Graph.h>
```

NetworKit in the directory include is a symlink to the directory
networkit/cpp, so the directory structure from the repository is valid.
To compile your application, you need to add the paths for the header
files and the location of the library. Note, that it is possible to link
the different builds (debug, profiling, optimized) of the library. There
is a simple source file to demonstrate this. Feel free to compile
LibDemo.cpp as follows:

``` {.sourceCode .bash}
g++ -o LibDemo -std=c++11 -I/path/to/repo/include -L/path/to/repo LibDemo.cpp -lNetworKit -fopenmp
```

|separator|

Tests
-----

You actually do not need to build and run our unit tests. However, if
you experience any issues with NetworKit, you might want to check, if
NetworKit runs properly. Please refer to the [Unit Tests and
Testing](https://networkit.iti.kit.edu/api/DevGuide.html#devguide-unittests)
section in our [NetworKit Development
Guide](https://networkit.iti.kit.edu/api/DevGuide.html#devGuide).

|separator|

Use NetworKit with IPython
--------------------------

First make sure you have installed IPython, e.g. via pip:
`pip3 install ipython`{.sourceCode}.

### IPython Terminal

If you want to use NetworKit in the IPython terminal, type the following
commands in your OS terminal:

``` {.sourceCode .bash}
ipython3
```

``` {.sourceCode .python}
from networkit import *
```

The first line opens the IPython terminal. The second line imports the
*networkit* Python module. After that, you should be able to use
NetworKit interactively. For usage examples, refer to the [NetworKit
UserGuide](http://nbviewer.ipython.org/urls/networkit.iti.kit.edu/uploads/docs/NetworKit_UserGuide.ipynb).

### IPython Notebook/Jupyter

Additionally, we recommend that you familiarize yourself with NetworKit
through experimenting with the interactive IPython Notebook
NetworKit\_UserGuide.ipynb located in the folder Doc/Notebooks. The user
guide also introduces a large portion of NetworKits functionality with
usage examples. To display and work with these notebooks, you have to
install jupyter and start a local notebook server from the terminal
with:

``` {.sourceCode .bash}
jupyter/ipython3 notebook
```

If you run into any problems with jupyter, head over to the [jupyter
documentation](http://jupyter.readthedocs.io/en/latest/install.html). If
the notebook server starts as it is supposed to, your default browser
should open a web interface or you have to open it manually. Then you
can add NetworKit\_UserGuide.ipynb from the above mentioned location or
browse to the location through the web interface.

To show plots within the notebooks, place the following two lines at the
beginning of your notebook:

``` {.sourceCode .python}
%matplotlib inline
matplotlib.pyplot as plt
```

**Note:** Instead of running jupyter, it may still be possible to run
`ipython3 notebook`{.sourceCode}. However, the notebook functionality of
the ipython package is deprecated and has been moved to jupyter, which
we strongly recommend.

NetworKit Usage Example
-----------------------

Now that you are done installing NetworKit, you might want to try the
following example:

``` {.sourceCode .python}
>>> from networkit import *
>>> g = generators.HyperbolicGenerator(1e5).generate()
>>> overview(g)
Network Properties for:     G#5
nodes, edges            100000, 300036
directed?           False
weighted?           False
isolated nodes          1815
self-loops          0
density             0.000060
clustering coefficient      0.720003
min/max/avg degree      0, 1174, 6.000720
degree assortativity        0.001383
number of connected components  4026
size of largest component   78387 (78.39 %)

>>> communities = community.detectCommunities(g, inspect=True)
PLM(balanced,pc,turbo) detected communities in 0.14902853965759277 [s]
solution properties:
-------------------  -----------
# communities        4253
min community size      1
max community size   1821
avg. community size    23.5128
modularity              0.987991
-------------------  -----------

>>>
```

|separator|

Known Issues
------------

-   Mac OS X 10.10 "Yosemite": Some users have reported compilation
    problems on Yosemite with g++ 4.9. The compiler errors mention
    register problems. While the exact reason remains unclear, the
    actual issue seems to be that the compiler tries to perform a dual
    architecture build. Fix: Enforce a 64-bit build by prepending
    `ARCHFLAGS="-arch x86_64"`{.sourceCode} to your setup/pip
    command, e.g. as in
    `sudo ARCHFLAGS="-arch x86_64" python3 setup.py build_ext --inplace -j4`{.sourceCode}
    or
    `sudo ARCHFLAGS="-arch x86_64" pip3 install networkit`{.sourceCode}.
-   NetworKit has not yet been successfully built on **Windows 8 and
    below** in a reproducible way. This is partially due to the fact
    that Windows ships without a C++ compiler which is necessary to
    build the Python extensions. Even with the Visual C++
    Redistributable our attempts were not successful. Any help
    is appreciated. It may be possible to build NetworKit as a library
    on Windows in environments like MinGW or Cygwin.
-   Some algorithms (e.g. StronglyConnectedComponents) are implemented
    in a recursive manner and for large input may exceed the default
    stack size on your platform. To work around this issue, you can lift
    the stack size limit for your terminal process and subsequent child
    processes with `ulimit -s unlimited`{.sourceCode} or
    `ulimit -Hs`{.sourceCode} (to the hard limit if there is one). It is
    also possible to change resource limits from Python directly with
    `import resource; resource.setrlimit(resource.RLIMIT_STACK, (-1, -1))`{.sourceCode}.
-   On macOS, it can happen that the g++ compiler is unable to locate
    specific Linux-based header files. An example would be an error
    during the compilation of a C++ header which includes
    `stdint`{.sourceCode}. This can generate the following error
    message:
    `fatal error: sys/_types/_int8_t.h: No such file or directory`{.sourceCode}.
    This error will most likely happen on new systems or after a major
    system upgrade. In this case you need to (again) install the Xcode
    command line tools: `xcode-select --install`{.sourceCode}.
    Afterwards the code should compile completely.

|separator|

Contributions
-------------

We would like to encourage contributions to the NetworKit source code.
See the [NetworKit Development
Guide](https://networkit.iti.kit.edu/api/DevGuide.html#devGuide) for
instructions. For support please contact the [mailing
list](https://lists.uni-koeln.de/mailman/listinfo/networkit).
