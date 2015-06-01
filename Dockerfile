FROM debian:latest

MAINTAINER Carlos Martin Sanchez "carlosvin@gmail.com"

RUN apt-get update && apt-get install -y \
  autoconf \
  autotools-dev \
  build-essential \
  curl \
  gcc \
  git \
  libc6-dbg \
  libc6-dev \
  libgtest-dev \
  libgflags-dev \
  libtool \
  make \
  libzmq3-dev \
  libhiredis-dev \
  meson \
  unzip && apt-get clean

RUN git clone https://github.com/grpc/grpc.git /var/local/git/grpc
RUN cd /var/local/git/grpc && \
  git submodule update --init --recursive

RUN cd /var/local/git/grpc/third_party/protobuf && \
  ./autogen.sh && \
  ./configure --prefix=/usr && \
  make -j12 && make check && make install && make clean

RUN cd /var/local/git/grpc && make install

#Install event store

RUN git clone https://github.com/carlosvin/eventstore.git
WORKDIR /eventstore
RUN git pull
RUN mkdir bin
WORKDIR /eventstore/bin
RUN meson ../src .
RUN ninja

ENV port_sub 50001
ENV port_req 50002

EXPOSE $port_sub
EXPOSE $port_req

ENTRYPOINT ./content_server $port_sub $port_req
