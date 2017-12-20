#!/bin/bash
echo `$EUID`
cd /mounted/petr \
    && mkdir test && cd test \
    && echo "Hello my friend from `whoami`" >> hello_from_docker
