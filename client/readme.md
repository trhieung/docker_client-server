# Docker

# build and run
docker build -t user_image . && docker image prune -f --filter "dangling=true"
docker run --rm -it --name user_1 user_image

## Access the container's shell
docker exec -it user_image /bin/bash
