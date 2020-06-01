# Automatically generated by configure
# Configured with: './configure' '--platform=libretro'
CC = gcc
CXX = g++
AS = as
CFLAGS +=  -fPIC -Wno-unused-result
ASFLAGS += 
LDFLAGS += 
MAIN_LDFLAGS +=  -shared -Wl,--no-undefined
MAIN_LDLIBS += -lpng  -ldl -lm -lpthread -lz -lwayland-client -lwayland-egl
PLUGIN_CFLAGS +=  -fPIC

TARGET = libretro.so
ARCH = x86_64
PLATFORM = libretro
BUILTIN_GPU = peops
SOUND_DRIVERS = libretro
PLUGINS =
HAVE_TSLIB = 1