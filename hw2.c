#include<stdio.h>
#include<stdlib.h>
void Triangle(char ch);
void mult(int n);
int main(void){
	printf("~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n");   //�ӤH����e�� 
	printf("||�W�l:������               ||\n");
	printf("------------------------------\n");
	printf("||�Z��:E1B                  ||\n");
	printf("------------------------------\n");
	printf("||�y��:38                   ||\n");
	printf("------------------------------\n");
	printf("||����:���R�B���x�y�B�𨬲y ||\n");
	printf("------------------------------\n");
	printf("||�̳��w���:�ƾ�           ||\n");
	printf("------------------------------\n");
	printf("||�~��a:���               ||\n");
	printf("------------------------------\n");
	printf("||�Q�Ǫ�:�]�N�B�g�{���B��� ||\n");
	printf("------------------------------\n");
	printf("!!    �H�W�O�ڪ��ӤH���    !!\n"); 
	printf("*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n");
	system("pause");        //�Ȱ��{�� �����@���~�� 
	system("cls");          //�����@��M�� 
	
	int a=3,p;
    int con=1;                  //�]�w����ܼ� ,�K�X�����J���� 
	
	printf("�п�J4�ӼƦr���K�X:");
	scanf("%d",&p);  //��J�K�X
		while (p!=2024 && a>1) {	// �K�X����
        printf("�K�X���~!!�A�٦�%d�����|\n",--a);
        printf("�Э��s��J4��ƪ��K�X: ");
        scanf("%d", &p);
        } 
        if (p!=2024) {              // ���ҥ���
        printf("�K�X���~! �{������.\n");
        return 1;
    }
	 while(con){
	 	getchar();			// ���Ӵ����
		system("cls");      //�����@��M��
		printf("~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n");   //�ӤH������ 
		printf("------------------------------\n");
		printf("||a. �e�X�����T����         ||\n");
		printf("------------------------------\n");
		printf("||b. ��ܭ��k��             ||\n");
		printf("------------------------------\n");
		printf("||c. ����                   ||\n");
		printf("------------------------------\n");
		printf("*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n");
		
		char choice;
            printf("�п�J�ﶵ (a-c): ");
            scanf("%c", &choice); // Ū���ﶵ
			getchar();
            switch (choice) {
                case 'a':
                	system("cls");
                	char z;
                    printf("�п�J�@��(a-n)���r��:"); // �L�X�����T����
                    scanf("%c",&z);
                    getchar(); // ���Ӵ����
                    while (z < 'a' || z > 'n') {
        			printf("���~�A��J�r�����b 'a' �� 'n' �϶�\n");
        			printf("�Э��s��J�@��(a-n)���r��:");
        			scanf("%c",&z); // �A��Ū����J
        			getchar(); // ���Ӵ����
    				}
          	      	Triangle(z);
          	      	break;
                case 'b':
                    system("cls");
                    int n,num;
                    printf("�п�J�@��1��9�����n�G");
                    scanf("%d", &num);
                    getchar();
                    while(num<1 || num>9) {
        			printf("���~�A�п�J1��9���������\n");
        			scanf("%d", &num);
        			getchar();
    				}
                    mult(num); // ��ܭ��k��
                    break;
                case 'c':
                    printf("Continue? (y/n): "); //�O�_�~�� 
                    char k;
                	scanf("%c",&k);
                	getchar();
                	if (k=='y' || k=='Y') {
                            con=1;         // �^��ﶵ��J
                        } else if (k=='n' || k=='N') {
                           con=0;         // �����{��
                        } else {
                            while(k!='n' || k!='y'){
							printf("���~�G�п�J 'y' �� 'n'\n");
							scanf("%c",&k);
                			getchar();
						}
                            con=1;
                        }
                        break;
                default:
                    printf("���~: ��J�r�����b 'a' �� 'c' �϶�\n");
                }
            }
	system("pause");
	return 0;
	}
	
void Triangle(char ch){   //�T���Ϊ���� 
    int i,j;
    int rows = ch-'a'+1; // ��J�r���p��n�L�X�X��

    for (i=0; i<rows;i++){
        // �L�X�Ů�
        for (j = rows-i-1;j>0;j--){
            printf(" ");
        }
        // �L�X�r��
        for (j=0;j<=i;j++){
            printf("%c", 'a' + j);
        }
        printf("\n");
    }
}

// ��ܭ��k���禡
void mult(int n) {
    printf("���k��G\n");          //���ͭ��k��
    int i,j;
    for(i=1;i<=n;++i) {
        for (j=1;j<=n;++j) {
            printf("%d*%d =%-3d",i,j,i*j);   //%-3d�ϱo�ƪ����
        }
        printf("\n");
    }
}
