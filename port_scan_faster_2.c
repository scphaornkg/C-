#include <string.h>
#include <stdio.h>
#include <Winsock2.h>
#include <pthread.h>
#include <unistd.h>
#include <stdlib.h>
#define DEST_IP "100.72.107.105"
int ia[13];
void* child();
void* child1();
void* child2();
void* child3();
void* child4();
void* child5();
void* child6();
void* child7();
void* child8();
void* child9();
int port[65536];
int main()
{
    int j,in,inend,de,z,z1;
    WORD wVersionRequested = MAKEWORD(2,2); 
    WSADATA wsaData;
    
    if(WSAStartup(wVersionRequested,&wsaData)!= 0)
    {
        printf("��l��WinSock����\n") ;
        return 0;
    }
    
    printf("input start port and end port\n");
    scanf("%d%d",&in,&inend);
    int i[13],u;
    for(u=0;u<13;u++)
      i[u]=in;
    de=(inend-in)/11;
    for(z=1;z<13;z++)
    {
      for(z1=1;z1<z;z1++)
      {
        i[z]=i[z]+de;
      }
   }
    for(u=0;u<12;u++)
      ia[u]=i[u];
    ia[12]=inend;
    
    int sockfd,n;
    pthread_t a; // �ŧi pthread �ܼ�
      pthread_create(&a, NULL, child, NULL); // �إߤl�����
     pthread_t b; // �ŧi pthread �ܼ�
      pthread_create(&b, NULL, child1, "NULL"); // �إߤl�����
      
       pthread_t c; // �ŧi pthread �ܼ�
      pthread_create(&c, NULL, child2, "NULL"); // �إߤl�����
      
       pthread_t d; // �ŧi pthread �ܼ�
      pthread_create(&d, NULL, child3, "NULL"); // �إߤl�����
       pthread_t e; // �ŧi pthread �ܼ�
      pthread_create(&e, NULL, child4, "NULL"); // �إߤl�����
       pthread_t f; // �ŧi pthread �ܼ�
      pthread_create(&f, NULL, child5, "NULL"); // �إߤl�����
     pthread_t g; // �ŧi pthread �ܼ�
      pthread_create(&g, NULL, child6, "NULL"); // �إߤl�����
     pthread_t h; // �ŧi pthread �ܼ�
      pthread_create(&h, NULL, child7, "NULL"); // �إߤl�����
       pthread_t ii; // �ŧi pthread �ܼ�"NULL"); // �إߤl�����
       
       pthread_create(&ii, NULL, child8, "NULL"); // �إߤl�����
       pthread_t jj; // �ŧi pthread �ܼ�
      pthread_create(&jj, NULL, child9, "NULL"); // �إߤl�����
      j=ia[2];
      int start=ia[1];
    for(start;start<j;start++)
    {
      struct sockaddr_in dest_addr;
      
      sockfd = socket(AF_INET, SOCK_STREAM, 0);
	  
      dest_addr.sin_family = AF_INET;

      dest_addr.sin_port = htons(start);

      dest_addr.sin_addr.s_addr = inet_addr(DEST_IP);

      n=connect(sockfd, (struct sockaddr *)&dest_addr, sizeof(struct sockaddr));
      
      if(n==-1)
        port[start]=-1;
      else
        port[start]=start;
      
    }
    pthread_join(a, NULL); // ���ݤl��������槹��
    pthread_join(b, NULL); // ���ݤl��������槹��
    pthread_join(c, NULL); // ���ݤl��������槹��
    pthread_join(d, NULL); // ���ݤl��������槹��
    pthread_join(e, NULL); // ���ݤl��������槹��
    pthread_join(f, NULL); // ���ݤl��������槹��
    pthread_join(g, NULL); // ���ݤl��������槹��
    pthread_join(h, NULL); // ���ݤl��������槹��
    pthread_join(ii, NULL); // ���ݤl��������槹��
    pthread_join(jj, NULL); // ���ݤl��������槹��
    for(in=in;in<inend;in++)
    {
      if(port[in]!=-1)
        printf("%d �}��\n",port[in]);
    }
    system("pause");
    return 0;
}
void* child() 
{
	int i=ia[2],j=ia[3];
	int sockfd,n;
    for(i;i<j;i++)
    {

      
      struct sockaddr_in dest_addr;
      
      sockfd = socket(AF_INET, SOCK_STREAM, 0);

      dest_addr.sin_family = AF_INET;

      dest_addr.sin_port = htons(i);

      dest_addr.sin_addr.s_addr = inet_addr(DEST_IP);

      n=connect(sockfd, (struct sockaddr *)&dest_addr, sizeof(struct sockaddr));
      
      if(n==-1)
        port[i]=-1;
      else
        port[i]=i;
    }
  pthread_exit(NULL); // ���}�l�����
}


void* child1() 
{
	int i=ia[3],j=ia[4];
	int sockfd,n;
    for(i;i<j;i++)
    {

      
      struct sockaddr_in dest_addr;
      
      sockfd = socket(AF_INET, SOCK_STREAM, 0);

      dest_addr.sin_family = AF_INET;

      dest_addr.sin_port = htons(i);

      dest_addr.sin_addr.s_addr = inet_addr(DEST_IP);

      n=connect(sockfd, (struct sockaddr *)&dest_addr, sizeof(struct sockaddr));
      
      
      
      if(n==-1)
        port[i]=-1;
      else
        port[i]=i;
    }
  pthread_exit(NULL); // ���}�l�����
}
void* child2()
{
	int i=ia[4],j=ia[5];
	int sockfd,n;
    for(i;i<j;i++)
    {

      
      struct sockaddr_in dest_addr;
      
      sockfd = socket(AF_INET, SOCK_STREAM, 0);

      dest_addr.sin_family = AF_INET;

      dest_addr.sin_port = htons(i);

      dest_addr.sin_addr.s_addr = inet_addr(DEST_IP);

      n=connect(sockfd, (struct sockaddr *)&dest_addr, sizeof(struct sockaddr));
      
      
      
      if(n==-1)
        port[i]=-1;
      else
        port[i]=i;
    }
  pthread_exit(NULL); // ���}�l�����
}

