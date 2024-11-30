# Docker

## Run all the project with docker compose
`docker compose up`

for detach
`docker compose up -d`

for rename old service
`docker compose up --remove-orphans`

usefull command for debug
`docker compose up -d --remove-orphans --build`

## Stop running the project
`docker compose down`


# Server-side
## Show logs
`docker exec -it docker_template-server-1 /bin/bash && docker image prune -f --filter "dangling=true"`

## Access the server container's shell
`docker logs docker_template-server-1`

