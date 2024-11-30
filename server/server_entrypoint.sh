# server_entrypoint.sh
#!/bin/sh
echo "Server is running"
pip list
python ./src/SE10_server.py