//
// Created by luocf on 2019/7/20.
//

#include "manager.h"

extern "C" {
manager mManager;
void startabc(char *ip, int port, char *data_root_dir) {
    mManager.start(ip, port, data_root_dir);
}

void createGroupabc() {
    mManager.createGroup();
}
}
