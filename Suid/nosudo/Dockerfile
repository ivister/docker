FROM centos
MAINTAINER Andrey Alexeev <salexs95@yandex.ru>

RUN groupadd -g 1010 test \
    && useradd -d /home/ivan -c "User Ivan" -u 3333 -g 1010 ivan

COPY ./suid_scr.sh /

RUN chgrp 1010 suid_scr.sh 
RUN     chmod 4755 suid_scr.sh 
#    && chmod u+s suid_scr.sh

ENTRYPOINT ["/bin/bash"]
