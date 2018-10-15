int UART0_Open(int fd,char* port);
void UART0_Close(int fd);
int UART0_Set(int fd,int speed,int flow_ctrl,int databits,int stopbits,int parity);
int UART0_Init(int fd, int speed,int flow_ctrl,int databits,int stopbits,int parity);

int UART0_Recv(int fd, char *rcv_buf,int data_len);
int UART0_Send(int fd, unsigned char *send_buf,int data_len);





