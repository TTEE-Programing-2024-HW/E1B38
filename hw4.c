#include<stdio.h>
#include<stdlib.h>
#include <time.h>
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
	
	int a=3,p,i,j;
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
		printf("||a.��J�ǥͦ��Z�θ�T      ||\n");
		printf("------------------------------\n");
		printf("||b.��ܸ�T                ||\n");
		printf("------------------------------\n");
		printf("||c.��ʷj�M�ǥ͸�T        ||\n");
		printf("------------------------------\n");
		printf("||d.�������Z���C����        ||\n");
		printf("------------------------------\n");
		printf("||e.����                    ||\n");
		printf("------------------------------\n");
		printf("*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n");
		
		char choice;
            printf("�п�J�ﶵ (a-d): ");
            scanf("%c", &choice); // Ū���ﶵ
			getchar();
            switch (choice) {
                case 'a':
                	system("cls");
        	      	
                case 'b':
                	system("cls");
                
                case 'c':
                	system("cls");
                
                case 'd':
                	system("cls");
                
                case 'e':
                	printf("Continue? (y/n): "); //�O�_�~�� 
                    char k;
                	scanf("%c",&k);
                	getchar();
                	if (k=='y' || k=='Y') {
                            con=1;         // �^��ﶵ��J
                        } else if (k=='n' || k=='N') {
                           con=0;         // �����{��
                        } else {
                            while(k!='n' && k!='y'){
							printf("���~�G�п�J 'y' �� 'n'\n");
							scanf("%c",&k);
                			getchar();
						}
                            con=1;
                        }
                        break;
                default:
                    printf("���~: ��J�r�����b 'a' �� 'e' �϶�\n");
                }
            }
	system("pause");
	return 0;
	}

