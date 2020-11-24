#include <stdio.h>
#include <assert.h>
#include <syscall.h>

#define MIN(a,b) ((a)<(b) ? (a) : (b))

char *fgets(char *s, int n, FILE *f)
{
	int fd = f->fd;
	char *ptr = s;
	int i = 0;
	for(i = 0; i < n; i++){
		read(fd, ptr, 1);
		if(*ptr == '\n'){
			/* Terminate the string so we don't read old buffer data */
			ptr[1] = '\0';
			break;
		}
		ptr++;
	}
	/* Make sure string is null terminated */
	s[n-1] = '\0';
	return s;
}

