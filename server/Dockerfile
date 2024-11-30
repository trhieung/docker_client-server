# Use the official Python 3.11 image from Docker Hub
# FROM python:3.11-slim
FROM custom_http_server

# Set the working directory inside the container
WORKDIR /app

# Copy the current directory contents into the container at /app
COPY . .

# Install any necessary dependencies (if needed)
RUN apt-get update && \
    apt-get install -y procps htop iproute2 net-tools iputils-ping && \
    pip install --upgrade pip && \
    pip install --no-cache-dir -r requirements.txt

# Install any required dependencies (e.g., curl, bash)
RUN apt-get update && apt-get install -y bash

# Copy the entrypoint script into the container and make it executable
RUN chmod +x /app/server_entrypoint.sh

# Expose the port that the server will use (e.g., 8080)
EXPOSE 8080

# Set the entrypoint to the shell script
ENTRYPOINT ["sh", "/app/server_entrypoint.sh"]
