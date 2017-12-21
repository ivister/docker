# Base image is origin centos image from hub.docker.com
FROM centos 

# Author
MAINTAINER Andrey Alexeev <salexs95@yandex.ru>

# Installing sudo utility
RUN yum install -y sudo gcc

# Create group with gid like a host gid
RUN groupadd -g 1010 test \
    && useradd -d /home/ivan -c "User Ivan" -u 3333 -g 1010 ivan \
    && useradd -d /home/petr -c "User Petr" -u 4444 -g 1010 petr

# Make Ivan as administrator
RUN echo "ivan ALL=(ALL) NOPASSWD: ALL" >> /etc/sudoers

# Copy suid-program to root directory of container
COPY ./prog.c /

# Compile suid program
RUN gcc -Wall -o check_suid prog.c

# Make script and "c-shell" suid
RUN chown root check_suid\
    && chgrp 1010 check_suid \
    && chmod 777 check_suid \
    && chmod +s check_suid

# Command to run when container starts
ENTRYPOINT ["/bin/bash"]
