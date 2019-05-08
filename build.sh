#!/bin/bash

echo "---------------"
echo "rm ./ uImage and dtb"
rm uImage exynos4412-tiny4412.dtb

echo "make"
make uImage LOADADDR=0x40007000 -j4

echo "make dtb"
make dtbs

echo "backup config"
cp .config tiny4412_defconfig

echo "copy uImage"
cp arch/arm/boot/uImage ./

echo "copy dtb"
cp arch/arm/boot/dts/exynos4412-tiny4412.dtb ./

echo "over"


