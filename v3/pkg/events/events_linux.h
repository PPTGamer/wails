//go:build linux

#ifndef _events_h
#define _events_h

extern void processApplicationEvent(unsigned int, void* data);
extern void processWindowEvent(unsigned int, unsigned int);

#define EventApplicationStartup 1050
#define EventSystemThemeChanged 1051
#define EventWindowDeleteEvent 1052
#define EventWindowDidMove 1053
#define EventWindowDidResize 1054
#define EventWindowFocusIn 1055
#define EventWindowFocusOut 1056
#define EventWindowLoadChanged 1057

#define MAX_EVENTS 1058


#endif