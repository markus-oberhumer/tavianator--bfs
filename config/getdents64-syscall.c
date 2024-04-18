// Copyright © Tavian Barnes <tavianator@tavianator.com>
// SPDX-License-Identifier: 0BSD

#include <dirent.h>
#include <sys/syscall.h>
#include <unistd.h>

int main(void) {
	struct dirent64 de;
	syscall(SYS_getdents64, 3, &de, 1024);
	return 0;
}
