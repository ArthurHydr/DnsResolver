#include <stdio.h>
#include <netdb.h>
#include <arpa/inet.h>

int main(int argc, char *argv[]){
    
    if(argc < 1) {
        printf("Use: dnsResolver <domain> \n");
        return 0;

    } else {

        struct hostent *host = gethostbyname(argv[1]);
        char *getIP = inet_ntoa(*((struct in_addr *)host -> h_addr));
        
        if (host == NULL) {
            printf("Error\n");
        } else {
            printf("IP: %s\n", getIP);
        }
    }
}
