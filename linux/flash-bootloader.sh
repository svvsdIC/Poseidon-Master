#!/bin/sh
set -e

# Load the config variables for the attached board
source /opt/openrov/cockpit/linux/get-board-config.sh

# Run the bootloader script provided
if [ ! -z "$BOOTLOADER_SCRIPT" ] ; then
	eval $BOOTLOADER_SCRIPT
	exit 0
else
	echo "Board does not support flashing the bootloader!"
	exit 1
fi