void* child3()
{
    int i=ia[5],j=ia[6];
	int sockfd,n;
    for(i;i<j;i++)
    {

      
      struct sockaddr_in dest_addr;
      
      sockfd = socket(AF_INET, SOCK_STREAM, 0);

      dest_addr.sin_family = AF_INET;

      dest_addr.sin_port = htons(i);

      dest_addr.sin_addr.s_addr = inet_addr(DEST_IP);

      n=connect(sockfd, (struct sockaddr *)&dest_addr, sizeof(struct sockaddr));
      
      
      
      if(n==-1)
        port[i]=-1;
      else
        port[i]=i;
    }
  pthread_exit(NULL); // ���}�l�����	
}

void* child4()
{
    int i=ia[6],j=ia[7];
	int sockfd,n;
    for(i;i<j;i++)
    {

      
      struct sockaddr_in dest_addr;
      
      sockfd = socket(AF_INET, SOCK_STREAM, 0);

      dest_addr.sin_family = AF_INET;

      dest_addr.sin_port = htons(i);

      dest_addr.sin_addr.s_addr = inet_addr(DEST_IP);

      n=connect(sockfd, (struct sockaddr *)&dest_addr, sizeof(struct sockaddr));
      
      if(n==-1)
        port[i]=-1;
      else
        port[i]=i;
    }
  pthread_exit(NULL); // ���}�l�����
}

void* child5()
{
    int i=ia[7],j=ia[8];
	int sockfd,n;
    for(i;i<j;i++)
    {

      
      struct sockaddr_in dest_addr;
      
      sockfd = socket(AF_INET, SOCK_STREAM, 0);

      dest_addr.sin_family = AF_INET;

      dest_addr.sin_port = htons(i);

      dest_addr.sin_addr.s_addr = inet_addr(DEST_IP);

      n=connect(sockfd, (struct sockaddr *)&dest_addr, sizeof(struct sockaddr));
      
      
      
      if(n==-1)
        port[i]=-1;
      else
        port[i]=i;
    }
  pthread_exit(NULL); // ���}�l�����
}

void* child6()
{
	int i=ia[8],j=ia[9];
	int sockfd,n;
    for(i;i<j;i++)
    {
      struct sockaddr_in dest_addr;
      
      sockfd = socket(AF_INET, SOCK_STREAM, 0);

      dest_addr.sin_family = AF_INET;

      dest_addr.sin_port = htons(i);

      dest_addr.sin_addr.s_addr = inet_addr(DEST_IP);

      n=connect(sockfd, (struct sockaddr *)&dest_addr, sizeof(struct sockaddr));
      
      
      
      if(n==-1)
        port[i]=-1;
      else
        port[i]=i;
    }
  pthread_exit(NULL); // ���}�l�����
}

void* child7()
{
    int i=ia[9],j=ia[10];
	int sockfd,n;
    for(i;i<j;i++)
    {

      
      struct sockaddr_in dest_addr;
      
      sockfd = socket(AF_INET, SOCK_STREAM, 0);

      dest_addr.sin_family = AF_INET;

      dest_addr.sin_port = htons(i);

      dest_addr.sin_addr.s_addr = inet_addr(DEST_IP);

      n=connect(sockfd, (struct sockaddr *)&dest_addr, sizeof(struct sockaddr));
      
      
      
      if(n==-1)
        port[i]=-1;
      else
        port[i]=i;
    }
  pthread_exit(NULL); // ���}�l�����
}

void* child8()
{
    int i=ia[10],j=ia[11];
	int sockfd,n;
    for(i;i<j;i++)
    {

      
      struct sockaddr_in dest_addr;
      
      sockfd = socket(AF_INET, SOCK_STREAM, 0);

      dest_addr.sin_family = AF_INET;

      dest_addr.sin_port = htons(i);

      dest_addr.sin_addr.s_addr = inet_addr(DEST_IP);

      n=connect(sockfd, (struct sockaddr *)&dest_addr, sizeof(struct sockaddr));
      
      if(n==-1)
        port[i]=-1;
      else
        port[i]=i;
    }
  pthread_exit(NULL); // ���}�l�����
}

void* child9()
{
    int i=ia[11],j=ia[12];
	int sockfd,n;
    for(i;i<j;i++)
    {
      
      struct sockaddr_in dest_addr;
      
      sockfd = socket(AF_INET, SOCK_STREAM, 0);

      dest_addr.sin_family = AF_INET;

      dest_addr.sin_port = htons(i);

      dest_addr.sin_addr.s_addr = inet_addr(DEST_IP);

      n=connect(sockfd, (struct sockaddr *)&dest_addr, sizeof(struct sockaddr));
      
      if(n==-1)
        port[i]=-1;
      else
        port[i]=i;
    }
  pthread_exit(NULL); // ���}�l����� 

}
