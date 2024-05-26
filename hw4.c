#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#define max_st 10
#define min_st 5
#define max_name 50
#define max_id 6

struct st{
    char name[max_name];
    int id;
    int math;
    int physics;
    int english;
};

void inputst(int n,struct st students[]) {
	int i;
    for(i=0;i<n;++i) {
        printf("��J��%d��ǥͪ����:\n", i + 1);
        // ��J�ǥͩm�W
        printf("�m�W: ");
        while (scanf("%s",students[i].name)!=1) {
            printf("��J���~�A�Э��s��J�m�W: ");
            while (getchar() != '\n');  // �M���w�İ�
        }
        // ��J�Ǹ�
        printf("�Ǹ�(6����): ");
        while (scanf("%d", &students[i].id)!=1 || students[i].id<100000 || students[i].id>999999) {
            printf("��J���~�A�Э��s��J�Ǹ� (6����): ");
            while (getchar() != '\n');  // �M���w�İ�
        }
        // ��J�ƾǦ��Z
        printf("�ƾǦ��Z (0~100): ");
        while (scanf("%d", &students[i].math) != 1 || students[i].math < 0 || students[i].math > 100) {
            printf("��J���~�A�Э��s��J�ƾǦ��Z (0~100): ");
            while (getchar() != '\n');  // �M���w�İ�
        }
        // ��J���z���Z
        printf("���z���Z (0~100): ");
        while (scanf("%d", &students[i].physics) != 1 || students[i].physics < 0 || students[i].physics > 100) {
            printf("��J���~�A�Э��s��J���z���Z (0~100): ");
            while (getchar() != '\n');  // �M���w�İ�
        }
        // ��J�^�妨�Z
        printf("�^�妨�Z (0~100): ");
        while (scanf("%d", &students[i].english) != 1 || students[i].english < 0 || students[i].english > 100) {
            printf("��J���~�A�Э��s��J�^�妨�Z (0~100): ");
            while (getchar() != '\n');  // �M���w�İ�
        }
        printf("\n");
    }
}

void displayst(int n, struct st students[]) {
    int i;
    for (i=0;i<n;++i) {
        float avg = (students[i].math + students[i].physics + students[i].english) / 3.0;
        printf("�ǥͩm�W: %s\n", students[i].name);
        printf("�Ǹ�: %d\n", students[i].id);
        printf("�ƾǦ��Z: %d\n", students[i].math);
        printf("���z���Z: %d\n", students[i].physics);
        printf("�^�妨�Z: %d\n", students[i].english);
        printf("�������Z: %.1f\n", avg);
        printf("\n");
    }
}
	
void searchst(int n, struct st students[]) {
    char search_name[max_name];
    int found = 0;
    int i;
    printf("�п�J�n�j�M���ǥͩm�W: ");
    scanf("%s", search_name);
    
    for (i=0;i<n;++i) {
        if (strcmp(students[i].name,search_name)==0) {
            float avg = (students[i].math + students[i].physics + students[i].english) / 3.0;
            printf("�ǥͩm�W: %s\n", students[i].name);
            printf("�Ǹ�: %d\n", students[i].id);
            printf("�ƾǦ��Z: %d\n", students[i].math);
            printf("���z���Z: %d\n", students[i].physics);
            printf("�^�妨�Z: %d\n", students[i].english);
            printf("�������Z: %.1f\n", avg);
            printf("\n");
            found = 1;
            break;
        }
    }
    
    if(found!=1) {
        printf("��Ƥ��s�b�C\n");
    }
    
    printf("�����N���^�D���...\n");
    getchar();  // ���ݥΤ�����N��
}

void sortavg(int n, struct st students[]) {
    // �������Z���C���ǱƧǾǥͫH��
    int i,j;
    for (i=0;i<n-1;i++) {
        for (j=0;j<n-i-1;j++) {
            float avg1 = (students[j].math + students[j].physics + students[j].english) / 3.0;
            float avg2 = (students[j + 1].math + students[j + 1].physics + students[j + 1].english) / 3.0;
            if (avg1 < avg2) {
                // �洫�ǥͫH��
                struct st temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

void display_sortavg(int n, struct st students[]) {
    sortavg(n,students); // ���Ƨ�
	int i;
    // ���L�ƧǦZ���ǥͫH��
    printf("���������Z���C���ǦC�X�ǥ͸�T�G\n");
    for (i=0;i<n; ++i) {
        float avg = (students[i].math + students[i].physics + students[i].english) / 3.0;
        printf("�ǥͩm�W: %s\n", students[i].name);
        printf("�Ǹ�: %d\n", students[i].id);
        printf("�������Z: %.1f\n\n", avg);
    }
}


int main(void){
	
	struct st students[max_st];
    int stcount = 0;
    
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
        	      	printf("�п�J�ǥͤH�� (5~10): ");
        	      	while (scanf("%d",&stcount)!=1 || stcount < min_st||stcount > max_st) {
                    printf("��J���~�A�Э��s��J�ǥͤH�� (5~10): ");
                    while (getchar() != '\n');
                }
                inputst(stcount,students);
                break;
                
                case 'b':
                	system("cls");
                	displayst(stcount,students);
                	system("pause");  // �Ȱ��H���ݨϥΪ̫����N��
               		break;
                case 'c':
                	system("cls");
                    searchst(stcount, students);
                    break;
                case 'd':
                	system("cls");
    				display_sortavg(stcount,students);
    				printf("�����N���^�D���...\n");
   					getchar();  // ���ݥΤ�����N��
    break;
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

