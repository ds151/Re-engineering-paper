#!/bin/sh

if [ ! -e nxos ]; then
	git clone http://github.com/aholler/nxos.git nxos
fi

if [ -e nxos ]; then
	scons -C nxos/nxos
fi

