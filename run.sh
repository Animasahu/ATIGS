#!/bin/bash

echo "ENTER THE NUMBER OF FILES TO BE GENERATED"

read NUMBER

echo "ENTER THE INPUT FILE PATH"

read PATH

mkdir -p Output

gcc ./*.c -o Program

./Program $NUMBER $PATH