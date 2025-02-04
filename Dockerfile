FROM ubuntu:22.04

RUN apt-get update -y
RUN apt-get upgrade -y

RUN apt-get install -y curl
RUN apt-get install -y git
RUN apt-get install -y gcc
RUN apt-get install -y gdb
RUN apt-get install -y man-db

ADD .config /root/.config
RUN curl -LO https://github.com/neovim/neovim/releases/latest/download/nvim-linux-x86_64.tar.gz
RUN rm -rf /opt/nvim
RUN tar -C /opt -xzf nvim-linux-x86_64.tar.gz
ENV PATH="$PATH:/opt/nvim-linux-x86_64/bin"


WORKDIR /development

