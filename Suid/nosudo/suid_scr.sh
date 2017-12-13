#!/bin/bash

cd /mounted/petr \
    && mkdir test && cd test \
    && echo "Hello my friend from $1" >> hello_from_docker
