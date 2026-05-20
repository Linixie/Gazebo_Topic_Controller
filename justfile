default:
  just --list

build:
    #!/usr/bin/env bash
    cd ./plugins/topic_controller/build
    cmake ..
    make

debug: build
    #!/usr/bin/env bash
    cd ./plugins/topic_controller/
    export GZ_SIM_SYSTEM_PLUGIN_PATH=$(pwd)/build
    gz sim -v 4 test.sdf

start:
    #!/usr/bin/env bash
    cd ./plugins/topic_controller/
    export GZ_SIM_SYSTEM_PLUGIN_PATH=$(pwd)/build
    gz sim test.sdf
