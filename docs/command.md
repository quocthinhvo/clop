# INTRO

This documents use for developer, publisher, basic users.

As you know, CLOP is a command line system - all task work in terminal/console. 

If in GUI application, you click menu/button to run feature. But in TUI (Terminal UI) you run features via params (or arguments). 

```Arguments``` is know as keywords that split by *space* and set name with increase number.

For example, if I type 

```
clop install quocthinhvo/packa
```

CLOP will get argument 1 is ```install``` and ```quocthinhvo/packa``` is argument 2.

For simple, CLOP have ***maximum 3 arguments***.
# BODY

***NOTE: Body of document will complete in develop. We will update soon.***

Char ```$abc``` is know as varible abc.

## Get infomation packages

### Call
```
clop info $publisher/$package_name
```

### Output

This command will show all information of packages.

Such as: name, publisher, date update, lastest version, short intro, number install or download,...

### Dev in source
Module: ```info.hpp```

## Show infomation publisher

### Call
```
clop user $publisher
```

### Output

This command will show all information of pubisher.

Such as: name, email, some packages, github url,...

### Dev in source
Module: ```userinfo.hpp```

## List all packages of publisher

### Call
```
clop list-user $publisher
```

### Output

Show all packages of this publisher

Reponse as table: id, name, desciption, total downloads,...

### Dev in source
Module: ```listuser.hpp```

## List all release of packages

### Call
```
clop release $publisher/$package_name
```

### Output

This command will show all version release of this package.

Reponse as table include: tag name, date update,...

### Dev in source
Module: ```release_ver.hpp```

## Install packages and full setup

### Call
```
clop install $publisher/$package_name
```

### Output

Download lastest package and auto run setup script.

### Dev in source
Module: ```install.hpp```

## Install packages (full setup) with list

### Call
```
clop install_list $filename.txt
```

### Note
filename.txt follow struct INI file. Key is ```[PACKAGES]```

Read [here](https://en.wikipedia.org/wiki/INI_file) if you want more about INI config file.

### Output

Download lastest packages in list.exe and auto run setup script.

### Dev in source
Module: ```instal_list.hpp```

## Install packages (full setup) with custom version

### Call
```
clop install-ver $publisher/$package_name $tag_ver
```

### Output

Same as install but in custom version.

### Dev in source
Module: ```install_ver.hpp```

## Download packages without install

### Call
```
clop download $publisher/$package_name
```

### Output

Just download packages lastest version and save in current directory.

### Dev in source

Module: ```download_package.hpp```

## Download packages with custom version (without setup)

### Call
```
clop download-ver $publisher/$package_name $tag_version
```

### Output

Just download packages custom version and save in current directory.

### Dev in source

Module: ```download_package_ver.hpp```


## Update packages

### Call
```
clop update $publisher/$package_name
```

### Output

Check update and reinstall if found.

### Dev in source

Module: ```update.hpp```


## Remove packages

### Call
```
clop remove $publisher/$package_name
```

### Output

Remove packages from local computer.

### Dev in source
Module: ```remove.hpp```

## Clear all config at local

### Call
```
clop reset
```

### Output

Reset all config

### Dev in source
Module: ```reset_config.hpp```
## Report publisher

### Call
```
clop report $publisher
```

### Output

Report publisher to admin.

### Dev in source
Module: ```report_publisher.hpp```

## Report packages

### Call
```
clop report-package $publisher/$package_name
```

### Output

Report packages to admin.

### Dev in source
Module: ```report-package.hpp```

## Help command

### Call
```
clop help
```

### Output

Just give all command can use.

### Dev in source
Module: ```help.hpp```
## Show logs file

### Call
```
clop logs
```

### Output

Show all local logs.

### Dev in source
Module: ```read_local_logs.hpp```
## Show version

### Call
```
clop version
```

### Output

Simple is show version of ```CLOP```.

### Dev in source
Module: ```clop.hpp``` as ```#define version = ""```.


# SUMMARY

This document will give power for you to know all CLOP and begin publisher/user/developer.