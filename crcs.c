#include<stdio.h>
#include<sys/types.h>
#include<sys/shm.h>
#include<string.h>
main()
{
int a,shmid;
char ip[26],mac[26],ptr[26];
char *ptr,*shmptr;
shmid=shmget(3000,10,0666);
shmptr=shmat(shmid,NULL,0);
printf("ARP table");
printf("\nARP\n2.RARP\n3.exit\n");
printf("enter your choice:\n");
scanf("%d",&a);
switch(a)
{
case 1: printf("enter the ip address");
	scanf("%d",&ip);
	ptr=strstr(shmptr);
	scanf("%d",ptr2);
	printf("the mac address is:",ptr2);
	break;
case 2: printf("enter the mac address");
	scanf("%d",&mac);
	ptr=strstr(shmptr);
	scanf("%d",ptr2);
	printf("the ip address is:",ptr2);
	break;
case 3: exit(0);
	break;
}}
