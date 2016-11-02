#!/bin/bash
## ARP is The Apache Portable Runtime

set -e # cause the shell immediately exist
       # if sub command or pipelien return non-zero result

## backup current dir
path_bk=`pwd`

## goto somewhere safe
cd /tmp

## get the source to base APR 1.4.6
curl -L -O http://archive.apache.org/dist/apr/apr-1.4.6.tar.gz

## extract it and go to into the source
tar -xzvf apr-1.4.6.tar.gz
cd apr-1.4.6

## configure, make, make install
./configure
make
sudo make install

## reset and clean up
cd /tmp
rm -rf apr-1.4.6 apr-1.4.6.tar.gz

## do the same with apr-util
curl -L -O http://archive.apache.org/dist/apr/apr-util-1.4.1.tar.gz

## extract
tar -xvzf apr-util-1.4.1.tar.gz
cd apr-util-1.4.1

## configure, make, make install
./configure --with-apr=/usr/local/apr
make
sudo make install

## cleanup
cd /tmp
rm -rf apr-util-1.4.1* apr-1.4.6*

## to to current dir
cd $path_bk
