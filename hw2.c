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
	
	int a=0,p;                  //�]�w����ܼ� ,�K�X��J���� 
	while(a<3){
	printf("�п�J4�ӼƦr���K�X:");
	scanf("%d",&p);  //��J�K�X
	getchar(); // ���Ӵ���� 
	if(p==2024){            //�ˬd�K�X�藍�� 
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
                    Triangle(z);
					break;
                case 'b':
                    system("cls");
                    int num;
                    printf("�п�J�@��1��9�����n�G");
                    scanf("%d", &num);
                    getchar(); // ���Ӵ����
                    mult(num); // ��ܭ��k��
                    break;
                case 'c':
                    printf("Continue? (y/n): "); //�O�_�~�� 
                    char k;
                	scanf("%c",&k);
                	getchar(); // ���Ӵ����
                	if (k=='y' || k=='Y') {
                            break;            // �^��ﶵ��J
                        } else if (k=='n' || k=='N') {
                            return 0;         // �����{��
                        } else {
                            printf("���~�G�п�J 'y' �� 'n'\n");
                        }
                        break;
                default:
                    printf("���~: ��J�r�����b 'a' �� 'c' �϶�\n");
                }
	}else{
		a++;
		printf("�K�X���~!! �z�٦� %d �����վ��|\n", 3-a);
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
    // �ˬd��J�O�_�b�d��
    if (n<1 || n>9) {
        printf("���~�G�п�J1��9���������\n");
        return;
    }
    printf("���k��G\n");          //���ͭ��k��
    int i,j;
    for(i=1;i<=n;++i) {
        for (j=1;j<=n;++j) {
            printf("%d*%d =%-3d",i,j,i*j);   //%-3d�ϱo�ƪ����
        }
        printf("\n");
    }
}
