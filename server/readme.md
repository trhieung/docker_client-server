
# Docker
## build and run
docker build -t custom_http_server . && docker image prune -f --filter "dangling=true"
docker run --rm -it -p 8080:8080 custom_http_server

## attack the bash
docker exec -it custom_http_server /bin/bash

# API


## API-user
1. login
case 1: fail
```
curl -X POST http://0.0.0.0:8080/api/user/login \
     -H "Content-Type: application/json" \
     -d '{"username": "admin", "password": "password"}'
```

case 2: correct
```
curl -X POST http://0.0.0.0:8080/api/user/login \
     -H "Content-Type: application/json" \
     -d '{"username": "user1", "password": "pass1"}'
```

2. ready
```
curl -X GET "http://0.0.0.0:8080/api/user-node/123-456/ready"
```

3. upload
echo -n "test-data-" | curl -X POST \
  -H "Content-Type: application/octet-stream" \
  -H "Filename: your_file_name" \
  -H "Range: bytes=0-10" \
  --data-binary @- \
  "http://0.0.0.0:8080/api/user-node/1-1/upload"

4. download
```
curl -X POST http://0.0.0.0:8080/api/user-node/1-1/download \
     -H "Content-Type: application/json" \
     -d '{"file_name": "your_file_name", "file_range": "bytes=?"}'
```

```
curl -X GET "http://0.0.0.0:8080/api/user-node/1-1/download" \
     -H "Filename: your_file_name"
```

4. files
```
curl -X GET "http://0.0.0.0:8080/api/user-node/1-1/files"
```

## API-node
1. init
```
echo -n "test-data-" | curl -X POST \
  -H "Content-Type: application/octet-stream" \
  -H "Filename: your_file_name" \
  -H "Range: bytes=0-10" \
  --data-binary @- \
  "http://0.0.0.0:8080/api/user-node/1-1/upload"
```

1. ready
```
curl -X GET "http://0.0.0.0:8080/api/node/1/ready"
```
2. download
```
curl -X GET "http://0.0.0.0:8080/api/node/1/download" \
     -H "Filename: user1_your_file_name"
```
3. upload
```
echo -n "test-data-" | curl -X POST \
  -H "Content-Type: application/octet-stream" \
  -H "Filename: user1_your_file_name" \
  -H "Range: bytes=0-10" \
  --data-binary @- \
  "http://0.0.0.0:8080/api/node/1/upload"
```