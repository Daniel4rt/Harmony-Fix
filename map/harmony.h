#ifndef _HARMONY_H
#define _HARMONY_H

struct map_session_data;

void harmony_init();
void harmony_final();

void harmony_parse(int fd,struct map_session_data *sd);

void harmony_logout(struct map_session_data *sd);

#endif

