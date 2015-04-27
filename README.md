# dynStruct
dynStruct is a in development tool using dynamoRio to recover internal
structure of a binary.

## Requirements
* CMake >= 2.8
* [DynamoRIO](https://github.com/DynamoRIO/dynamorio=

## Setup
Set the environment variable DYNAMORIO_HOME to the absolute path of your
DynamoRIO installation

execute `setup.sh`

## Usage
`drrun -c dynStruct -- <binary> <arg 1> <arg 2> ...`
