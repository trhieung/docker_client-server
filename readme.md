# Docker

## Run all the project with docker compose
`docker compose up`

for detach
`docker compose up -d`

for rename old service
`docker compose up --remove-orphans`

usefull command for debug
`docker compose up -d --remove-orphans --build  && docker image prune -f --filter "dangling=true"`

## Stop running the project
`docker compose down`


# Server-side
## Access the server container's shell
`docker exec -it docker_template-server-1 /bin/bash`

## Show logs
`docker logs docker_template-server-1`

# Client-side
`docker exec -it docker_template-user-1-1 /bin/bash`

## Access the server container's shell
`docker logs docker_template-user-1-1`


