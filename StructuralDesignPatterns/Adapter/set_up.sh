#!/bin/sh

# Get the path from which the file is executed
DIR="$(dirname "$(readlink -f "$0")")"

DIR_CONFIG_RELEASE="$DIR/config_files/release"
DIR_CONFIG_DEBUG="$DIR/config_files/debug"
DIR_RELEASE="$DIR/release"
DIR_DEBUG="$DIR/debug"

program_option='h'

cd $DIR

# Check if an argument is passed
if [ $# = 1 ];
then
    if [ "$1" = "release" ]; then
        program_option="$1"
    elif [ "$1" = "debug" ]; then
        program_option="$1"
    elif [ "$1" = "help" -o "$1" = "h" ]; then
        program_option="$1"
    else
        echo "Invalid option!\n"
    fi
fi

if [ "$program_option" = "help" -o "$program_option" = "h" ]; then
  echo "Usage"
  echo "        ./set_up.sh [options]"
  echo "Options"
  echo "   help, h           = Show the help of the program."
  echo "   relase            = Configure the project for release."
  echo "   debug             = Configure the project for debugging."
fi


if [ "$program_option" = "release" ];
then
    if [ ! -d "$DIR_RELEASE" ];
    then
        mkdir $DIR_RELEASE
    fi
    conan install $DIR_CONFIG_RELEASE --output-folder $DIR_RELEASE/cmake-build --build=missing
    cmake -S $DIR_CONFIG_RELEASE -B $DIR_RELEASE -DCMAKE_TOOLCHAIN_FILE=$DIR_RELEASE/cmake-build/conan_toolchain.cmake -DCMAKE_BUILD_TYPE=release
fi

if [ "$program_option" = "debug" ];
then
    if [ ! -d "$DIR_RELEASE" ];
    then
        mkdir $DIR_RELEASE
    fi
    conan install $DIR_CONFIG_DEBUG --output-folder $DIR_DEBUG/cmake-build --build=missing
    cmake -S $DIR_CONFIG_DEBUG -B $DIR_DEBUG -DCMAKE_TOOLCHAIN_FILE=$DIR_DEBUG/cmake-build/conan_toolchain.cmake -DCMAKE_BUILD_TYPE=debug
fi