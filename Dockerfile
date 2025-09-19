FROM ubuntu:22.04 as build

RUN apt-get update && \
    apt-get install -y \
        binutils-mips-linux-gnu \
        bsdextrautils \
        build-essential \
        git \
        libsdl2-dev \
        pkgconf \
        python3

RUN mkdir /sm64ds-remastered
WORKDIR /sm64ds-remastered
ENV PATH="/sm64ds-remastered/tools:${PATH}"

CMD echo 'Usage: docker run --rm -v ${PWD}:/sm64ds-remastered sm64ds-remastered make VERSION=us -j4\n' \
         'See https://github.com/ExcellentGamer/sm64ds-remastered/blob/master/README.md for more information'
