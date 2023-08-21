#cd gtest-docker; docker build -t gtestimage --build-arg GTEST_ENABLED=ON -f docker/Dockerfile .
#then run - docker run -it --rm -e GTEST_ENABLED=ON gtestimage

# Use a base image with the desired OS and libraries
FROM ubuntu:latest

ENV DEBIAN_FRONTEND=noninteractive
# Set the working directory in the container
WORKDIR /app

# Copy the necessary files into the container
COPY ./src /app/src
COPY ./tests /app/tests
COPY ./CMakeLists.txt /app



# Install required packages
RUN apt-get update && \
    apt-get install -y cmake g++ libgtest-dev 

ARG GTEST_ENABLED    

RUN if [ "$GTEST_ENABLED" = "ON" ]; then \
    mkdir build && cd build && \
    set -x && cmake -DGTEST_ENABLED=ON .. && make gtesting; \
    else \
    mkdir build && cd build && \
    set -x && cmake .. && make normal-build; \
    fi

# Command to run when the container starts
# ...

# Set the command based on the value of GTEST_ENABLED
CMD ["/bin/sh", "-c", "if [ \"$GTEST_ENABLED\" = \"ON\" ]; then ./build/gtesting; else ./build/normal-build; fi"]

