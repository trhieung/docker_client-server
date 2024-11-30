# Use a lightweight Linux base image
# FROM alpine:latest
FROM user_image:latest

# Set the working directory inside the container
WORKDIR /app

# Install necessary dependencies, including CMake
RUN apk add --no-cache cmake make g++ gcc curl openssl-dev libcurl curl-dev

# Copy files from the host machine to the container
COPY . .

# Ensure the entrypoint script is executable
RUN chmod +x client_entrypoint.sh

# Define the entrypoint for the container
ENTRYPOINT ["sh", "./client_entrypoint.sh"]
