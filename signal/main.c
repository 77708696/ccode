#include<stdio.h>
#include<signal.h>
#include<stdlib.h>

/* �ص����� */
void signalHandler(int signum) {
	if(SIGINT == signum) {
		printf("������˼���Ctrl+C\n");
		//exit(0);
	}

}

int main() {
	/* ע��ص����� */
	signal(SIGINT, &signalHandler);

	/* ��ʼ��Ϣѭ�� */
	while(1) {
		getchar();
	}

	return 0;
}
