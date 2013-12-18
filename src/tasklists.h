#ifndef _TASKLISTS_H
#define _TASKLISTS_H

typedef struct {
	int id;
	char* title;
	int size;
} TL_Item;

void tl_init();
void tl_deinit();
void tl_show();
void tl_set_count(int);
void tl_set_item(int, TL_Item);

#endif