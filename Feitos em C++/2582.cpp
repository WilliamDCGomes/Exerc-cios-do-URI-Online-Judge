#include<stdio.h>
using namespace std;
int main() {
	int test,i;
	scanf("%d",&test);
	for(i=0;i<test;i++){
		int num1,num2;
		scanf("%d",&num1);
		scanf("%d",&num2);
		int sum=num1+num2;
		switch(sum){
			case 1:
				printf("P.Y.N.G.\n");
				break;
			case 2:
				printf("DNSUEY!\n");
				break;
			case 3:
				printf("SERVERS\n");
				break;
			case 4:
				printf("HOST!\n");
				break;
			case 5:
				printf("CRIPTONIZE\n");
				break;
			case 6:
				printf("OFFLINE DAY\n");
				break;
			case 7:
				printf("SALT\n");
				break;
			case 8:
				printf("ANSWER!\n");
				break;
			case 9:
				printf("RAR?\n");
				break;
			case 10:
				printf("WIFI ANTENNAS\n");
				break;
			default:
				printf("PROXYCITY\n");
				break;
		}
	}
	return 0;
}
