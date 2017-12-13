FROM centos
MAINTAINER Andrey Alexeev <salexs95@yandex.ru>

RUN yum update && yum install -y sudo \
    && goupadd users --gid 1010 \
    && useradd -d /home/ivan -c "User Ivan" -u 3333 -g 1010 ivan

COPY ../suid_scr.sh /

RUN chmod a+x suid_scr.sh \
    && chmod a+s suid_scr.sh

ENTRYPOINT ["/bin/bash"]
