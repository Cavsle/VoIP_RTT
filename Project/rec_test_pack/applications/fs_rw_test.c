#include <string.h>
#include <rtthread.h>
#include <dfs_posix.h>

const char * filename = "/test.txt";
const char * text = "��ǰ����ɽ��ɽ��������������һ���Ϻ��У�һ��С���С�\r\n"
"һ���Ϻ��ж�С���н�: ��ǰ����ɽ��ɽ��������....\r\n";

extern void cat(const char* filename);

void fs_rw_test(void)
{
	int fd, length, str_length;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0);
    if (fd < 0)
    {
        rt_kprintf("[ERR] create file:%s failed\n", filename);
        return;
    }

    str_length = strlen(text);
    length = write(fd, text, str_length);
    if(length != str_length)
    {
        rt_kprintf("[ERR] write file:%s failed\n", filename);
        return;
    }
    close(fd);
    cat(filename);
}
