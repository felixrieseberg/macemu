cd ~/Code/emsdk && source ./emsdk_env.sh && cd -

./embuild.sh
make clean
make
./emafterbuild.sh
