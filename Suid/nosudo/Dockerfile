FROM centos 
MAINTAINER Andrey Alexeev <salexs95@yandex.ru>

RUN groupadd -g 1010 test \
    && useradd -d /home/ivan -c "User Ivan" -u 3333 -g 1010 ivan \
    && useradd -d /home/petr -c "User Petr" -u 4444 -g 1010 petr

COPY ./suid_scr.sh /
COPY ./prog /

RUN chown petr suid_scr.sh prog \
    && chgrp 1010 suid_scr.sh prog \
    && chmod 777 suid_scr.sh prog \
    && chmod +s suid_scr.sh prog
#    && chmod u+s suid_scr.sh

ENTRYPOINT ["/bin/bash"]
