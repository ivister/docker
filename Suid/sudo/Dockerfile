# Base image is origin centos image from hub.docker.com
FROM centos 

# Author
MAINTAINER Andrey Alexeev <salexs95@yandex.ru>

# Installing sudo utility
RUN yum install -y sudo

# Create group with gid like a host gid
RUN groupadd -g 1010 test \
    && useradd -d /home/ivan -c "User Ivan" -u 3333 -g 1010 ivan \
    && useradd -d /home/petr -c "User Petr" -u 4444 -g 1010 petr

# Make Ivan as administrator
RUN echo "ivan ALL=(ALL) NOPASSWD: ALL" >> /etc/sudoers

# Copy suid script and "c-shell" for this script to root directory of container
COPY ./suid_scr.sh /
COPY ./prog /

# Make script and "c-shell" suid
RUN chown root suid_scr.sh prog \
    && chgrp 1010 suid_scr.sh prog \
    && chmod 777 suid_scr.sh prog \
    && chmod +s suid_scr.sh prog

# Command to run when container starts
ENTRYPOINT ["/bin/bash"]
