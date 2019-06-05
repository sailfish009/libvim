#include "vim.h"

/* libvim.c */

/*
 * vimInit
 *
 * This must be called prior to using any other methods.
 *
 * This expects an `argc` and an `argv` parameters,
 * for the command line arguments for this vim instance.
 */
void vimInit(int argc, char **argv);

/***
 * Buffer Methods
 ***/

/*
 * vimBufferOpen
 *
 * Open a buffer and set as current.
 */

buf_T *vimBufferOpen(char_u *ffname_arg, linenr_T lnum, int flags);
buf_T *vimBufferGetCurrent(void);

char_u *vimBufferGetFilename(buf_T *buf);
int vimBufferGetId(buf_T *buf);
long vimBufferGetLastChangedTick(buf_T *buf);
char_u *vimBufferGetLine(buf_T *buf, linenr_T lnum);
size_t vimBufferGetLineCount(buf_T *buf);
int vimBufferGetModified(buf_T *buf);

void vimSetBufferUpdateCallback(BufferUpdateCallback bufferUpdate);

/***
 * Window Methods
 ***/
linenr_T vimWindowGetCursorLine(void);
colnr_T vimWindowGetCursorColumn(void);
pos_T vimWindowGetCursorPosition(void);

/***
 * User Input
 ***/
void vimInput(char_u *input);

void vimExecute(char_u *cmd);

/***
 * Misc
 ***/
int vimGetMode(void);

/* vim: set ft=c : */
